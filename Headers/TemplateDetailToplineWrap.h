//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LineStyleWrap;

@interface TemplateDetailToplineWrap : NSObject
{
    _Bool _hideDashLine;
    unsigned int _smallTextCount;
    LineStyleWrap *_keyWrap;
    LineStyleWrap *_valueWrap;
    LineStyleWrap *_extraWrap;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int smallTextCount; // @synthesize smallTextCount=_smallTextCount;
@property(nonatomic) _Bool hideDashLine; // @synthesize hideDashLine=_hideDashLine;
@property(retain, nonatomic) LineStyleWrap *extraWrap; // @synthesize extraWrap=_extraWrap;
@property(retain, nonatomic) LineStyleWrap *valueWrap; // @synthesize valueWrap=_valueWrap;
@property(retain, nonatomic) LineStyleWrap *keyWrap; // @synthesize keyWrap=_keyWrap;

@end

