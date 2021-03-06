//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "IStrongNotificationMgrExt-Protocol.h"

@class MMToastViewController, MMUIButton, MMUILabel, NSString, UIButton, UIImageView, UILabel, UIView;

@interface StrongNotificationAcceptViewController : MMWindowViewController <IStrongNotificationMgrExt>
{
    UIImageView *m_logoView;
    MMUILabel *m_titleView;
    UILabel *m_contentView;
    UIButton *m_iAcceptBtn;
    UIButton *m_iCancelBtn;
    MMToastViewController *toastVC;
    MMUIButton *m_iCloseBtn;
    UIView *m_backgroundView;
    NSString *m_strongNotificationContent;
    NSString *m_strongNotificationQRCode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_strongNotificationQRCode; // @synthesize m_strongNotificationQRCode;
@property(retain, nonatomic) NSString *m_strongNotificationContent; // @synthesize m_strongNotificationContent;
- (void)onAcceptWeAppStrongNotification:(id)arg1 resultFlag:(_Bool)arg2 errorMsg:(id)arg3;
- (void)onCancelBtnClicked:(id)arg1;
- (void)doIAccept;
- (void)layoutIAcceptBtn;
- (void)layoutICancelBtn;
- (void)layoutHeadView;
- (void)layoutCloseButton;
- (void)layoutBackgroundView;
- (void)layoutView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

