//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CPKeyIncreaseInfo : NSObject
{
    NSString *_cpKey;
    unsigned long long _threadId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;

@end

