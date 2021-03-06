//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonDownloadProxy.h"

#import "StoreEmotionBatchEmojiDownLoadCgiDelegate-Protocol.h"

@class EmoticonCdnDownloadConnection, NSString, StoreEmotionBatchEmojiDownLoadCgi;

@interface EmoticonMd5DownloadProxy : EmoticonDownloadProxy <StoreEmotionBatchEmojiDownLoadCgiDelegate>
{
    NSString *m_md5String;
    _Bool m_isActive;
    StoreEmotionBatchEmojiDownLoadCgi *m_batchEmojiDownloadCgi;
    EmoticonCdnDownloadConnection *m_cdnDownloadProxy;
    _Bool _disableExtern;
}

+ (void)keyReportDownloadWithOutURL;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableExtern; // @synthesize disableExtern=_disableExtern;
- (void)onBatchEmojiDownLoadEndWithEmojiList:(id)arg1;
- (id)createCdnDownloadConnectionWithEmojiInfo:(id)arg1;
- (void)callFailedDelegate;
- (void)startRequest;
- (_Bool)isActive;
- (id)initWithMd5:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

