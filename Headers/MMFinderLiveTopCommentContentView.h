//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMLiveCommentPubbleCell;

@interface MMFinderLiveTopCommentContentView : UIView
{
    MMLiveCommentPubbleCell *_displayPubbleCell;
    long long _currentOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(retain, nonatomic) MMLiveCommentPubbleCell *displayPubbleCell; // @synthesize displayPubbleCell=_displayPubbleCell;
- (void)layoutSubviews;
- (id)init;

@end

