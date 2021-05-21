#line 1 "/Users/zaizai/HookTest/MonkeyDemo/MonkeyDemoDylib/Logos/MonkeyDemoDylib.xm"


#import <UIKit/UIKit.h>

#define HPDefaults [NSUserDefaults standardUserDefaults]
#define HPSwithKey @"HP_SwitchKey"
#define HPTimeKey @"HP_TimeKey"

#define HP_SCREEN_WIDTH [UIScreen  mainScreen].bounds.size.width
#define HP_SCREEN_HEIGHT [UIScreen  mainScreen].bounds.size.height



@interface WCTableViewManager

- (BOOL)isNewSettingVC:(UITableView *)tableView;

- (long long)numberOfSectionsInTableView:(UITableView *)tableView;

@end

@interface NewSettingViewController : UIViewController

@end


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class NewSettingViewController; @class WCTableViewManager; 
static double (*_logos_orig$_ungrouped$WCTableViewManager$tableView$heightForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static double _logos_method$_ungrouped$WCTableViewManager$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static id (*_logos_orig$_ungrouped$WCTableViewManager$tableView$cellForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static id _logos_method$_ungrouped$WCTableViewManager$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static long long (*_logos_orig$_ungrouped$WCTableViewManager$tableView$numberOfRowsInSection$)(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UITableView *, long long); static long long _logos_method$_ungrouped$WCTableViewManager$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UITableView *, long long); static long long (*_logos_orig$_ungrouped$WCTableViewManager$numberOfSectionsInTableView$)(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UITableView *); static long long _logos_method$_ungrouped$WCTableViewManager$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UITableView *); static BOOL _logos_method$_ungrouped$WCTableViewManager$isNewSettingVC$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UITableView *); static void _logos_method$_ungrouped$WCTableViewManager$switchChanged$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UISwitch *); static void _logos_method$_ungrouped$WCTableViewManager$textFieldDidChangeValue$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, NSNotification *); static void (*_logos_orig$_ungrouped$WCTableViewManager$scrollViewWillBeginDragging$)(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UIScrollView *); static void _logos_method$_ungrouped$WCTableViewManager$scrollViewWillBeginDragging$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST, SEL, UIScrollView *); static void (*_logos_orig$_ungrouped$NewSettingViewController$viewDidLoad)(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$NewSettingViewController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$NewSettingViewController$keyboardWillShow$(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST, SEL, NSNotification *); static void _logos_method$_ungrouped$NewSettingViewController$keyboardWillHide$(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST, SEL, NSNotification *); 
static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$NewSettingViewController(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("NewSettingViewController"); } return _klass; }
#line 26 "/Users/zaizai/HookTest/MonkeyDemo/MonkeyDemoDylib/Logos/MonkeyDemoDylib.xm"


static double _logos_method$_ungrouped$WCTableViewManager$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, NSIndexPath * indexPath) {
    
    
    if ([self isNewSettingVC:tableView] && (indexPath.section == [self numberOfSectionsInTableView:tableView] - 1)) { 
        return 56.0;
    }
    return _logos_orig$_ungrouped$WCTableViewManager$tableView$heightForRowAtIndexPath$(self, _cmd, tableView, indexPath);
}


static id _logos_method$_ungrouped$WCTableViewManager$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, NSIndexPath * indexPath) {
    if ([self isNewSettingVC:tableView] && (indexPath.section == [self numberOfSectionsInTableView:tableView] - 1)) { 
        UITableViewCell *cell = nil;
        if(indexPath.row == 0) {
            cell = [tableView dequeueReusableCellWithIdentifier:@"SwitchCell"];
            if (!cell) {
                cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"SwitchCell"];
            }
            cell.textLabel.text = @"自动抢红包";
            
            BOOL switchOn = [HPDefaults boolForKey:HPSwithKey];
            UISwitch *switchView = [[UISwitch alloc] init];
            switchView.on = switchOn;
            [switchView addTarget:self action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
            cell.accessoryView = switchView;
            cell.imageView.image = [UIImage imageNamed:switchOn ? @"HP_switch_on" : @"HP_switch_off"];
        } else if(indexPath.row == 1){
            cell = [tableView dequeueReusableCellWithIdentifier:@"TimeCell"];
            if (!cell) {
                cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"TimeCell"];
                
            }
            cell.textLabel.text = @"等待时间(秒)";
            
            UITextField *textField = [[UITextField alloc] initWithFrame:CGRectMake(0, 0, 150, 40)];
            textField.text = [HPDefaults valueForKey:HPTimeKey];
            textField.borderStyle = UITextBorderStyleRoundedRect;
            textField.keyboardType = UIKeyboardTypeDecimalPad;
            cell.accessoryView = textField;
            cell.imageView.image = [UIImage imageNamed:@"HP_time"];
            
            [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(textFieldDidChangeValue:) name:UITextFieldTextDidChangeNotification object:textField];
        }
        cell.backgroundColor = [UIColor whiteColor];
        return cell;
    }
    return _logos_orig$_ungrouped$WCTableViewManager$tableView$cellForRowAtIndexPath$(self, _cmd, tableView, indexPath);
}


static long long _logos_method$_ungrouped$WCTableViewManager$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, long long section) {
    if ([self isNewSettingVC:tableView] && (section == [self numberOfSectionsInTableView:tableView] - 1)) { 
        return 2;
    }
    return _logos_orig$_ungrouped$WCTableViewManager$tableView$numberOfRowsInSection$(self, _cmd, tableView, section);
}


static long long _logos_method$_ungrouped$WCTableViewManager$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView) {
    if ([self isNewSettingVC:tableView]) {



        return _logos_orig$_ungrouped$WCTableViewManager$numberOfSectionsInTableView$(self, _cmd, tableView) + 1;
    }
    return _logos_orig$_ungrouped$WCTableViewManager$numberOfSectionsInTableView$(self, _cmd, tableView);
}



static BOOL _logos_method$_ungrouped$WCTableViewManager$isNewSettingVC$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView) {
    if ([tableView.nextResponder.nextResponder isKindOfClass: _logos_static_class_lookup$NewSettingViewController()]) { 
        NSLog(@"当前页面是设置页面");
        return YES;
    }
    return NO;
}


static void _logos_method$_ungrouped$WCTableViewManager$switchChanged$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UISwitch * switchView) {
    [HPDefaults setBool:switchView.isOn forKey:HPSwithKey];
    [HPDefaults synchronize];
    [MSHookIvar<UITableView*>(self,"_tableView") reloadData];
}


static void _logos_method$_ungrouped$WCTableViewManager$textFieldDidChangeValue$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSNotification * notification) {
    UITextField *textField = (UITextField *)[notification object];
    [HPDefaults setValue:textField.text forKey:HPTimeKey];
    [HPDefaults synchronize];
}

static void _logos_method$_ungrouped$WCTableViewManager$scrollViewWillBeginDragging$(_LOGOS_SELF_TYPE_NORMAL WCTableViewManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UIScrollView * scrollView) {
    _logos_orig$_ungrouped$WCTableViewManager$scrollViewWillBeginDragging$(self, _cmd, scrollView);
    if ([self isNewSettingVC:scrollView]) {
        [MSHookIvar<UITableView *>(self,"_tableView") endEditing:YES];
    }
}






static void _logos_method$_ungrouped$NewSettingViewController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    _logos_orig$_ungrouped$NewSettingViewController$viewDidLoad(self, _cmd);
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(keyboardWillShow:) name:UIKeyboardWillShowNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(keyboardWillHide:) name:UIKeyboardWillHideNotification object:nil];
}


static void _logos_method$_ungrouped$NewSettingViewController$keyboardWillShow$(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSNotification * notification) {
    UIView *view = self.view;
    
    CGRect keyBoardRect = [notification.userInfo[UIKeyboardFrameEndUserInfoKey] CGRectValue];
    view.frame = CGRectMake(0, -keyBoardRect.size.height, HP_SCREEN_WIDTH, HP_SCREEN_HEIGHT);
}


static void _logos_method$_ungrouped$NewSettingViewController$keyboardWillHide$(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSNotification * notification) {
    UIView *view = self.view;
    view.frame = CGRectMake(0, 0, HP_SCREEN_WIDTH, HP_SCREEN_HEIGHT);
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$WCTableViewManager = objc_getClass("WCTableViewManager"); { MSHookMessageEx(_logos_class$_ungrouped$WCTableViewManager, @selector(tableView:heightForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$WCTableViewManager$tableView$heightForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$WCTableViewManager$tableView$heightForRowAtIndexPath$);}{ MSHookMessageEx(_logos_class$_ungrouped$WCTableViewManager, @selector(tableView:cellForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$WCTableViewManager$tableView$cellForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$WCTableViewManager$tableView$cellForRowAtIndexPath$);}{ MSHookMessageEx(_logos_class$_ungrouped$WCTableViewManager, @selector(tableView:numberOfRowsInSection:), (IMP)&_logos_method$_ungrouped$WCTableViewManager$tableView$numberOfRowsInSection$, (IMP*)&_logos_orig$_ungrouped$WCTableViewManager$tableView$numberOfRowsInSection$);}{ MSHookMessageEx(_logos_class$_ungrouped$WCTableViewManager, @selector(numberOfSectionsInTableView:), (IMP)&_logos_method$_ungrouped$WCTableViewManager$numberOfSectionsInTableView$, (IMP*)&_logos_orig$_ungrouped$WCTableViewManager$numberOfSectionsInTableView$);}{ char _typeEncoding[1024]; unsigned int i = 0; memcpy(_typeEncoding + i, @encode(BOOL), strlen(@encode(BOOL))); i += strlen(@encode(BOOL)); _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(UITableView *), strlen(@encode(UITableView *))); i += strlen(@encode(UITableView *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$WCTableViewManager, @selector(isNewSettingVC:), (IMP)&_logos_method$_ungrouped$WCTableViewManager$isNewSettingVC$, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(UISwitch *), strlen(@encode(UISwitch *))); i += strlen(@encode(UISwitch *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$WCTableViewManager, @selector(switchChanged:), (IMP)&_logos_method$_ungrouped$WCTableViewManager$switchChanged$, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(NSNotification *), strlen(@encode(NSNotification *))); i += strlen(@encode(NSNotification *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$WCTableViewManager, @selector(textFieldDidChangeValue:), (IMP)&_logos_method$_ungrouped$WCTableViewManager$textFieldDidChangeValue$, _typeEncoding); }{ MSHookMessageEx(_logos_class$_ungrouped$WCTableViewManager, @selector(scrollViewWillBeginDragging:), (IMP)&_logos_method$_ungrouped$WCTableViewManager$scrollViewWillBeginDragging$, (IMP*)&_logos_orig$_ungrouped$WCTableViewManager$scrollViewWillBeginDragging$);}Class _logos_class$_ungrouped$NewSettingViewController = objc_getClass("NewSettingViewController"); { MSHookMessageEx(_logos_class$_ungrouped$NewSettingViewController, @selector(viewDidLoad), (IMP)&_logos_method$_ungrouped$NewSettingViewController$viewDidLoad, (IMP*)&_logos_orig$_ungrouped$NewSettingViewController$viewDidLoad);}{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(NSNotification *), strlen(@encode(NSNotification *))); i += strlen(@encode(NSNotification *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$NewSettingViewController, @selector(keyboardWillShow:), (IMP)&_logos_method$_ungrouped$NewSettingViewController$keyboardWillShow$, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(NSNotification *), strlen(@encode(NSNotification *))); i += strlen(@encode(NSNotification *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$NewSettingViewController, @selector(keyboardWillHide:), (IMP)&_logos_method$_ungrouped$NewSettingViewController$keyboardWillHide$, _typeEncoding); }} }
#line 154 "/Users/zaizai/HookTest/MonkeyDemo/MonkeyDemoDylib/Logos/MonkeyDemoDylib.xm"
