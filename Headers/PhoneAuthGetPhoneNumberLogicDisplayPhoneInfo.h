//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface PhoneAuthGetPhoneNumberLogicDisplayPhoneInfo : MMObject
{
    _Bool _isWxPhone;
    NSString *_phoneNumberString;
    NSString *_showPhoneNumberString;
    NSString *_describeString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *describeString; // @synthesize describeString=_describeString;
@property(copy, nonatomic) NSString *showPhoneNumberString; // @synthesize showPhoneNumberString=_showPhoneNumberString;
@property(nonatomic) _Bool isWxPhone; // @synthesize isWxPhone=_isWxPhone;
@property(copy, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString=_phoneNumberString;

@end

