//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WCPayNewBindCardFavorInfo;

@interface WCPayBankCardFavorInfo : NSObject
{
    NSArray *_bind_serial_favor_info_list;
    WCPayNewBindCardFavorInfo *_wcpay_new_bind_card_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNewBindCardFavorInfo *wcpay_new_bind_card_info; // @synthesize wcpay_new_bind_card_info=_wcpay_new_bind_card_info;
@property(retain, nonatomic) NSArray *bind_serial_favor_info_list; // @synthesize bind_serial_favor_info_list=_bind_serial_favor_info_list;

@end

