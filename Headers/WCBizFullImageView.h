//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "SessionSelectControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCBizMultiImageBrowseViewContainerDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class MMScrollView, NSMutableArray, NSString, UIPageControl, UIView, WCBizMultiImageBrowseData;
@protocol WCBizFullImageViewDelegate;

@interface WCBizFullImageView : MMUIWindow <UIScrollViewDelegate, scrollViewDelegate, WCBizMultiImageBrowseViewContainerDelegate, SessionSelectControllerDelegate, WCActionSheetDelegate>
{
    UIView *m_fakeScreenView;
    struct CGRect m_originImageRectInScreen;
    _Bool m_isAnimating;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageCtrl;
    UIView *m_blackMask;
    WCBizMultiImageBrowseData *m_oImageBrowseData;
    NSMutableArray *m_arrImage;
    unsigned int m_iCurIndex;
    _Bool m_hasScroll;
    long long m_lastDeviceOrientation;
    id <WCBizFullImageViewDelegate> m_delegate;
}

+ (void)freeWCBizFullScreenView;
+ (id)getWCBizFullScreenView;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_iCurIndex; // @synthesize m_iCurIndex;
@property(nonatomic) __weak id <WCBizFullImageViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)didDeviceRotate;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLongPressedWithWCBizImageBrowseItem:(id)arg1;
- (void)captureScreen;
- (void)animationHideWithRotate;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerAnimationHideStop;
- (void)animationHideStop;
- (_Bool)shouldHideContainerOnRotate;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (id)getVisibleViewController;
- (void)rotateToDeviceOrientation:(_Bool)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)downloadImage;
- (void)animationShowWithWCBizImageBrowse:(id)arg1 originView:(id)arg2;
- (void)resetScrollView;
- (void)clearStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

