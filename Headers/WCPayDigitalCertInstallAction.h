//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCPayDigitalCertInstallCrtWording;

@interface WCPayDigitalCertInstallAction : NSObject
{
    int _m_isHintCrt;
    int _m_isGenCert;
    int _m_isIgnoreCrt;
    int _m_noResetMobile;
    NSString *_m_balanceMobile;
    WCPayDigitalCertInstallCrtWording *_m_crt_wording;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayDigitalCertInstallCrtWording *m_crt_wording; // @synthesize m_crt_wording=_m_crt_wording;
@property(nonatomic) int m_noResetMobile; // @synthesize m_noResetMobile=_m_noResetMobile;
@property(nonatomic) int m_isIgnoreCrt; // @synthesize m_isIgnoreCrt=_m_isIgnoreCrt;
@property(nonatomic) int m_isGenCert; // @synthesize m_isGenCert=_m_isGenCert;
@property(nonatomic) int m_isHintCrt; // @synthesize m_isHintCrt=_m_isHintCrt;
@property(retain, nonatomic) NSString *m_balanceMobile; // @synthesize m_balanceMobile=_m_balanceMobile;
- (_Bool)noResetMobile;
- (_Bool)showDigitalInstallLayout;

@end

