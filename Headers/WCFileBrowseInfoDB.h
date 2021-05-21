//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase;

@interface WCFileBrowseInfoDB : NSObject
{
    WCTDatabase *_infoDB;
}

+ (_Bool)whetherInfoDBExist;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTDatabase *infoDB; // @synthesize infoDB=_infoDB;
- (void)willRecoverDatabase;
- (void)delFileBrowseInfoWithChatName:(id)arg1;
- (void)delFileBrowseInfoWithMsgID:(unsigned long long)arg1;
- (void)delAllFileBrowseInfo;
- (id)getFileBrowseInfoByMD5:(id)arg1;
- (id)getAllFilesBrowseInfoFilterByUserOpen;
- (id)getAllFilesBrowseInfoFilterByDownloadType;
- (id)getAllFilesBrowseInfo;
- (void)markUserOpenByMsgSvrID:(unsigned long long)arg1;
- (void)updateTypeDownloadedForBrowseInfo:(id)arg1;
- (void)addFileBrowseInfo:(id)arg1;
- (void)p_closeDB;
- (void)p_createDataBase;
- (id)p_getBrowseInfoTable;
- (void)dealloc;
- (id)init;

@end

