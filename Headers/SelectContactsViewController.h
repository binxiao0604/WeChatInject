//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactSelectViewDelegate-Protocol.h"
#import "SelectContactsViewControllerDelegate-Protocol.h"
#import "SelectOpenIMContactsViewControllerDelegate-Protocol.h"

@class ContactSelectView, NSString, UIView;
@protocol SelectContactsViewControllerDelegate;

@interface SelectContactsViewController : MMUIViewController <SelectContactsViewControllerDelegate, ContactSelectViewDelegate, SelectOpenIMContactsViewControllerDelegate>
{
    id <SelectContactsViewControllerDelegate> m_delegate;
    UIView *m_titleView;
    unsigned int m_uiScene;
    ContactSelectView *m_selectView;
    NSString *_m_nsViewControllerTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsViewControllerTitle; // @synthesize m_nsViewControllerTitle=_m_nsViewControllerTitle;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(nonatomic) __weak id <SelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (id)getSafeSearchViewController;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)onSelectOpenIMGroup;
- (void)onSelectBrandContact;
- (void)onSelectOpenIMContactReturn:(id)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initView;
- (void)initTitleArea;
- (void)onCancelBack:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

