//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TPVideoInfo;

@interface TPVideoInfoBuilder : NSObject
{
    TPVideoInfo *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPVideoInfo *model; // @synthesize model=_model;
- (id)build;
- (id)setDownloadParamDataArray:(id)arg1;
- (id)downloadParamDataArray;
- (id)setVideoCodecId:(long long)arg1;
- (long long)videoCodecId;
- (id)setDownloadFileID:(id)arg1;
- (id)downloadFileID;
- (id)setHeight:(long long)arg1;
- (long long)height;
- (id)setWidth:(long long)arg1;
- (long long)width;
- (id)init;

@end

