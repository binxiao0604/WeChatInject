//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageCellView.h"

#import "IWAFavMsgViewControllerExt-Protocol.h"
#import "WAFavMsgManagerExt-Protocol.h"
#import "WAFavMsgPopOverDelegate-Protocol.h"

@class CAShapeLayer, MMUILabel, MMWebImageView, NSString, UIButton, UIView, WAFavMsgPopOverView, WAFavMsgViewModel;

@interface WAFavMsgCellView : BaseMessageCellView <WAFavMsgPopOverDelegate, WAFavMsgManagerExt, IWAFavMsgViewControllerExt>
{
    MMWebImageView *m_iconView;
    MMUILabel *m_nameLabel;
    UIButton *m_rejectButton;
    UIButton *m_rejectHitAreaButton;
    MMUILabel *m_messageLabel;
    WAFavMsgPopOverView *m_popOverView;
    MMUILabel *m_hasRejectedLabel;
    UIView *m_maskView;
    CAShapeLayer *m_rejectButtonLayer;
}

- (void).cxx_destruct;
- (void)msgContentViewWillBePoped;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didSetConfig:(id)arg1 scene:(int)arg2;
- (void)didFetchAppIdWrapDic:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onPopOverViewWillDismiss;
- (void)onAppear;
- (void)onTapManageButton;
- (void)onDeleteMessage;
- (void)onComplain;
- (void)onRejectWithReasons:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)onTapMessageLabel:(id)arg1;
- (void)onTapIconView:(id)arg1;
- (void)onTapRejectButton;
- (void)layoutNameLabelAndRejectedTipLabel;
- (void)layoutContentView;
- (void)initButtonView;
- (void)initTextView;
- (void)initHasRejectedLabel;
- (void)initIconAndNickname;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WAFavMsgViewModel *viewModel; // @dynamic viewModel;

@end

