//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCAdQuicklyAddBrandInfo : NSObject <NSCoding>
{
    NSString *_brandUsername;
    NSString *_brandName;
    NSString *_brandHeadImageUrl;
    NSString *_brandDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brandDesc; // @synthesize brandDesc=_brandDesc;
@property(retain, nonatomic) NSString *brandHeadImageUrl; // @synthesize brandHeadImageUrl=_brandHeadImageUrl;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) NSString *brandUsername; // @synthesize brandUsername=_brandUsername;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

