//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAAuthorizeSheetPrivacyInfo;

@interface WAAuthorizeSheetInfo : NSObject
{
    _Bool _showPrivacyInfo;
    NSString *_iconUrl;
    NSString *_appName;
    NSString *_applyDescription;
    NSString *_privacyDescription;
    NSString *_warnDescription;
    NSString *_acceptWording;
    NSString *_rejectWording;
    WAAuthorizeSheetPrivacyInfo *_privacyInfo;
    NSString *_jsapiScope;
}

+ (id)createWithUserIdPageSheetInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jsapiScope; // @synthesize jsapiScope=_jsapiScope;
@property(retain, nonatomic) WAAuthorizeSheetPrivacyInfo *privacyInfo; // @synthesize privacyInfo=_privacyInfo;
@property(nonatomic) _Bool showPrivacyInfo; // @synthesize showPrivacyInfo=_showPrivacyInfo;
@property(retain, nonatomic) NSString *rejectWording; // @synthesize rejectWording=_rejectWording;
@property(retain, nonatomic) NSString *acceptWording; // @synthesize acceptWording=_acceptWording;
@property(retain, nonatomic) NSString *warnDescription; // @synthesize warnDescription=_warnDescription;
@property(retain, nonatomic) NSString *privacyDescription; // @synthesize privacyDescription=_privacyDescription;
@property(retain, nonatomic) NSString *applyDescription; // @synthesize applyDescription=_applyDescription;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end
