//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderMsgSessionMgrExt-Protocol.h"

@class CBaseContact, MMTableViewInfo, WCFinderMsgChatInfoReporter;
@protocol WCFinderMsgChatInfoViewControllerDelegate;

@interface WCFinderMsgChatInfoViewController : MMUIViewController <WCFinderMsgSessionMgrExt>
{
    id <WCFinderMsgChatInfoViewControllerDelegate> _delegate;
    CBaseContact *_myRoleContact;
    CBaseContact *_sessionContact;
    CBaseContact *_realChatContact;
    MMTableViewInfo *_tableViewMgr;
    WCFinderMsgChatInfoReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMsgChatInfoReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) MMTableViewInfo *tableViewMgr; // @synthesize tableViewMgr=_tableViewMgr;
@property(retain, nonatomic) CBaseContact *realChatContact; // @synthesize realChatContact=_realChatContact;
@property(retain, nonatomic) CBaseContact *sessionContact; // @synthesize sessionContact=_sessionContact;
@property(retain, nonatomic) CBaseContact *myRoleContact; // @synthesize myRoleContact=_myRoleContact;
@property(nonatomic) __weak id <WCFinderMsgChatInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderMsgSessionStatusUpdatedWithSessionId:(id)arg1;
- (_Bool)isContactBlocked;
- (void)onExpose:(id)arg1;
- (void)onClearAllMessage:(id)arg1;
- (void)onBlockSwitchChange:(id)arg1;
- (void)openContactInfo;
- (void)makeContactInfo:(id)arg1 CellInfo:(id)arg2;
- (void)reloadTableViewData;
- (void)initView;
- (void)fetchLatestMsgSessionState;
- (void)setReportChatSessionId:(id)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

@end

