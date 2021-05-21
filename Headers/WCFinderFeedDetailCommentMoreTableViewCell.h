//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, WCFinderAnimationLoadingView;
@protocol WCFinderFeedDetailCommentMoreTableCellDelegate;

@interface WCFinderFeedDetailCommentMoreTableViewCell : UITableViewCell
{
    id <WCFinderFeedDetailCommentMoreTableCellDelegate> _delegate;
    UILabel *_moreLabel;
    unsigned long long _rootCommentID;
    WCFinderAnimationLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long rootCommentID; // @synthesize rootCommentID=_rootCommentID;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(nonatomic) __weak id <WCFinderFeedDetailCommentMoreTableCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)onClickMore:(id)arg1;
- (void)updateUIWith:(long long)arg1 rootCommentID:(unsigned long long)arg2 showDetailNum:(_Bool)arg3;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
