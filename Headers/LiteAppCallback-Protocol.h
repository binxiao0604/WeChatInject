//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LiteAppInfo, NSDictionary, NSString;

@protocol LiteAppCallback <NSObject>
- (LiteAppInfo *)getLiteAppInfo:(NSString *)arg1;
- (NSString *)getOfflineResource:(NSString *)arg1 tag:(NSString *)arg2 url:(NSString *)arg3;
- (long long)getNet;
- (NSString *)getLiteAppDataPath;
- (NSString *)getDModel;
- (NSString *)getUin;
- (NSString *)getCurSystemLanguage;
- (NSString *)getClientVersionStr;
- (unsigned int)getClientVersion;
- (void)reportException:(NSDictionary *)arg1;
- (void)reportIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (void)reportKv:(unsigned int)arg1 value:(NSString *)arg2;

@optional
- (void)onExitLiteApp:(NSString *)arg1;
- (void)onEnterLiteApp:(NSString *)arg1;
@end

