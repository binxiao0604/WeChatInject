//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSString, UIImageView, UILabel, UIView;

@interface MMTableViewIndexItem : MMUIView
{
    UILabel *_label;
    UIImageView *_imageView;
    UIView *_backgroundRoundView;
    _Bool _selected;
    NSString *_title;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (double)indexWidth;
- (void)reloadView;

@end

