//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface PhoneItemInfo : NSObject <PBCoding, NSCoding>
{
    NSString *phoneNum;
    _Bool bFromHash;
    long long index;
}

+ (void)initialize;
+ (void)PBArrayAdd_phoneNum;
- (void).cxx_destruct;
@property(nonatomic) long long index; // @synthesize index;
@property(nonatomic) _Bool bFromHash; // @synthesize bFromHash;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

