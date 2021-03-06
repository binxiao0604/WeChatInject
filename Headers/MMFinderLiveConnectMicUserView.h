//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MoveWithTouchAlgorithmDelegate-Protocol.h"

@class CAShapeLayer, MMFinderLiveConnectMicUser, MoveWithTouchAlgorithm, NSString, UIButton, UIImageView, UILabel;
@protocol MMFinderLiveConnectMicUserViewDelegate;

@interface MMFinderLiveConnectMicUserView : UIView <MoveWithTouchAlgorithmDelegate>
{
    _Bool _useVideo;
    _Bool _canShowHangupButton;
    _Bool _isMovingView;
    _Bool _isInShowAnimation;
    _Bool _isInHideAnimation;
    _Bool _isInMoveResultAnimation;
    id <MMFinderLiveConnectMicUserViewDelegate> _actionDelegate;
    unsigned long long _state;
    MMFinderLiveConnectMicUser *_connectMicUser;
    UIButton *_hangupButton;
    MoveWithTouchAlgorithm *_moveAlgorithm;
    UIView *_blurBackgroundView;
    UIView *_userInfoContainerView;
    UILabel *_nicknameLabel;
    UIImageView *_talkingIconView;
    UIView *_otherInfoContainerView;
    UIImageView *_tipIconView;
    UILabel *_tipLabel;
    UILabel *_connectingTipLabel;
    CAShapeLayer *_shapeLayer;
    double _viewEdgeOffsetTopBottom;
    struct CGPoint _currentOrigin;
}

- (void).cxx_destruct;
@property(nonatomic) double viewEdgeOffsetTopBottom; // @synthesize viewEdgeOffsetTopBottom=_viewEdgeOffsetTopBottom;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) _Bool isInMoveResultAnimation; // @synthesize isInMoveResultAnimation=_isInMoveResultAnimation;
@property(nonatomic) _Bool isInHideAnimation; // @synthesize isInHideAnimation=_isInHideAnimation;
@property(nonatomic) _Bool isInShowAnimation; // @synthesize isInShowAnimation=_isInShowAnimation;
@property(nonatomic) _Bool isMovingView; // @synthesize isMovingView=_isMovingView;
@property(nonatomic) _Bool canShowHangupButton; // @synthesize canShowHangupButton=_canShowHangupButton;
@property(nonatomic) _Bool useVideo; // @synthesize useVideo=_useVideo;
@property(nonatomic) struct CGPoint currentOrigin; // @synthesize currentOrigin=_currentOrigin;
@property(retain, nonatomic) UILabel *connectingTipLabel; // @synthesize connectingTipLabel=_connectingTipLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *tipIconView; // @synthesize tipIconView=_tipIconView;
@property(retain, nonatomic) UIView *otherInfoContainerView; // @synthesize otherInfoContainerView=_otherInfoContainerView;
@property(retain, nonatomic) UIImageView *talkingIconView; // @synthesize talkingIconView=_talkingIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIView *userInfoContainerView; // @synthesize userInfoContainerView=_userInfoContainerView;
@property(retain, nonatomic) UIView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) MoveWithTouchAlgorithm *moveAlgorithm; // @synthesize moveAlgorithm=_moveAlgorithm;
@property(retain, nonatomic) UIButton *hangupButton; // @synthesize hangupButton=_hangupButton;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUser; // @synthesize connectMicUser=_connectMicUser;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <MMFinderLiveConnectMicUserViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldForcePortrait;
- (_Bool)shouldLockToPortrait;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)checkAndUpdatePosition;
- (void)adsorbToWindow;
- (void)hangup;
- (_Bool)isSelfCloserToTheLeft;
- (void)clearAndHideWithAnimation:(_Bool)arg1;
- (void)clearAndHide;
- (void)checkAndChangeStateToWait;
- (void)showWithConnectMicUser:(id)arg1 state:(unsigned long long)arg2 useVideo:(_Bool)arg3 andCanShowHangupButton:(_Bool)arg4;
- (void)updateViewCorner;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)createMoveAlgorithm;
- (struct CGSize)currentViewSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

