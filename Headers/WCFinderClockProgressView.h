//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface WCFinderClockProgressView : UIView
{
    UILabel *_highlightTimeLabel;
    UILabel *_dividingLine;
    UILabel *_totalTimeLabel;
    unsigned long long _highlightTime;
    unsigned long long _totalTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned long long highlightTime; // @synthesize highlightTime=_highlightTime;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *dividingLine; // @synthesize dividingLine=_dividingLine;
@property(retain, nonatomic) UILabel *highlightTimeLabel; // @synthesize highlightTimeLabel=_highlightTimeLabel;
- (void)updateHighlightTime:(unsigned long long)arg1 totalTime:(unsigned long long)arg2;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 highlightTime:(unsigned long long)arg2 totalTime:(unsigned long long)arg3;

@end

