//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MyInvoiceData : NSObject
{
    long long group_id;
    NSString *title_type;
    NSString *title;
    NSString *tax_number;
    NSString *address;
    NSString *phone;
    NSString *bank_name;
    NSString *bank_number;
    NSString *email;
    NSString *invoice_url;
}

+ (id)GenJsonForSelectedInvoiceData:(id)arg1;
+ (id)GenJsonFromInvoiceData:(id)arg1 andUin:(unsigned long long)arg2;
+ (id)GetInvoiceArrFromJson:(id)arg1;
+ (_Bool)GetIsHaveInvoiceInfoFromJson:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *invoice_url; // @synthesize invoice_url;
@property(retain, nonatomic) NSString *email; // @synthesize email;
@property(retain, nonatomic) NSString *bank_number; // @synthesize bank_number;
@property(retain, nonatomic) NSString *bank_name; // @synthesize bank_name;
@property(retain, nonatomic) NSString *phone; // @synthesize phone;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(retain, nonatomic) NSString *tax_number; // @synthesize tax_number;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *title_type; // @synthesize title_type;
@property(nonatomic) long long group_id; // @synthesize group_id;
- (id)NilOrStringOf:(id)arg1;
- (id)clone;

@end

