//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCCanvasComponentReportBasicInfo : MMObject
{
    unsigned int _exposureCount;
    NSString *_cid;
    unsigned long long _stayTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned int exposureCount; // @synthesize exposureCount=_exposureCount;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (id)dictionaryRepresentation;
- (id)initWithCid:(id)arg1;

@end

