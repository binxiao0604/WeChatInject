//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILinkEventExt-Protocol.h"

@class NSMutableArray, NSString, RichTextView;
@protocol WCFinderFeedUserNameClickDelegate;

@interface WCFinderFeedFriendLikeView : UIView <ILinkEventExt>
{
    id <WCFinderFeedUserNameClickDelegate> _delegate;
    RichTextView *_contentDescView;
    NSMutableArray *_comments;
}

+ (double)heightWithComments:(id)arg1 likeCount:(unsigned long long)arg2 friendCount:(unsigned long long)arg3 width:(double)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) RichTextView *contentDescView; // @synthesize contentDescView=_contentDescView;
@property(nonatomic) __weak id <WCFinderFeedUserNameClickDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)resetReuseState;
- (void)updateWithComments:(id)arg1 likeCount:(unsigned long long)arg2 friednCount:(unsigned long long)arg3;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

