//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCAdDynamicUpdateActionInfo : NSObject <NSCoding>
{
    int _expireTime;
    NSString *_type;
}

- (void).cxx_destruct;
@property(nonatomic) int expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

