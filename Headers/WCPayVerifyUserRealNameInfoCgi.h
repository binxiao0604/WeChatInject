//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class NSString, WCPayVerifyUserRealNameInfoResp;
@protocol WCPayVerifyUserRealNameInfoCgiDelegate;

@interface WCPayVerifyUserRealNameInfoCgi : WCPayBaseTenPayCgi
{
    int _verify_scene;
    NSString *_cre_id;
    NSString *_cre_type;
    NSString *_true_name;
    WCPayVerifyUserRealNameInfoResp *_resp;
    id <WCPayVerifyUserRealNameInfoCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayVerifyUserRealNameInfoCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(retain, nonatomic) WCPayVerifyUserRealNameInfoResp *resp; // @synthesize resp=_resp;
@property(nonatomic) int verify_scene; // @synthesize verify_scene=_verify_scene;
@property(retain, nonatomic) NSString *true_name; // @synthesize true_name=_true_name;
@property(nonatomic) NSString *cre_type; // @synthesize cre_type=_cre_type;
@property(retain, nonatomic) NSString *cre_id; // @synthesize cre_id=_cre_id;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1;

@end

