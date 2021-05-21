//IIFE 匿名函数自执行表达式

(function(exports){
 
 //不变的内容使用常量
 APPID = [NSBundle mainBundle].bundleIdentifier,
 APPPATH = [NSBundle mainBundle].bundlePath,
 APPHOME = NSHomeDirectory(),
 
 //变化的内容,就用function去定义!!
 HPRootVC = function(){
 return UIApp.keyWindow.rootViewController;
 };
 
 
 HPKeyWindow = function(){
 return UIApp.keyWindow;
 };
 
 
 
 HPGetCurrentVCFromRootVc = function(rootVC){
    var currentVC;
    if([rootVC presentedViewController]){
        rootVC = [rootVC presentedViewController];
    }
 
    if([rootVC isKindOfClass:[UITabBarController class]]){
            currentVC = HPGetCurrentVCFromRootVc(rootVC.selectedViewController);
        }else if([rootVC isKindOfClass:[UINavigationController class]]){
            currentVC = HPGetCurrentVCFromRootVc(rootVC.visibleViewController);
        }else{
            currentVC = rootVC;
    }
     return currentVC;
 };
 
 
 HPCurrentVC = function(){
     return HPGetCurrentVCFromRootVc(HPRootVC());
 };
 
 })(exports);


