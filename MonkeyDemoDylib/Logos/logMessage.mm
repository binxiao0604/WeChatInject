#line 1 "/Users/zaizai/HookTest/MonkeyDemo/MonkeyDemoDylib/Logos/logMessage.xm"
#import <UIKit/UIKit.h>
























































































































































































































































































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

@class CMessageMgr; @class WCRedEnvelopesReceiveHomeView; 
static void (*_logos_orig$_ungrouped$CMessageMgr$CheckMessageStatus$Msg$)(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$CMessageMgr$CheckMessageStatus$Msg$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes)(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveHomeView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveHomeView* _LOGOS_SELF_CONST, SEL); 

#line 281 "/Users/zaizai/HookTest/MonkeyDemo/MonkeyDemoDylib/Logos/logMessage.xm"


static void _logos_method$_ungrouped$CMessageMgr$CheckMessageStatus$Msg$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    NSLog(@"arg1:%@\narg1Class:%@",arg1,[arg1 class]);
    NSLog(@"arg2:%@\narg1Class:%@",arg2,[arg2 class]);
    _logos_orig$_ungrouped$CMessageMgr$CheckMessageStatus$Msg$(self, _cmd, arg1, arg2);
}





static void _logos_method$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveHomeView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    _logos_orig$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes(self, _cmd);
    NSLog(@"TEST");
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$CMessageMgr = objc_getClass("CMessageMgr"); { MSHookMessageEx(_logos_class$_ungrouped$CMessageMgr, @selector(CheckMessageStatus:Msg:), (IMP)&_logos_method$_ungrouped$CMessageMgr$CheckMessageStatus$Msg$, (IMP*)&_logos_orig$_ungrouped$CMessageMgr$CheckMessageStatus$Msg$);}Class _logos_class$_ungrouped$WCRedEnvelopesReceiveHomeView = objc_getClass("WCRedEnvelopesReceiveHomeView"); { MSHookMessageEx(_logos_class$_ungrouped$WCRedEnvelopesReceiveHomeView, @selector(OnOpenRedEnvelopes), (IMP)&_logos_method$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes, (IMP*)&_logos_orig$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes);}} }
#line 299 "/Users/zaizai/HookTest/MonkeyDemo/MonkeyDemoDylib/Logos/logMessage.xm"
