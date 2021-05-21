// See http://iphonedevwiki.net/index.php/Logos

#import <UIKit/UIKit.h>

#define HPDefaults [NSUserDefaults standardUserDefaults]
#define HPSwithKey @"HP_SwitchKey"
#define HPTimeKey @"HP_TimeKey"

#define HP_SCREEN_WIDTH [UIScreen  mainScreen].bounds.size.width
#define HP_SCREEN_HEIGHT [UIScreen  mainScreen].bounds.size.height


//为了编译通过
@interface WCTableViewManager

- (BOOL)isNewSettingVC:(UITableView *)tableView;

- (long long)numberOfSectionsInTableView:(UITableView *)tableView;

@end

@interface NewSettingViewController : UIViewController

@end

%hook WCTableViewManager

- (double)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    //高度在模型数组中，不设置为0。
    //double height = %orig;
    if ([self isNewSettingVC:tableView] && (indexPath.section == [self numberOfSectionsInTableView:tableView] - 1)) { //设置页面 & 最后一组
        return 56.0;
    }
    return %orig;
}

//返回cell
- (id)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if ([self isNewSettingVC:tableView] && (indexPath.section == [self numberOfSectionsInTableView:tableView] - 1)) { //设置页面 & 最后一组
        UITableViewCell *cell = nil;
        if(indexPath.row == 0) {//开关cell
            cell = [tableView dequeueReusableCellWithIdentifier:@"SwitchCell"];
            if (!cell) {
                cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"SwitchCell"];
            }
            cell.textLabel.text = @"自动抢红包";
            //开关
            BOOL switchOn = [HPDefaults boolForKey:HPSwithKey];
            UISwitch *switchView = [[UISwitch alloc] init];
            switchView.on = switchOn;
            [switchView addTarget:self action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
            cell.accessoryView = switchView;
            cell.imageView.image = [UIImage imageNamed:switchOn ? @"HP_switch_on" : @"HP_switch_off"];
        } else if(indexPath.row == 1){//时间cell
            cell = [tableView dequeueReusableCellWithIdentifier:@"TimeCell"];
            if (!cell) {
                cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"TimeCell"];
                
            }
            cell.textLabel.text = @"等待时间(秒)";
            //时间输入框
            UITextField *textField = [[UITextField alloc] initWithFrame:CGRectMake(0, 0, 150, 40)];
            textField.text = [HPDefaults valueForKey:HPTimeKey];
            textField.borderStyle = UITextBorderStyleRoundedRect;
            textField.keyboardType = UIKeyboardTypeDecimalPad;
            cell.accessoryView = textField;
            cell.imageView.image = [UIImage imageNamed:@"HP_time"];
            //监听输入变化，微信目前支持iOS11以上，所以可以不移除。
            [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(textFieldDidChangeValue:) name:UITextFieldTextDidChangeNotification object:textField];
        }
        cell.backgroundColor = [UIColor whiteColor];
        return cell;
    }
    return %orig;
}

//每一组多少数据
- (long long)tableView:(UITableView *)tableView numberOfRowsInSection:(long long)section {
    if ([self isNewSettingVC:tableView] && (section == [self numberOfSectionsInTableView:tableView] - 1)) { //设置页面 & 最后一组
        return 2;
    }
    return %orig;
}

//返回组
- (long long)numberOfSectionsInTableView:(UITableView *)tableView {
    if ([self isNewSettingVC:tableView]) {
//        //获取成员变量,通过声明sections或者kvc也可以
//        NSMutableArray *arr = MSHookIvar<NSMutableArray*>(self,"_sections");
//        NSLog(@"数据个数%ld,orig:%ld",arr.count,%orig);
        return %orig + 1;//多加1组
    }
    return %orig;
}

//由于WCTableViewManager是个通用工具，那么需要定位到设置页面才修改。
%new
- (BOOL)isNewSettingVC:(UITableView *)tableView {
    if ([tableView.nextResponder.nextResponder isKindOfClass: %c(NewSettingViewController)]) { //是设置页面
        NSLog(@"当前页面是设置页面");
        return YES;
    }
    return NO;
}

%new
- (void)switchChanged:(UISwitch *)switchView {
    [HPDefaults setBool:switchView.isOn forKey:HPSwithKey];
    [HPDefaults synchronize];
    [MSHookIvar<UITableView*>(self,"_tableView") reloadData];
}

%new
- (void)textFieldDidChangeValue:(NSNotification *)notification {
    UITextField *textField = (UITextField *)[notification object];
    [HPDefaults setValue:textField.text forKey:HPTimeKey];
    [HPDefaults synchronize];
}

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView {
    %orig;
    if ([self isNewSettingVC:scrollView]) {
        [MSHookIvar<UITableView *>(self,"_tableView") endEditing:YES];
    }
}

%end


%hook NewSettingViewController

- (void)viewDidLoad {
    %orig;
    //监听键盘
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(keyboardWillShow:) name:UIKeyboardWillShowNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(keyboardWillHide:) name:UIKeyboardWillHideNotification object:nil];
}

%new
- (void)keyboardWillShow:(NSNotification *)notification {
    UIView *view = self.view;
    //这里是改变view的frame并不是Tableiew的。由viewdebug可以看出来TabelView在整个view上面，在这里挪动view最快捷。
    CGRect keyBoardRect = [notification.userInfo[UIKeyboardFrameEndUserInfoKey] CGRectValue];
    view.frame = CGRectMake(0, -keyBoardRect.size.height, HP_SCREEN_WIDTH, HP_SCREEN_HEIGHT);
}

%new
- (void)keyboardWillHide:(NSNotification *)notification {
    UIView *view = self.view;
    view.frame = CGRectMake(0, 0, HP_SCREEN_WIDTH, HP_SCREEN_HEIGHT);
}

%end
