//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNull.h>

#import "WCTColumnCoding-Protocol.h"
#import "WCTValueProtocol-Protocol.h"

@interface NSNull (Safe) <WCTColumnCoding, WCTValueProtocol>
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)archivedWCTValue;
- (id)numberValue;
- (id)stringValue;
- (id)dataValue;
- (_Bool)isEqualToString:(id)arg1;
@end

