//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate-Protocol.h"

@class CBaseContact, MMTableViewInfo, NSCalendar, NSDate, NSDateComponents, NSString, UIButton, UIImage;
@protocol MMUIViewControllerDelegate;

@interface ChatMsgCalendarViewController : MMUIViewController <MMTableViewInfoDelegate>
{
    CBaseContact *m_oContact;
    MMTableViewInfo *m_tableViewInfo;
    NSCalendar *m_gregorian;
    NSCalendar *m_chinese;
    UIImage *m_backImg;
    UIImage *m_normalImg;
    NSDate *m_lastDatePreMonth;
    NSDateComponents *m_lastMsgDateComponents;
    _Bool m_bEnd;
    UIButton *m_lastSelectItem;
    _Bool m_bToday;
    _Bool m_bNewYearsEve;
    id <MMUIViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)getNextDateComponents;
- (_Bool)hasMsgDay:(long long)arg1 Month:(long long)arg2 Year:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldLoadNextMonth;
- (id)makeWeeklyLineView:(long long *)arg1 WeekDay:(long long)arg2 thisMonthComponent:(id)arg3;
- (id)getDetailForDay:(long long)arg1 Month:(long long)arg2 Year:(long long)arg3;
- (void)onSelectDate:(id)arg1;
- (id)getViewController;
- (void)makeMonthlyViewWithDate:(id)arg1;
- (id)getDateFromEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4;
- (void)makeWeeklyLineCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWeekView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)onBackButtonClicked:(id)arg1;
- (id)initWithChat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

