//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "WCBizPickerViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UILabel, WCBizPickerView, WCPayBindCardInfo;
@protocol WCPayBindedCardPikerItemDelegate;

@interface WCPayBindedCardPikerItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate>
{
    UILabel *m_textLabel;
    WCBizPickerView *m_pickerView;
    WCPayBindCardInfo *m_selectCard;
    NSMutableDictionary *m_dicAll;
    NSArray *m_arrRows;
    id <WCPayBindedCardPikerItemDelegate> m_cardDelegate;
    NSArray *m_arrOrderAvailableCards;
}

- (void).cxx_destruct;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void)WCBizPickerViewDidCancel;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (_Bool)checkOrderCardAvailable:(id)arg1;
- (_Bool)checkCardAvailable:(id)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)isOrderAvailableCard:(id)arg1;
- (void)setOrderAvailableCardList:(id)arg1;
- (void)setBindCardList:(id)arg1;
- (void)setText:(id)arg1;
- (void)setSelectBindCard:(id)arg1;
- (void)becomeFirstResponder;
- (unsigned int)findIndexFromInfo:(id)arg1;
- (id)getValue;
- (void)dealloc;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

