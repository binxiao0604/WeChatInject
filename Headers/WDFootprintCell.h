//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMUILabel, MMWebImageView, UIImageView, WDCommonWishInfo;

@interface WDFootprintCell : MMTableViewCell
{
    WDCommonWishInfo *_wishInfo;
    MMWebImageView *_headImage;
    UIImageView *_bgColor;
    MMUILabel *_name;
    MMUILabel *_time;
    UIImageView *_arrow;
    UIImageView *_line;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) MMUILabel *time; // @synthesize time=_time;
@property(retain, nonatomic) MMUILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImageView *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) MMWebImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) WDCommonWishInfo *wishInfo; // @synthesize wishInfo=_wishInfo;
- (void)updateFootPrint:(id)arg1 withLine:(_Bool)arg2;
- (void)initializeSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

