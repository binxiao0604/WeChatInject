//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCAdSchemaJumpInfo : NSObject <NSCoding>
{
    _Bool _bInternalJump;
    NSString *_sdkAppId;
    NSString *_appJumpUrl;
    NSString *_appPageUrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bInternalJump; // @synthesize bInternalJump=_bInternalJump;
@property(retain, nonatomic) NSString *appPageUrl; // @synthesize appPageUrl=_appPageUrl;
@property(retain, nonatomic) NSString *appJumpUrl; // @synthesize appJumpUrl=_appJumpUrl;
@property(retain, nonatomic) NSString *sdkAppId; // @synthesize sdkAppId=_sdkAppId;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

