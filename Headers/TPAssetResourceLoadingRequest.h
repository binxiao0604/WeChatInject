//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TPAssetResourceLoadingContentInformationRequestDelegate-Protocol.h"

@class NSString, TPAssetResourceLoadingContentInformationRequest, TPAssetResourceLoadingDataRequest;
@protocol TPAssetResourceLoadingRequestDelegate;

@interface TPAssetResourceLoadingRequest : NSObject <TPAssetResourceLoadingContentInformationRequestDelegate>
{
    _Bool _finished;
    _Bool _cancelled;
    int _requestNum;
    NSString *_fileName;
    TPAssetResourceLoadingDataRequest *_dataRequest;
    TPAssetResourceLoadingContentInformationRequest *_contentInformationRequest;
    id <TPAssetResourceLoadingRequestDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TPAssetResourceLoadingRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) TPAssetResourceLoadingContentInformationRequest *contentInformationRequest; // @synthesize contentInformationRequest=_contentInformationRequest;
@property(retain, nonatomic) TPAssetResourceLoadingDataRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) int requestNum; // @synthesize requestNum=_requestNum;
- (void)onFillContentInformation:(id)arg1;
- (void)finishLoading;
@property(readonly, copy) NSString *description;
- (void)setDataWriteQueue:(id)arg1;
- (void)setDataCachePath:(id)arg1;
- (int)getReadyDataLenFromOffset:(unsigned long long)arg1;
- (id)initWithOffset:(long long)arg1 length:(long long)arg2 num:(int)arg3 endOfResource:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

