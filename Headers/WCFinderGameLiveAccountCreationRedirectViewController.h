//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderCreateCoordinatorDelegate-Protocol.h"

@class MMUIButton, MMUILabel, NSString, UIView, WCFinderCreateCoordinator;

@interface WCFinderGameLiveAccountCreationRedirectViewController : MMUIViewController <WCFinderCreateCoordinatorDelegate>
{
    UIView *_errorIconView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMUIButton *_createAccountButton;
    WCFinderCreateCoordinator *_createCoordinator;
    NSString *_appId;
    NSString *_ticket;
    unsigned long long _ticketExpiredTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long ticketExpiredTime; // @synthesize ticketExpiredTime=_ticketExpiredTime;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) MMUIButton *createAccountButton; // @synthesize createAccountButton=_createAccountButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *errorIconView; // @synthesize errorIconView=_errorIconView;
- (void)getRedirectToAuthorizePage:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)onClose;
- (void)onClickCreateAccountButton:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)layoutUI;
- (void)viewDidLoad;
- (id)initWithAppId:(id)arg1 ticket:(id)arg2 ticketExpiredTime:(unsigned long long)arg3;
- (id)initWithAppId:(id)arg1 ticket:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

