//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface WCFinderLiveMoreCollectionViewCell : UICollectionViewCell
{
    UIView *_bgView;
    UIImageView *_liveImageView;
    UILabel *_nameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

