//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMEmoticonView, MMImageScrollViewHelper, NSArray, NSString, UIView;
@protocol MMImgageBrowseViewDelegate;

@interface MMImageBrowseView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    id <MMImgageBrowseViewDelegate> m_delegate;
    UIView *m_vImage;
    struct CGSize m_szFit;
    MMEmoticonView *m_emoticonView;
    MMImageScrollViewHelper *m_scrollViewHelper;
    _Bool _isDisplayingNoImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isDisplayingNoImage; // @synthesize isDisplayingNoImage=_isDisplayingNoImage;
@property(retain, nonatomic) MMEmoticonView *m_emoticonView; // @synthesize m_emoticonView;
@property(nonatomic) __weak id <MMImgageBrowseViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnLongPress:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)ZoomForPoint:(struct CGPoint)arg1;
- (void)ResetScroll;
- (void)UpdateEmoticon:(id)arg1;
- (void)UpdateData:(id)arg1 orientation:(long long)arg2;
- (void)UpdateData:(id)arg1;
- (void)UpdateImage:(id)arg1 orientation:(long long)arg2;
- (void)UpdateImage:(id)arg1 orientation:(long long)arg2 supportHorizontalLong:(_Bool)arg3;
- (void)UpdateImage:(id)arg1;
- (id)getImageView;
- (void)InitEmoticonView:(id)arg1;
- (void)InitImageView;
@property(nonatomic) struct CGRect frame;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

