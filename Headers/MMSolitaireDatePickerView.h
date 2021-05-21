//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPickerView.h>

#import "MMActionSheetCustomPickerPotocol-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSCalendar, NSDate, NSDateComponents, NSDateFormatter, NSString;

@interface MMSolitaireDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource, MMActionSheetCustomPickerPotocol>
{
    NSDateComponents *_minimumComponents;
    NSDateComponents *_maximumComponents;
    NSDateComponents *_currentComponents;
    NSCalendar *_calendar;
    NSDateFormatter *_dateFormatter;
    NSArray *_yearList;
    NSArray *_monthList;
    NSArray *_dayList;
    NSDate *_currentDate;
    NSString *_yearString;
    NSString *_monthString;
    NSString *_dayString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *dayString; // @synthesize dayString=_dayString;
@property(copy, nonatomic) NSString *monthString; // @synthesize monthString=_monthString;
@property(copy, nonatomic) NSString *yearString; // @synthesize yearString=_yearString;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain, nonatomic) NSArray *dayList; // @synthesize dayList=_dayList;
@property(retain, nonatomic) NSArray *monthList; // @synthesize monthList=_monthList;
@property(retain, nonatomic) NSArray *yearList; // @synthesize yearList=_yearList;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSDateComponents *currentComponents; // @synthesize currentComponents=_currentComponents;
@property(retain, nonatomic) NSDateComponents *maximumComponents; // @synthesize maximumComponents=_maximumComponents;
@property(retain, nonatomic) NSDateComponents *minimumComponents; // @synthesize minimumComponents=_minimumComponents;
- (id)selectedDate;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)showDefaultWithCurr;
- (long long)daysWithMonthInThisYear:(long long)arg1 withMonth:(long long)arg2;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

