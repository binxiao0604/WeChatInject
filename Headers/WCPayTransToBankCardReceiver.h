//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, WCPayTransBankItem;

@interface WCPayTransToBankCardReceiver : MMObject
{
    NSString *_m_nsRemarkName;
    NSString *_m_nsUserTrueName;
    NSString *_m_nsEncryptedUsrName;
    NSString *_m_nsBankcardSeqNo;
    NSString *_m_nsBankcardEncNo;
    NSString *_m_nsBankcardTailNo;
    WCPayTransBankItem *_m_bankItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTransBankItem *m_bankItem; // @synthesize m_bankItem=_m_bankItem;
@property(retain, nonatomic) NSString *m_nsBankcardTailNo; // @synthesize m_nsBankcardTailNo=_m_nsBankcardTailNo;
@property(retain, nonatomic) NSString *m_nsBankcardEncNo; // @synthesize m_nsBankcardEncNo=_m_nsBankcardEncNo;
@property(retain, nonatomic) NSString *m_nsBankcardSeqNo; // @synthesize m_nsBankcardSeqNo=_m_nsBankcardSeqNo;
@property(retain, nonatomic) NSString *m_nsEncryptedUsrName; // @synthesize m_nsEncryptedUsrName=_m_nsEncryptedUsrName;
@property(retain, nonatomic) NSString *m_nsUserTrueName; // @synthesize m_nsUserTrueName=_m_nsUserTrueName;
@property(retain, nonatomic) NSString *m_nsRemarkName; // @synthesize m_nsRemarkName=_m_nsRemarkName;
- (id)initWithTransferRecord:(id)arg1;

@end

