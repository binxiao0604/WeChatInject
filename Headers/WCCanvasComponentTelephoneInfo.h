//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCCanvasComponentTelephoneInfo : NSObject
{
    NSArray *_phoneNumList;
    double _topLineSize;
    double _bottomLineSize;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomLineSize; // @synthesize bottomLineSize=_bottomLineSize;
@property(nonatomic) double topLineSize; // @synthesize topLineSize=_topLineSize;
@property(retain, nonatomic) NSArray *phoneNumList; // @synthesize phoneNumList=_phoneNumList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

