//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IMMChatContentUploadLogicExt-Protocol.h"
#import "INewSyncExt-Protocol.h"
#import "MMKernelExt-Protocol.h"

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMChatContentUploadLogic : MMObject <IMMChatContentUploadLogicExt, INewSyncExt, MMKernelExt>
{
    _Bool _validSync;
    unsigned int _reportToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_savedSessionInfoArr;
    NSMutableArray *_reportSessionInfoArr;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int reportToken; // @synthesize reportToken=_reportToken;
@property(nonatomic) _Bool validSync; // @synthesize validSync=_validSync;
@property(retain, nonatomic) NSMutableArray *reportSessionInfoArr; // @synthesize reportSessionInfoArr=_reportSessionInfoArr;
@property(retain, nonatomic) NSMutableArray *savedSessionInfoArr; // @synthesize savedSessionInfoArr=_savedSessionInfoArr;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)onExtChatUploadReplyChat:(id)arg1;
- (void)onExtChatUploadLeaveChat:(id)arg1;
- (void)onExtChatUploadEnterChat:(id)arg1;
- (void)onNewSyncEnd;
- (void)onPreQuit;
- (void)WillTerminate:(id)arg1;
- (void)DidEnterForeground:(id)arg1;
- (void)DidEnterBackground:(id)arg1;
- (void)report:(_Bool)arg1 withToken:(unsigned int)arg2;
- (void)checkAndCompareData:(id)arg1;
- (void)saveCurrentData:(id)arg1;
- (void)recoverFormerData;
- (_Bool)shouldUpload;
- (void)startLogic;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

