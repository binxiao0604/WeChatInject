//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

@interface WCFinderWordingIconManager : NSObject
{
    NSMutableDictionary *_feedContentWordingConfigMap;
    NSData *_lastServerConfigData;
    NSMutableDictionary *_defaultWordingConfigMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *defaultWordingConfigMap; // @synthesize defaultWordingConfigMap=_defaultWordingConfigMap;
@property(retain, nonatomic) NSData *lastServerConfigData; // @synthesize lastServerConfigData=_lastServerConfigData;
- (id)getValueForConfig:(id)arg1 withIdentify:(SEL)arg2 classType:(Class)arg3;
- (void)setupImage:(id)arg1 forToken:(id)arg2 isDarkModel:(_Bool)arg3;
- (void)setupImageForToken:(id)arg1 serverIconURL:(id)arg2 localSVGName:(id)arg3 isDarkMode:(_Bool)arg4;
- (void)fetchIconFromServer:(id)arg1 defaultIconPair:(id)arg2 config:(id)arg3 argument:(id)arg4;
- (void)fetchIconWithLocalPNG:(id)arg1 config:(id)arg2 argument:(id)arg3;
- (void)fetchIconWithLocalSVG:(id)arg1 config:(id)arg2 argument:(id)arg3;
- (void)fetchIconWithConfig:(id)arg1 iconValue:(id)arg2 argument:(id)arg3;
- (void)fetchDynamicIcon:(id)arg1;
- (id)wordingValueForFeedContentType:(long long)arg1 wordingIdentify:(SEL)arg2;
- (id)configServerConfig:(id)arg1;
- (void)updateWithSyncPbExtInfo:(id)arg1;
- (id)defaultWordingConfigForFeedContentType:(long long)arg1;
- (id)wordingConfigForFeedContentType:(long long)arg1;
- (id)defaultShockedWordingConfig;
- (id)defaultLikeWordingConfig;
- (id)init;

@end

