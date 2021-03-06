//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WWKApiDelegate-Protocol.h"

@class NSString;

@interface WWKMsgForwarder : NSObject <WWKApiDelegate>
{
    long long _appType;
}

@property(nonatomic) long long appType; // @synthesize appType=_appType;
- (void)onResp:(id)arg1;
- (id)MsgWeAppAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgLocationAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgVideoAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgLinkAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgImageAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgFileAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgTextAttachmentFromRecordDataField:(id)arg1;
- (id)buildMsgTextAttachmentFromNotSupportRecordDataField:(id)arg1;
- (id)buildMsgAttchmentFromRecordDataField:(id)arg1;
- (id)buildMsgAttchmentFromRecordDataFieldAr:(id)arg1 andRecordTitle:(id)arg2;
- (id)getAppImgData:(id)arg1;
- (id)buildMsgLocationAttachmentFromMsgWrap:(id)arg1;
- (id)builddMsgOpenSDKWeAppAttachmentFromMsgWrap:(id)arg1;
- (id)builddMsgWeAppAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgVideoAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgLinkAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgImageAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgFileAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgReferTextAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgAppTextAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgTextAttachmentFromMsgWrap:(id)arg1;
- (id)buildMsgAttchmentFromMsgWrap:(id)arg1;
- (void)sendMultiMsg:(id)arg1;
- (void)sendSingleWeAppMsg:(id)arg1 withImg:(id)arg2;
- (void)sendSingleMsg:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

