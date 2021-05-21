//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICertInfoMgrExt-Protocol.h"
#import "LocationRetrieveDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CLLocation, LbsContactInfoList, LocationRetriever, NSString;
@protocol SeePeopleNearByUIDelegate;

@interface SeePeopleNearByLogicController : MMObject <ICertInfoMgrExt, LocationRetrieveDelegate, PBMessageObserverDelegate>
{
    unsigned int m_uiEventID;
    unsigned int m_lbsEventID;
    unsigned int m_uiTryCount;
    LbsContactInfoList *m_lbsContactList;
    LocationRetriever *m_locationRetrieve;
    id <SeePeopleNearByUIDelegate> m_delegate;
    unsigned int m_uiCurOpCode;
    CLLocation *m_location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *m_location; // @synthesize m_location;
@property(retain, nonatomic) LocationRetriever *m_locationRetrieve; // @synthesize m_locationRetrieve;
@property(retain, nonatomic) LbsContactInfoList *m_lbsContactList; // @synthesize m_lbsContactList;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)CreateJoinLBSRoomEvent:(id)arg1;
- (void)tryJoinChatRoom;
- (void)OnUpdateCertInfo;
- (void)onSelectedWithLbsPoiItem:(id)arg1;
- (void)onSelectedWithLbsContactInfo:(id)arg1;
- (_Bool)CreateLBSFindEvent:(id)arg1;
- (_Bool)CreateLBSPoiListEvent:(id)arg1;
- (_Bool)CreateClearLBSDataEvent;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)closeAd:(id)arg1;
- (void)updateAdInfo;
- (_Bool)clearMyLbsData;
- (void)cancelUpdateLbsContactInfo;
- (void)updateLbsContactInfo;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

