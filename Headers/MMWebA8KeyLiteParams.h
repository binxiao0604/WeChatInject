//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface MMWebA8KeyLiteParams : MMObject
{
    _Bool _skipPrefetch;
    unsigned int _scene;
    NSString *_urlString;
    NSString *_referUrl;
    NSString *_appId;
    NSString *_title;
    NSString *_desc;
    unsigned long long _readerIndex;
    NSString *_extInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool skipPrefetch; // @synthesize skipPrefetch=_skipPrefetch;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long readerIndex; // @synthesize readerIndex=_readerIndex;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *referUrl; // @synthesize referUrl=_referUrl;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;

@end

