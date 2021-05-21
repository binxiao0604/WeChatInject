//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseInfoItem.h"

#import "CountryCodePickerDelegate-Protocol.h"

@class CountryCodeWrap, NSArray, NSString, UILabel;
@protocol WCPayCountryCodeItemDelegate;

@interface WCPayCountryCodeItem : WCBaseInfoItem <CountryCodePickerDelegate>
{
    _Bool _hideCode;
    id <WCPayCountryCodeItemDelegate> _delegate;
    NSArray *_bannedCountryCodes;
    NSString *_noCountryCodeTip;
    UILabel *_countryLabel;
    CountryCodeWrap *_currentCountryCode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CountryCodeWrap *currentCountryCode; // @synthesize currentCountryCode=_currentCountryCode;
@property(retain, nonatomic) UILabel *countryLabel; // @synthesize countryLabel=_countryLabel;
@property(retain, nonatomic) NSString *noCountryCodeTip; // @synthesize noCountryCodeTip=_noCountryCodeTip;
@property(retain, nonatomic) NSArray *bannedCountryCodes; // @synthesize bannedCountryCodes=_bannedCountryCodes;
@property(nonatomic) _Bool hideCode; // @synthesize hideCode=_hideCode;
@property(nonatomic) __weak id <WCPayCountryCodeItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)reloadCountryLabel;
- (id)getValue;
- (void)becomeFirstResponder;
- (void)initView:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)setISOCountryCode:(id)arg1;
- (void)setCountryCode:(id)arg1;

@end
