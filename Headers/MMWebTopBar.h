//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, SightIconView;

@interface MMWebTopBar : UIView
{
    _Bool _canShow;
    MMUILabel *_label;
    SightIconView *_loadView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *loadView; // @synthesize loadView=_loadView;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool canShow; // @synthesize canShow=_canShow;
- (_Bool)isLoadingShowing;
- (void)setText:(id)arg1 withHideLoad:(_Bool)arg2;
- (void)layoutSubviews;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

