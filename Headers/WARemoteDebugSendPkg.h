//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WARemoteDebugSendPkg : NSObject
{
    unsigned int _minSeq;
    unsigned int _maxSeq;
    unsigned int _timestap;
    NSString *_uuid;
    NSData *_data;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int timestap; // @synthesize timestap=_timestap;
@property(nonatomic) unsigned int maxSeq; // @synthesize maxSeq=_maxSeq;
@property(nonatomic) unsigned int minSeq; // @synthesize minSeq=_minSeq;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

@end

