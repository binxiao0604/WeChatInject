//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderSlideMenuCell.h"

@class UIView, WCFinderProfileMusicView;

@interface WCFinderProfileMusicViewCollectionCell : WCFinderSlideMenuCell
{
    _Bool _showSeperator;
    WCFinderProfileMusicView *_musicView;
    UIView *_seperator;
}

+ (double)displayHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(nonatomic) _Bool showSeperator; // @synthesize showSeperator=_showSeperator;
@property(retain, nonatomic) WCFinderProfileMusicView *musicView; // @synthesize musicView=_musicView;
- (id)curThumbImage;
- (void)prepareForReuse;
- (id)displayContentView;

@end

