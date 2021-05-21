//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary;
@protocol ContactBatchModifyLogicDelegate;

@interface ContactBatchModifyLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *m_arrBatchModifyRequest;
    NSMutableArray *m_arrFailBatchModifyInfo;
    NSMutableDictionary *m_dicFailBatchModifyRetry;
    unsigned int m_eventID;
    id <ContactBatchModifyLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactBatchModifyLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)OnBatchModContactTypeResponse:(id)arg1;
- (_Bool)BatchModContactTypeNetWork:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleCurrentFailModContact:(id)arg1;
- (void)HandleAllFailModContact:(id)arg1;
- (void)HandleModContactResponse:(id)arg1;
- (void)CheckQueue;
- (void)batchModContactTypeWithAddContantctAr:(id)arg1 deleteContantctAr:(id)arg2 modContactType:(unsigned int)arg3;
- (void)dealloc;
- (unsigned long long)getMaxBatchOnceNumber;
- (unsigned long long)getSelectedOnceNumber;

@end

