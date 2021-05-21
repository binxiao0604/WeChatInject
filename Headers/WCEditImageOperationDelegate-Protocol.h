//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EditImageTextToolV2, NSString, UIColor, UIScrollView, UITapGestureRecognizer, UIView;

@protocol WCEditImageOperationDelegate <NSObject>
- (void)editImageShowTextInputView:(EditImageTextToolV2 *)arg1 displayStr:(NSString *)arg2 lineColor:(UIColor *)arg3 textStyle:(unsigned long long)arg4;
- (void)onTapGesture;
- (void)dragaAndDropWidget;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;

@optional
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewHandleDoubleClickGesture:(UITapGestureRecognizer *)arg1;
- (void)scrollViewContentOffsetChanged:(struct CGPoint)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (_Bool)scrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (_Bool)scrollViewDidZoom:(UIScrollView *)arg1;
- (_Bool)isZooming;
@end

