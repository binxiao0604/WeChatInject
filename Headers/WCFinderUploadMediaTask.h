//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString, WCFinderFullScreenEditRectModel;

@interface WCFinderUploadMediaTask : NSObject <PBCoding>
{
    _Bool startCdnUpload;
    _Bool uploadCDNSuccessful;
    _Bool isH265;
    _Bool useLargeFileAPI;
    _Bool isLongVideo;
    _Bool _hasStickers;
    float _fullWidth;
    float _fullHeight;
    int _fullBitrate;
    NSString *mediaUrl;
    NSString *md5;
    NSString *mediaMd5;
    NSString *thumbUrl;
    NSString *thumbMd5;
    NSString *clientID;
    double duration;
    long long totalsize;
    double mediaWidth;
    double mediaHeight;
    NSString *uploadMediaURL;
    NSString *uploadThumbURL;
    unsigned long long mediaType;
    unsigned long long fileSize;
    NSString *coverUrl;
    NSString *coverMd5;
    NSString *uploadCoverURL;
    unsigned long long bitRate;
    NSString *_fullScreenThumbUrl;
    NSString *_fullScreenThumbMd5;
    NSString *_fullScreenMediaUrl;
    NSString *_fullScreenMediaMd5;
    NSString *_patMusicUrl;
    long long _fullFileSize;
    NSString *_uploadFullMediaUrl;
    NSString *_uploadFullThumbURL;
    unsigned long long _startUploadCDNTimestamp;
    unsigned long long _endUploadCDNTimestamp;
    double _videoScore;
    double _videoCoverScore;
    double _videoAudioScore;
    double _thumbScore;
    double _hdimgScore;
    unsigned long long _uploadCDNType;
    WCFinderFullScreenEditRectModel *_editRectModel;
}

+ (void)initialize;
+ (void)PBArrayAdd_isLongVideo;
+ (void)PBArrayAdd_useLargeFileAPI;
+ (void)PBArrayAdd_isH265;
+ (void)PBArrayAdd_bitRate;
+ (void)PBArrayAdd_uploadCoverURL;
+ (void)PBArrayAdd_coverMd5;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_uploadThumbURL;
+ (void)PBArrayAdd_uploadMediaURL;
+ (void)PBArrayAdd_mediaHeight;
+ (void)PBArrayAdd_mediaWidth;
+ (void)PBArrayAdd_totalsize;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_uploadCDNSuccessful;
+ (void)PBArrayAdd_clientID;
+ (void)PBArrayAdd_startCdnUpload;
+ (void)PBArrayAdd_thumbMd5;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_mediaMd5;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_mediaUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFullScreenEditRectModel *editRectModel; // @synthesize editRectModel=_editRectModel;
@property(nonatomic) unsigned long long uploadCDNType; // @synthesize uploadCDNType=_uploadCDNType;
@property(nonatomic) _Bool hasStickers; // @synthesize hasStickers=_hasStickers;
@property(nonatomic) double hdimgScore; // @synthesize hdimgScore=_hdimgScore;
@property(nonatomic) double thumbScore; // @synthesize thumbScore=_thumbScore;
@property(nonatomic) double videoAudioScore; // @synthesize videoAudioScore=_videoAudioScore;
@property(nonatomic) double videoCoverScore; // @synthesize videoCoverScore=_videoCoverScore;
@property(nonatomic) double videoScore; // @synthesize videoScore=_videoScore;
@property(nonatomic) unsigned long long endUploadCDNTimestamp; // @synthesize endUploadCDNTimestamp=_endUploadCDNTimestamp;
@property(nonatomic) unsigned long long startUploadCDNTimestamp; // @synthesize startUploadCDNTimestamp=_startUploadCDNTimestamp;
@property(copy, nonatomic) NSString *uploadFullThumbURL; // @synthesize uploadFullThumbURL=_uploadFullThumbURL;
@property(copy, nonatomic) NSString *uploadFullMediaUrl; // @synthesize uploadFullMediaUrl=_uploadFullMediaUrl;
@property(nonatomic) int fullBitrate; // @synthesize fullBitrate=_fullBitrate;
@property(nonatomic) long long fullFileSize; // @synthesize fullFileSize=_fullFileSize;
@property(nonatomic) float fullHeight; // @synthesize fullHeight=_fullHeight;
@property(nonatomic) float fullWidth; // @synthesize fullWidth=_fullWidth;
@property(copy, nonatomic) NSString *patMusicUrl; // @synthesize patMusicUrl=_patMusicUrl;
@property(retain, nonatomic) NSString *fullScreenMediaMd5; // @synthesize fullScreenMediaMd5=_fullScreenMediaMd5;
@property(retain, nonatomic) NSString *fullScreenMediaUrl; // @synthesize fullScreenMediaUrl=_fullScreenMediaUrl;
@property(retain, nonatomic) NSString *fullScreenThumbMd5; // @synthesize fullScreenThumbMd5=_fullScreenThumbMd5;
@property(retain, nonatomic) NSString *fullScreenThumbUrl; // @synthesize fullScreenThumbUrl=_fullScreenThumbUrl;
@property(nonatomic) _Bool isLongVideo; // @synthesize isLongVideo;
@property(nonatomic) _Bool useLargeFileAPI; // @synthesize useLargeFileAPI;
@property(nonatomic) _Bool isH265; // @synthesize isH265;
@property(nonatomic) unsigned long long bitRate; // @synthesize bitRate;
@property(copy, nonatomic) NSString *uploadCoverURL; // @synthesize uploadCoverURL;
@property(copy, nonatomic) NSString *coverMd5; // @synthesize coverMd5;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType;
@property(copy, nonatomic) NSString *uploadThumbURL; // @synthesize uploadThumbURL;
@property(copy, nonatomic) NSString *uploadMediaURL; // @synthesize uploadMediaURL;
@property(nonatomic) double mediaHeight; // @synthesize mediaHeight;
@property(nonatomic) double mediaWidth; // @synthesize mediaWidth;
@property(nonatomic) long long totalsize; // @synthesize totalsize;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) _Bool uploadCDNSuccessful; // @synthesize uploadCDNSuccessful;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(nonatomic) _Bool startCdnUpload; // @synthesize startCdnUpload;
@property(retain, nonatomic) NSString *thumbMd5; // @synthesize thumbMd5;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSString *mediaMd5; // @synthesize mediaMd5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

