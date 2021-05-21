//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIPickerView;
@protocol WACustomPickerDelegate;

@interface WACommonPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    id <WACustomPickerDelegate> _delegate;
    long long _selected;
    UIPickerView *_customPicker;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIPickerView *customPicker; // @synthesize customPicker=_customPicker;
@property(nonatomic) long long selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <WACustomPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCancel;
- (void)onConfirm;
- (long long)getItemNum;
- (id)getValue;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)initWithItems:(id)arg1 supportDark:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

