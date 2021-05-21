//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderFeedTopicInfoExt-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString, WCFinderTopicInfo;
@protocol WCFinderNewsTopicFeedListViewModelDelegate;

@interface WCFinderNewsTopicFeedListViewModel : NSObject <WCFinderFeedTopicInfoExt>
{
    _Bool _continueFlag;
    id <WCFinderNewsTopicFeedListViewModelDelegate> _delegate;
    WCFinderTopicInfo *_topic;
    NSMutableArray *_mutableContentVMS;
    NSData *_lastBuffer;
    NSString *_headerDesc;
    NSData *_topicBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *topicBuffer; // @synthesize topicBuffer=_topicBuffer;
@property(copy, nonatomic) NSString *headerDesc; // @synthesize headerDesc=_headerDesc;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *mutableContentVMS; // @synthesize mutableContentVMS=_mutableContentVMS;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) WCFinderTopicInfo *topic; // @synthesize topic=_topic;
@property(nonatomic) __weak id <WCFinderNewsTopicFeedListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)feedTopicInfoStatus:(id)arg1 followStatus:(_Bool)arg2;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1 contentVM:(id)arg2;
- (unsigned long long)sectionForTid:(id)arg1;
- (id)contentVMForTid:(id)arg1;
- (void)appendDataItem:(id)arg1;
- (void)requestNextPage;
- (void)requestFirstPage;
@property(readonly, nonatomic) NSArray *contentVMS;
- (unsigned long long)scene;
- (void)dealloc;
- (id)init;
- (id)initWithTopicInfo:(id)arg1 topicBuffer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

