//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebViewPerformanceTimeRecord : NSObject
{
    _Bool _isNewCategory;
    NSString *_name;
    unsigned long long _timeInMs;
    unsigned long long _sequence;
    NSString *_detail;
    unsigned long long _relativeTimeInMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long relativeTimeInMs; // @synthesize relativeTimeInMs=_relativeTimeInMs;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) _Bool isNewCategory; // @synthesize isNewCategory=_isNewCategory;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) unsigned long long timeInMs; // @synthesize timeInMs=_timeInMs;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (long long)timeCompare:(id)arg1;
- (id)descriptionWithStartTime:(unsigned long long)arg1;

@end

