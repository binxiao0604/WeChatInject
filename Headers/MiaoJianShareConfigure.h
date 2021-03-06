//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MiaoJianShareConfigure : NSObject
{
    NSString *_appstoreUrl;
    NSString *_scheme;
    unsigned long long _scene;
    NSString *_assetID;
    NSString *_assetLocalIdentifiers;
}

+ (id)configureWithScene:(unsigned long long)arg1 assetID:(id)arg2;
+ (id)configureWithScene:(unsigned long long)arg1;
+ (_Bool)longVideoEntranceEnable;
+ (_Bool)takePhotoEntranceEnable;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *assetLocalIdentifiers; // @synthesize assetLocalIdentifiers=_assetLocalIdentifiers;
@property(retain, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(readonly, nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *appstoreUrl; // @synthesize appstoreUrl=_appstoreUrl;
- (id)description;
- (void)commentInit;
- (id)initWithScene:(unsigned long long)arg1 assetID:(id)arg2;

@end

