//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MPLandingPageVideoRespParam, MPLandingVideoPlayerConfig, MPMaliciousInfo, NSString;

@interface MPLandingPageRespInitParam : MMObject
{
    _Bool _isTempUrl;
    unsigned int _redirectFlag;
    unsigned int _funcFlag;
    NSString *_redirectUrl;
    NSString *_url;
    NSString *_urlForCopy;
    NSString *_originTitle;
    NSString *_originDigest;
    MPLandingPageVideoRespParam *_videoRespParam;
    MPMaliciousInfo *_maliciousInfo;
    MPLandingVideoPlayerConfig *_playerConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPLandingVideoPlayerConfig *playerConfig; // @synthesize playerConfig=_playerConfig;
@property(retain, nonatomic) MPMaliciousInfo *maliciousInfo; // @synthesize maliciousInfo=_maliciousInfo;
@property(retain, nonatomic) MPLandingPageVideoRespParam *videoRespParam; // @synthesize videoRespParam=_videoRespParam;
@property(copy, nonatomic) NSString *originDigest; // @synthesize originDigest=_originDigest;
@property(copy, nonatomic) NSString *originTitle; // @synthesize originTitle=_originTitle;
@property(copy, nonatomic) NSString *urlForCopy; // @synthesize urlForCopy=_urlForCopy;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int funcFlag; // @synthesize funcFlag=_funcFlag;
@property(nonatomic) _Bool isTempUrl; // @synthesize isTempUrl=_isTempUrl;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(nonatomic) unsigned int redirectFlag; // @synthesize redirectFlag=_redirectFlag;
- (id)description;

@end

