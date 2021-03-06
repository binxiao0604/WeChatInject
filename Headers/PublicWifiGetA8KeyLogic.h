//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString, PublicWifiGetA8keyResult, UIViewController;
@protocol PublicWifiGetA8KeyLogicDelegate;

@interface PublicWifiGetA8KeyLogic : MMObject <PBMessageObserverDelegate>
{
    unsigned int _scene;
    UIViewController *_parentViewController;
    id <PublicWifiGetA8KeyLogicDelegate> _delegate;
    NSString *_qrCode;
    PublicWifiGetA8keyResult *_result;
    NSString *_sessionKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(retain, nonatomic) PublicWifiGetA8keyResult *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *qrCode; // @synthesize qrCode=_qrCode;
@property(nonatomic) __weak id <PublicWifiGetA8KeyLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)getA8Key:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetA8Key:(id)arg1;
- (void)didQRCodeExpired;
- (void)didFail;
- (void)didSuccess;
- (id)initWithDelegate:(id)arg1 scene:(unsigned int)arg2 viewController:(id)arg3;
- (void)dealloc;

@end

