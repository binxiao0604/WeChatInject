//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class InterceptWin, NSString, WCPayJumpRemindInfo, WCPayRealnameGuideInfo;

@interface WCPayConfirmTransferResponse : NSObject
{
    long long m_llFee;
    NSString *m_nsFeeType;
    NSString *m_nsPayer;
    NSString *m_nsReceiver;
    WCPayRealnameGuideInfo *realnameGuideInfo;
    WCPayJumpRemindInfo *_jumpRemindInfo;
    InterceptWin *_intercept_win;
    InterceptWin *_intercept_win_after;
    NSString *_left_button_continue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *left_button_continue; // @synthesize left_button_continue=_left_button_continue;
@property(retain, nonatomic) InterceptWin *intercept_win_after; // @synthesize intercept_win_after=_intercept_win_after;
@property(retain, nonatomic) InterceptWin *intercept_win; // @synthesize intercept_win=_intercept_win;
@property(retain, nonatomic) WCPayJumpRemindInfo *jumpRemindInfo; // @synthesize jumpRemindInfo=_jumpRemindInfo;
@property(retain, nonatomic) WCPayRealnameGuideInfo *realnameGuideInfo; // @synthesize realnameGuideInfo;
@property(retain, nonatomic) NSString *m_nsReceiver; // @synthesize m_nsReceiver;
@property(retain, nonatomic) NSString *m_nsPayer; // @synthesize m_nsPayer;
@property(retain, nonatomic) NSString *m_nsFeeType; // @synthesize m_nsFeeType;
@property(nonatomic) long long m_llFee; // @synthesize m_llFee;
- (void)dealloc;

@end

