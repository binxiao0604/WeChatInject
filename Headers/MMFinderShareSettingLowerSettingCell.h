//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMUILabel, NSString, UIImageView, UILabel, UIView;

@interface MMFinderShareSettingLowerSettingCell : MMTableViewCell
{
    _Bool _enabled;
    int _mode;
    NSString *_subtitleText;
    NSString *_displayDigest;
    UILabel *_title;
    MMUILabel *_subtitle;
    MMUILabel *_displayMembersDigest;
    UIImageView *_checkIconView;
    UIView *_separator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIImageView *checkIconView; // @synthesize checkIconView=_checkIconView;
@property(retain, nonatomic) MMUILabel *displayMembersDigest; // @synthesize displayMembersDigest=_displayMembersDigest;
@property(retain, nonatomic) MMUILabel *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *displayDigest; // @synthesize displayDigest=_displayDigest;
@property(retain, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (id)getTitleFromMode:(int)arg1;
- (void)updateSplit;
- (void)updateSubtitle;
- (void)updateDigest;
- (void)updateTitle;
- (void)updateWithMode:(int)arg1 enabled:(_Bool)arg2 displayDigest:(id)arg3 subTitle:(id)arg4;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

