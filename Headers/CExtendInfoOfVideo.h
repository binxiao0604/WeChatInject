//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageWrapExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class CMessageWrap, MessageExpItem, NSString, VideoUploadStatInfo;

@interface CExtendInfoOfVideo : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    unsigned int m_uiVideoLen;
    unsigned int m_uiVideoTime;
    unsigned int m_uiUploadStatus;
    unsigned int m_uiVideoOffset;
    unsigned int m_uiCameraType;
    unsigned int m_uiVideoSource;
    NSString *m_nsAesKey;
    unsigned int m_uiVideoFormat;
    NSString *m_nsMsgDataUrl;
    NSString *m_nsMsgThumbUrl;
    NSString *m_nsMsgThumbAesKey;
    unsigned int m_uiMsgThumbSize;
    unsigned int m_uiMsgThumbWidth;
    unsigned int m_uiMsgThumbHeight;
    NSString *m_nsAutoDownloadControl;
    NSString *m_nsStatExtStr;
    MessageExpItem *m_oMsgExpItem;
    NSString *m_nsFileParam;
    NSString *m_nsStreamVideoUrl;
    unsigned int m_uiStreamVideoTime;
    NSString *m_nsStreamVideoTitle;
    NSString *m_nsStreamVideoWording;
    NSString *m_nsStreamVideoWebUrl;
    NSString *m_nsStreamVideoThumbUrl;
    NSString *m_nsStreamVideoPublishId;
    NSString *m_nsStreamVideoAdUxInfo;
    NSString *m_nsMsgMd5;
    NSString *m_nsNewMd5;
    int m_nDownloadLimit;
    NSString *m_nsAttachFileKey;
    unsigned int m_uiContinueUploadCount;
    NSString *m_authkey;
    unsigned int m_uiPreDownloadPercent;
    unsigned int m_uiPreDownloadNetType;
    CMessageWrap *m_refMessageWrap;
    NSString *m_nsAssetId;
    NSString *m_nsNoPreDownloadRange;
    VideoUploadStatInfo *_m_oVideoUploadStatInfo;
}

+ (void)CreateVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned int)arg4 retMessageWrap:(id *)arg5;
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) VideoUploadStatInfo *m_oVideoUploadStatInfo; // @synthesize m_oVideoUploadStatInfo=_m_oVideoUploadStatInfo;
@property(retain, nonatomic) NSString *m_authkey; // @synthesize m_authkey;
@property(nonatomic) unsigned int m_uiContinueUploadCount; // @synthesize m_uiContinueUploadCount;
@property(retain, nonatomic) NSString *m_nsAttachFileKey; // @synthesize m_nsAttachFileKey;
@property(retain, nonatomic) NSString *m_nsNoPreDownloadRange; // @synthesize m_nsNoPreDownloadRange;
@property(nonatomic) unsigned int m_uiPreDownloadNetType; // @synthesize m_uiPreDownloadNetType;
@property(nonatomic) unsigned int m_uiPreDownloadPercent; // @synthesize m_uiPreDownloadPercent;
@property(nonatomic) unsigned int m_uiVideoFormat; // @synthesize m_uiVideoFormat;
@property(retain, nonatomic) NSString *m_nsAssetId; // @synthesize m_nsAssetId;
@property(retain, nonatomic) MessageExpItem *m_oMsgExpItem; // @synthesize m_oMsgExpItem;
@property(nonatomic) int m_nDownloadLimit; // @synthesize m_nDownloadLimit;
@property(retain, nonatomic) NSString *m_nsNewMd5; // @synthesize m_nsNewMd5;
@property(retain, nonatomic) NSString *m_nsMsgMd5; // @synthesize m_nsMsgMd5;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @synthesize m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @synthesize m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @synthesize m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @synthesize m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @synthesize m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @synthesize m_nsStreamVideoWording;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @synthesize m_nsStreamVideoTitle;
@property(nonatomic) unsigned int m_uiStreamVideoTime; // @synthesize m_uiStreamVideoTime;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @synthesize m_nsStreamVideoUrl;
@property(retain, nonatomic) NSString *m_nsFileParam; // @synthesize m_nsFileParam;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(retain, nonatomic) NSString *m_nsMsgDataUrl; // @synthesize m_nsMsgDataUrl;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsMsgThumbUrl; // @synthesize m_nsMsgThumbUrl;
@property(retain, nonatomic) NSString *m_nsMsgThumbAesKey; // @synthesize m_nsMsgThumbAesKey;
@property(nonatomic) unsigned int m_uiVideoTime; // @synthesize m_uiVideoTime;
@property(nonatomic) unsigned int m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(nonatomic) unsigned int m_uiVideoOffset; // @synthesize m_uiVideoOffset;
@property(nonatomic) unsigned int m_uiVideoLen; // @synthesize m_uiVideoLen;
@property(nonatomic) unsigned int m_uiUploadStatus; // @synthesize m_uiUploadStatus;
@property(nonatomic) unsigned int m_uiCameraType; // @synthesize m_uiCameraType;
@property(retain, nonatomic) NSString *m_nsAutoDownloadControl; // @synthesize m_nsAutoDownloadControl;
@property(nonatomic) unsigned int m_uiMsgThumbWidth; // @synthesize m_uiMsgThumbWidth;
@property(nonatomic) unsigned int m_uiMsgThumbSize; // @synthesize m_uiMsgThumbSize;
@property(nonatomic) unsigned int m_uiMsgThumbHeight; // @synthesize m_uiMsgThumbHeight;
- (void)SetPlayed;
- (_Bool)IsUnPlayed;
- (id)GetDownloadThumbPath;
- (id)GetThumbPath;
- (void)UpdateVideoStatus:(id)arg1;
- (void)ChangeForBackup;
- (void)UpdateContent:(id)arg1;
- (id)xmlOfStreamVideo;
- (void)parseStreamVideoNode:(struct XmlReaderNode_t *)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

