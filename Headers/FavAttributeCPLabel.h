//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMCPLabel.h"

@class UIColor, UIFont;

@interface FavAttributeCPLabel : MMCPLabel
{
    UIFont *m_font;
    UIColor *m_textColor;
    double _lineSpace;
}

- (void).cxx_destruct;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2;
- (void)internalSetLineSpace;
- (void)internalSetText;
- (void)formAttributedString;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

