//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WCAddressBaseAddress;

@interface WCAddressControlData : NSObject
{
    WCAddressBaseAddress *structSelectBaseAddress;
    WCAddressBaseAddress *structEditBaseAddress;
    NSArray *m_arrAllAddress;
    NSArray *m_arrAddressStageData;
    _Bool _m_bNeedForbidStatusBarInset;
    _Bool _forbidDarkmode;
    _Bool _isInSheetMode;
    _Bool _needDismissToParentVCOnAddAddress;
}

+ (id)getSelectAddressDicFromAddress:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needDismissToParentVCOnAddAddress; // @synthesize needDismissToParentVCOnAddAddress=_needDismissToParentVCOnAddAddress;
@property(nonatomic) _Bool isInSheetMode; // @synthesize isInSheetMode=_isInSheetMode;
@property(nonatomic) _Bool forbidDarkmode; // @synthesize forbidDarkmode=_forbidDarkmode;
@property(nonatomic) _Bool m_bNeedForbidStatusBarInset; // @synthesize m_bNeedForbidStatusBarInset=_m_bNeedForbidStatusBarInset;
@property(retain, nonatomic) NSArray *m_arrAddressStageData; // @synthesize m_arrAddressStageData;
@property(retain, nonatomic) NSArray *m_arrAllAddress; // @synthesize m_arrAllAddress;
@property(retain, nonatomic) WCAddressBaseAddress *structEditBaseAddress; // @synthesize structEditBaseAddress;
@property(retain, nonatomic) WCAddressBaseAddress *structSelectBaseAddress; // @synthesize structSelectBaseAddress;
- (void)dealloc;

@end

