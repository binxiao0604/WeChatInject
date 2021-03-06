//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IWCCardPkgExt-Protocol.h"

@class NSMutableOrderedSet, NSString;

@interface WCCardMemberCardListLogicController : MMObject <IWCCardPkgExt>
{
    NSMutableOrderedSet *_allSortedMemberCardsList;
    CDUnknownBlockType _fetchDataCompleteBlcok;
    CDUnknownBlockType _delCompleteBlcok;
    CDUnknownBlockType _giftCompleteBlcok;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType giftCompleteBlcok; // @synthesize giftCompleteBlcok=_giftCompleteBlcok;
@property(copy, nonatomic) CDUnknownBlockType delCompleteBlcok; // @synthesize delCompleteBlcok=_delCompleteBlcok;
@property(copy, nonatomic) CDUnknownBlockType fetchDataCompleteBlcok; // @synthesize fetchDataCompleteBlcok=_fetchDataCompleteBlcok;
- (void)onGetCardData:(id)arg1 ErrCode:(int)arg2;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)onGiftCard:(id)arg1 ErrCode:(int)arg2;
- (id)findCard:(id)arg1 inList:(id)arg2;
- (void)loadMemberCards;
- (void)removeMemberCardDataAtRow:(long long)arg1;
- (long long)getIdxOfMemberCard:(id)arg1;
- (id)getMemberCardAtRow:(long long)arg1;
- (unsigned int)getNumberOfMemberCards;
- (void)giftMemberCardId:(id)arg1 toUsrName:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)delMemberCard:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)fetchData:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

