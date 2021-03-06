//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaseResponseErrMsg, NSMutableArray;

@interface LbsContactInfoList : NSObject
{
    NSMutableArray *m_LbsContactList;
    int m_iRet;
    BaseResponseErrMsg *m_ErrorMsg;
    long long m_iState;
    long long m_iFlushTime;
    _Bool m_iIsShowRoom;
    long long m_iRoomMemberCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_iRoomMemberCount; // @synthesize m_iRoomMemberCount;
@property(nonatomic) _Bool m_iIsShowRoom; // @synthesize m_iIsShowRoom;
@property(nonatomic) long long m_iFlushTime; // @synthesize m_iFlushTime;
@property(nonatomic) long long m_iState; // @synthesize m_iState;
@property(retain, nonatomic) BaseResponseErrMsg *m_ErrorMsg; // @synthesize m_ErrorMsg;
@property(nonatomic) int iRet; // @synthesize iRet=m_iRet;
@property(retain, nonatomic) NSMutableArray *lbsContactList; // @synthesize lbsContactList=m_LbsContactList;
- (void)replaceLbsContactListAtIndexes:(id)arg1 withLbsContactList:(id)arg2;
- (void)replaceObjectInLbsContactListAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLbsContactListAtIndexes:(id)arg1;
- (void)removeObjectFromLbsContactListAtIndex:(unsigned long long)arg1;
- (void)insertLbsContactList:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inLbsContactListAtIndex:(unsigned long long)arg2;
- (id)objectInLbsContactListAtIndex:(unsigned long long)arg1;
- (void)getLbsContactList:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)countOfLbsContactList;
- (void)removeFromLbsContactList:(id)arg1;
- (void)addToLbsContactList:(id)arg1;
- (id)description;
- (id)keyPaths;
- (id)init;

@end

