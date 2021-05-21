//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURLSessionDownloadTask;

@interface WAPackageDownloadTask : NSObject
{
    _Bool _bIsCdnDownloadType;
    _Bool _needGzip;
    unsigned int _retryCount;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    NSURLSessionDownloadTask *_downloadTask;
    NSString *_downloadUrl;
    NSString *_downloadHost;
    NSString *_fileName;
    NSString *_directoryPath;
    NSDate *_startDate;
    NSString *_appid;
    unsigned long long _version;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needGzip; // @synthesize needGzip=_needGzip;
@property(nonatomic) _Bool bIsCdnDownloadType; // @synthesize bIsCdnDownloadType=_bIsCdnDownloadType;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *downloadHost; // @synthesize downloadHost=_downloadHost;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (id)initWithDownloadTask:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

