//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayRealnameSuccessViewDelegate-Protocol.h"

@class NSString;
@protocol WCPayRealnameSuccessViewControllerDelegate;

@interface WCPayRealnameSuccessViewController : WCPayBaseViewController <WCPayRealnameSuccessViewDelegate>
{
    id <WCPayRealnameSuccessViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property __weak id <WCPayRealnameSuccessViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onWCPayRealnameSuccessViewRetry;
- (void)onWCPayRealnameSuccessViewDone;
- (void)viewDidLayoutSubviews;
- (void)reloadTableView;
- (id)navigationBarBackgroundColor;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)shouldInteractivePop;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

