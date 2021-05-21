//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PluginContactInfoAssist.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "XMailBindMailControlLogicDelegate-Protocol.h"

@class NSString, XMailBindMailControlLogic;

@interface CPushMailContactInfoAssist : PluginContactInfoAssist <XMailBindMailControlLogicDelegate, PBMessageObserverDelegate>
{
    map_f8690629 m_mapPushMailCellToCellType;
    XMailBindMailControlLogic *_bindMailControlLogic;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) XMailBindMailControlLogic *bindMailControlLogic; // @synthesize bindMailControlLogic=_bindMailControlLogic;
- (void)onXMailBindMailControlLogicCanceled:(id)arg1;
- (void)onXMailBindMailControlLogicSuccess:(id)arg1 mailAddr:(id)arg2;
- (void)openPushNoDisturbView;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSwitchPushMailOk:(unsigned int)arg1;
- (id)getPushMailErrorTitle;
- (void)showInputPwdAlert:(_Bool)arg1;
- (void)showFolderConfigPage;
- (void)reloadInstalledTableViewData;
- (void)startBind;
- (void)onWrite;
- (void)clearPluginData;
- (void)doUninstall;
- (void)installPlugin;
- (id)getLoadingText;
- (id)getPluginIntro;
- (void)onSwitchViewOff;
- (void)onSwitchViewOn;
- (void)doSwitchPushMail:(id)arg1;
- (void)reloadPushMailTableView;
- (_Bool)isShowOpenPushMailBtn;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

