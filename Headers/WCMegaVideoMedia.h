//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCMegaVideoMedia : NSObject <WCTColumnCoding, PBCoding>
{
    NSString *videoUrl;
    NSString *thumbUrl;
    unsigned long long mediaType;
    unsigned long long videoPlayLen;
    double width;
    double height;
    NSString *md5Sum;
    unsigned long long fileSize;
    long long bitrate;
    NSString *decodeKey;
    NSString *coverUrl;
    unsigned long long videoPlayLenMs;
    NSString *urlToken;
    NSString *thumbUrlToken;
    NSString *coverUrlToken;
    NSMutableArray *specsArray;
    NSMutableArray *hlsSpecsArray;
}

+ (struct CGRect)rectInRatio_16:(struct CGRect)arg1;
+ (struct CGRect)fullClipRectForMediaSize:(struct CGSize)arg1;
+ (double)fullMinSizeRatio;
+ (double)summarySizeRatioForMediaSize:(struct CGSize)arg1;
+ (struct CGRect)summaryClipRectForMediaSize:(struct CGSize)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_hlsSpecsArray;
+ (void)PBArrayAdd_specsArray;
+ (void)PBArrayAdd_specsData;
+ (void)PBArrayAdd_coverUrlToken;
+ (void)PBArrayAdd_thumbUrlToken;
+ (void)PBArrayAdd_urlToken;
+ (void)PBArrayAdd_videoPlayLenMs;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_decodeKey;
+ (void)PBArrayAdd_bitrate;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_md5Sum;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_videoPlayLen;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_videoUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *hlsSpecsArray; // @synthesize hlsSpecsArray;
@property(retain, nonatomic) NSMutableArray *specsArray; // @synthesize specsArray;
@property(copy, nonatomic) NSString *coverUrlToken; // @synthesize coverUrlToken;
@property(copy, nonatomic) NSString *thumbUrlToken; // @synthesize thumbUrlToken;
@property(copy, nonatomic) NSString *urlToken; // @synthesize urlToken;
@property(nonatomic) unsigned long long videoPlayLenMs; // @synthesize videoPlayLenMs;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl;
@property(copy, nonatomic) NSString *decodeKey; // @synthesize decodeKey;
@property(nonatomic) long long bitrate; // @synthesize bitrate;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize;
@property(copy, nonatomic) NSString *md5Sum; // @synthesize md5Sum;
@property(nonatomic) double height; // @synthesize height;
@property(nonatomic) double width; // @synthesize width;
@property(nonatomic) unsigned long long videoPlayLen; // @synthesize videoPlayLen;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl;
- (_Bool)isVideoDurationUnderUnifiedURLMaxDuration:(id)arg1;
- (_Bool)isFinderVideoSizeEqualToMegaVideoSize:(id)arg1;
- (_Bool)isEnableMegaVideoUnifiedURL:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)convertToMediaInfoWithVideoId:(id)arg1 tid:(id)arg2;
- (id)mediaFilePath;
- (id)getLocalThumbPermanentPath;
- (id)getNetThumbTempCachePath;
- (id)thumbPath;
- (id)getLocalMediaPermanentPath;
- (id)getNetMediaTempCachePath;
- (id)mediaPath;
- (id)lengthLabel;
@property(readonly, nonatomic) NSString *coverUrlWithToken;
@property(readonly, nonatomic) NSString *thumbUrlWithToken;
@property(readonly, nonatomic) NSString *videoUrlWithToken;
- (struct CGSize)mediaSize;
- (id)initWithMegaVideoMedia:(id)arg1;
- (id)specs;
- (id)specsData;
- (void)setSpecsData:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

