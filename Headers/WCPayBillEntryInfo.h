//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCPayBillEntryInfo : NSObject <NSCoding>
{
    NSString *_entry_word;
    NSString *_entry_url;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *entry_url; // @synthesize entry_url=_entry_url;
@property(retain, nonatomic) NSString *entry_word; // @synthesize entry_word=_entry_word;
- (void)genFromDic:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

