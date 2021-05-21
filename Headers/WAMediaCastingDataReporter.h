//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMediaCastingDataReporter : NSObject
{
    unsigned int _appType;
    NSString *_appID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)generateReportItemWithEventType:(unsigned long long)arg1 videoState:(unsigned long long)arg2 videoURI:(id)arg3;
- (void)reportUserSelectWithVideoState:(unsigned long long)arg1 modelName:(id)arg2 manufacturer:(id)arg3 protocolType:(unsigned long long)arg4 videoURI:(id)arg5;
- (void)reportClickWithEventType:(unsigned long long)arg1 videoState:(unsigned long long)arg2 protocolType:(unsigned long long)arg3 videoURI:(id)arg4;
- (void)reportCastingResult:(_Bool)arg1 eventType:(unsigned long long)arg2 modelName:(id)arg3 manufacturer:(id)arg4 videoState:(unsigned long long)arg5 protocolType:(unsigned long long)arg6 videoURI:(id)arg7;
- (void)reportDeviceCount:(unsigned long long)arg1 eventType:(unsigned long long)arg2 videoState:(unsigned long long)arg3 videoURI:(id)arg4;
- (id)initWithAppID:(id)arg1 appType:(unsigned int)arg2;

@end

