//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponentData.h"

@class NSString, SimpleImgInfo;

@interface MMFavImgComponentData : MMComponentData
{
    _Bool m_bUseWebImgView;
    _Bool _m_bNeedCompress;
    unsigned int localId;
    unsigned int _m_CDNThumbSize;
    unsigned int _duration;
    NSString *m_ThumbPath;
    NSString *m_CDNThumbUrl;
    NSString *m_CDNThumbKey;
    NSString *m_des;
    NSString *m_ocr;
    long long favType;
    NSString *m_defaultThumbPath;
    double lng;
    double lat;
    double scale;
    NSString *label;
    NSString *poiname;
    long long imgType;
    long long _m_count;
    NSString *_m_WebImgUrl;
    SimpleImgInfo *_sightImgInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SimpleImgInfo *sightImgInfo; // @synthesize sightImgInfo=_sightImgInfo;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *m_WebImgUrl; // @synthesize m_WebImgUrl=_m_WebImgUrl;
@property(nonatomic) long long m_count; // @synthesize m_count=_m_count;
@property(nonatomic) unsigned int m_CDNThumbSize; // @synthesize m_CDNThumbSize=_m_CDNThumbSize;
@property(nonatomic) _Bool m_bNeedCompress; // @synthesize m_bNeedCompress=_m_bNeedCompress;
@property(nonatomic) long long imgType; // @synthesize imgType;
@property(retain, nonatomic) NSString *poiname; // @synthesize poiname;
@property(retain, nonatomic) NSString *label; // @synthesize label;
@property(nonatomic) double scale; // @synthesize scale;
@property(nonatomic) double lat; // @synthesize lat;
@property(nonatomic) double lng; // @synthesize lng;
@property(nonatomic) unsigned int localId; // @synthesize localId;
@property(nonatomic) _Bool m_bUseWebImgView; // @synthesize m_bUseWebImgView;
@property(retain, nonatomic) NSString *m_defaultThumbPath; // @synthesize m_defaultThumbPath;
@property(nonatomic) long long favType; // @synthesize favType;
@property(retain, nonatomic) NSString *m_ocr; // @synthesize m_ocr;
@property(retain, nonatomic) NSString *m_des; // @synthesize m_des;
@property(retain, nonatomic) NSString *m_CDNThumbKey; // @synthesize m_CDNThumbKey;
@property(retain, nonatomic) NSString *m_CDNThumbUrl; // @synthesize m_CDNThumbUrl;
@property(retain, nonatomic) NSString *m_ThumbPath; // @synthesize m_ThumbPath;

@end

