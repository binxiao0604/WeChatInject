//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSString, WCFinderDataItem;

@interface WCFinderBanLiveCommentCGI : WCFinderLiveBaseCgi
{
    _Bool _enable;
    WCFinderDataItem *_dataItem;
    NSString *_audienceUsername;
    unsigned long long _scene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(copy, nonatomic) NSString *audienceUsername; // @synthesize audienceUsername=_audienceUsername;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithDataItem:(id)arg1 audienceUsername:(id)arg2 scene:(unsigned long long)arg3 enable:(_Bool)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

