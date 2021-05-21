//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WDCommonWishCardViewDelegate-Protocol.h"

@class CustomVisualEffectView, MMLoadingView, MMUIButton, NSString, WDCommonWishCardView, WDCommonWishInfo;

@interface WDWishBrowserView : UIView <UIGestureRecognizerDelegate, WDCommonWishCardViewDelegate, WCActionSheetDelegate>
{
    _Bool _fromProfile;
    _Bool _isTransitioning;
    _Bool _isDeleting;
    WDCommonWishInfo *_wishInfo;
    CDUnknownBlockType _closeCallback;
    CDUnknownBlockType _profileCallback;
    MMUIButton *_closeBtn;
    WDCommonWishCardView *_cardView;
    MMLoadingView *_loadingView;
    CustomVisualEffectView *_effectView;
    struct CGPoint _point;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CustomVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) _Bool isDeleting; // @synthesize isDeleting=_isDeleting;
@property(nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WDCommonWishCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(copy, nonatomic) CDUnknownBlockType profileCallback; // @synthesize profileCallback=_profileCallback;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) _Bool fromProfile; // @synthesize fromProfile=_fromProfile;
@property(retain, nonatomic) WDCommonWishInfo *wishInfo; // @synthesize wishInfo=_wishInfo;
- (void)stopLoading;
- (void)stopLoadingWithText:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)delayStartLoading;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCardViewMoreBtnClick:(id)arg1;
- (void)onCardViewProfileBtnClick:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onCloseBtnClick;
- (void)layoutCardViewPos;
- (void)layoutSubviews;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showWithAnimated:(_Bool)arg1 fromPoint:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showWithAnimated:(_Bool)arg1 fromPoint:(struct CGPoint)arg2;
- (void)initCardView;
- (void)initSubviews;
- (id)initWithWishInfo:(id)arg1 fromProfile:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

