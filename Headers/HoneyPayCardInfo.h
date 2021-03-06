//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface HoneyPayCardInfo : NSObject <NSCoding>
{
    unsigned long long _total_credit_line;
    unsigned long long _use_credit_line;
    unsigned long long _unuse_credit_line;
    NSString *_payer_username;
    unsigned long long _hide_credit_line;
    unsigned long long _card_type;
    NSString *_card_type_name;
    NSString *_icon_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
@property(retain, nonatomic) NSString *card_type_name; // @synthesize card_type_name=_card_type_name;
@property(nonatomic) unsigned long long card_type; // @synthesize card_type=_card_type;
@property(nonatomic) unsigned long long hide_credit_line; // @synthesize hide_credit_line=_hide_credit_line;
@property(retain, nonatomic) NSString *payer_username; // @synthesize payer_username=_payer_username;
@property(nonatomic) unsigned long long unuse_credit_line; // @synthesize unuse_credit_line=_unuse_credit_line;
@property(nonatomic) unsigned long long use_credit_line; // @synthesize use_credit_line=_use_credit_line;
@property(nonatomic) unsigned long long total_credit_line; // @synthesize total_credit_line=_total_credit_line;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

