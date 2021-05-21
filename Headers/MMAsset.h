//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface MMAsset : MMObject <NSCopying, NSCoding>
{
    _Bool _m_isNeedOriginImage;
    _Bool _m_isFailedFromIcloud;
    _Bool _m_isLoadingFromIcloud;
    double _m_progressFromIcloud;
    unsigned long long _m_indexInAlbum;
}

+ (_Bool)isAsset:(id)arg1 CreateWithInSecond:(double)arg2;
+ (struct CGSize)LongImageSizeWithOriginSize:(struct CGSize)arg1;
+ (id)decodeXmlString:(id)arg1;
@property(nonatomic) unsigned long long m_indexInAlbum; // @synthesize m_indexInAlbum=_m_indexInAlbum;
@property(nonatomic) double m_progressFromIcloud; // @synthesize m_progressFromIcloud=_m_progressFromIcloud;
@property(nonatomic) _Bool m_isLoadingFromIcloud; // @synthesize m_isLoadingFromIcloud=_m_isLoadingFromIcloud;
@property(nonatomic) _Bool m_isFailedFromIcloud; // @synthesize m_isFailedFromIcloud=_m_isFailedFromIcloud;
@property(nonatomic) _Bool m_isNeedOriginImage; // @synthesize m_isNeedOriginImage=_m_isNeedOriginImage;
- (_Bool)tryUpdateAsset;
- (id)imageExifLogInfo;
- (id)getOriginalAssetLocalIdentifier;
- (id)getEditVideoAttr;
- (_Bool)getIsEditedVideo;
- (id)getEditImageAttr;
- (_Bool)getIsEdited;
- (id)getDrawLayerArray;
- (void)setEditedImage:(id)arg1 withDrawLayer:(id)arg2 withEdited:(_Bool)arg3;
- (void)asyncGetMetadata:(CDUnknownBlockType)arg1;
- (void)stopGetBigImageICloudActivity;
- (void)stopICloudActivity;
- (struct CGSize)getImageRatioSize;
- (id)getCreatedDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)asyncGetVideoFileSizeWithBlock:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoAsset:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (id)getVideoUrl;
- (void)getVideoDurationForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (id)videoDuration;
- (_Bool)isTimeLapseVideo;
- (_Bool)isSlowMotionVideo;
- (_Bool)isVideo;
- (void)asyncGetOriginImageDataSizeWithBlock:(CDUnknownBlockType)arg1;
- (id)getOriginImageDataSize;
- (_Bool)isPictureForIncludeGif:(_Bool)arg1;
- (_Bool)isGif;
- (_Bool)isPicture;
- (id)encodeXmlString;
- (double)longitude;
- (double)latitude;
- (_Bool)hasLocation;
- (id)alAssetReferenceUrl;
- (id)assetId;
- (id)assetUrl;
- (id)tipForLoadingUncomplete;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (id)getThumbImageWithSize:(struct CGSize)arg1;
- (id)getThumbnail;
- (id)getThumbImage;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4 FaceCountBlock:(CDUnknownBlockType)arg5;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (void)getBigImageWithCompressConfig:(id)arg1 convertHeic:(_Bool)arg2 ProcessBlock:(CDUnknownBlockType)arg3 ResultBlock:(CDUnknownBlockType)arg4 ErrorBlock:(CDUnknownBlockType)arg5;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

