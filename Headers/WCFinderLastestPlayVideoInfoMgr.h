//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCFinderLastestPlayVideoInfoMgr : NSObject
{
    NSMutableArray *_infoArray;
    NSMutableArray *_statsInfoArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *statsInfoArray; // @synthesize statsInfoArray=_statsInfoArray;
@property(retain, nonatomic) NSMutableArray *infoArray; // @synthesize infoArray=_infoArray;
- (void)cleanFinderStatsDownloadWithArray:(id)arg1;
- (id)getFinderStatsDownloadStatus;
- (id)getFinderClientStatus;
- (id)getLastestPlayInfoArray;
- (void)addPlayInfoReport:(id)arg1 meidaWrap:(id)arg2 contentID:(id)arg3 mediaIndex:(unsigned long long)arg4;
- (void)addInfo:(id)arg1;

@end

