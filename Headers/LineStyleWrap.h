//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

@interface LineStyleWrap : NSObject
{
    NSString *m_nsChars;
    UIColor *m_color;
    UIFont *m_font;
    double m_fOffset;
    _Bool m_bUnderline;
    double m_fRealLength;
    _Bool m_hide;
    UIColor *_m_wxColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *m_wxColor; // @synthesize m_wxColor=_m_wxColor;
@property(nonatomic) _Bool m_hide; // @synthesize m_hide;
@property(nonatomic) double m_fRealLength; // @synthesize m_fRealLength;
@property(nonatomic) _Bool m_bUnderline; // @synthesize m_bUnderline;
@property(nonatomic) double m_fOffset; // @synthesize m_fOffset;
@property(retain, nonatomic) UIFont *m_font; // @synthesize m_font;
@property(retain, nonatomic) UIColor *m_color; // @synthesize m_color;
@property(retain, nonatomic) NSString *m_nsChars; // @synthesize m_nsChars;
- (id)getColor;
- (long long)compare:(id)arg1;

@end

