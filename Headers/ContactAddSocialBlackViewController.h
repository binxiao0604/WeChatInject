//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultiSelectContactsViewController.h"

#import "ContactBatchModifyLogicDelegate-Protocol.h"

@class CContact, ContactAddSocialBlackListLogic, ContactBatchModifyLogic, ContactTagData, NSMutableDictionary, NSMutableSet, NSString;

@interface ContactAddSocialBlackViewController : MultiSelectContactsViewController <ContactBatchModifyLogicDelegate>
{
    ContactAddSocialBlackListLogic *m_contactAddSocialBlackListLogic;
    NSMutableDictionary *m_loadContactDataIDic;
    ContactBatchModifyLogic *m_contactBatchModifyLogic;
    NSMutableSet *m_selectedUsrNameSet;
    NSMutableSet *m_successModifyUsrNameSet;
    unsigned long long m_operateActionCount;
    NSString *m_selectTagName;
    NSString *m_selectTagID;
    double m_stayStartTime;
    unsigned int m_contactAddSocialBlackScene;
    CContact *_m_chatRoomContact;
    ContactTagData *_m_tagData;
    NSString *_m_viewcontrllerTitle;
    NSString *_m_ssesionID;
    unsigned long long _m_currentSocialBlackFriendNum;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_currentSocialBlackFriendNum; // @synthesize m_currentSocialBlackFriendNum=_m_currentSocialBlackFriendNum;
@property(retain, nonatomic) NSString *m_ssesionID; // @synthesize m_ssesionID=_m_ssesionID;
@property(retain, nonatomic) NSString *m_viewcontrllerTitle; // @synthesize m_viewcontrllerTitle=_m_viewcontrllerTitle;
@property(retain, nonatomic) ContactTagData *m_tagData; // @synthesize m_tagData=_m_tagData;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact=_m_chatRoomContact;
@property(nonatomic) unsigned int m_contactAddSocialBlackScene; // @synthesize m_contactAddSocialBlackScene;
- (void)reportMethod;
- (void)reloadContactDataDic;
- (_Bool)onShouldTagSelectContact:(id)arg1 withDicMultiSelect:(id)arg2 andDicExistContact:(id)arg3;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)OnContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(_Bool)arg4;
- (void)onDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (_Bool)checkSelectedMaxNumberAndShowAlerWithOtherNumer:(unsigned long long)arg1;
- (_Bool)checkSelectedMaxNumberAndShowAler;
- (void)intSocialBlackData;
- (id)getContactBatchModifyLogic;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

