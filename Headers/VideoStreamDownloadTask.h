//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetResourceLoadingRequest;

@interface VideoStreamDownloadTask : NSObject
{
    _Bool _m_bFinished;
    _Bool _m_bNeedCheckPlayState;
    _Bool _m_bLastTaskBeCancle;
    unsigned int _m_uiOffset;
    int _m_uiLength;
    unsigned int _m_uiDurationSec;
    double _m_tStartTime;
    double _m_tEndTime;
    AVAssetResourceLoadingRequest *_m_oLoadingRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetResourceLoadingRequest *m_oLoadingRequest; // @synthesize m_oLoadingRequest=_m_oLoadingRequest;
@property(nonatomic) _Bool m_bLastTaskBeCancle; // @synthesize m_bLastTaskBeCancle=_m_bLastTaskBeCancle;
@property(nonatomic) unsigned int m_uiDurationSec; // @synthesize m_uiDurationSec=_m_uiDurationSec;
@property(nonatomic) double m_tEndTime; // @synthesize m_tEndTime=_m_tEndTime;
@property(nonatomic) double m_tStartTime; // @synthesize m_tStartTime=_m_tStartTime;
@property(nonatomic) _Bool m_bNeedCheckPlayState; // @synthesize m_bNeedCheckPlayState=_m_bNeedCheckPlayState;
@property(nonatomic) _Bool m_bFinished; // @synthesize m_bFinished=_m_bFinished;
@property(nonatomic) int m_uiLength; // @synthesize m_uiLength=_m_uiLength;
@property(nonatomic) unsigned int m_uiOffset; // @synthesize m_uiOffset=_m_uiOffset;
- (_Bool)isEqualToLoadingRequest:(id)arg1;
- (id)init;

@end

