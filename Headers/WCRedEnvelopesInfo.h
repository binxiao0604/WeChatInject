//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface WCRedEnvelopesInfo : NSObject <NSCoding, PBCoding>
{
    _Bool hasReward;
    _Bool bFree;
    NSString *sendId;
}

+ (void)initialize;
+ (void)PBArrayAdd_bFree;
+ (void)PBArrayAdd_hasReward;
+ (void)PBArrayAdd_sendId;
- (void).cxx_destruct;
@property(nonatomic) _Bool bFree; // @synthesize bFree;
@property(nonatomic) _Bool hasReward; // @synthesize hasReward;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

