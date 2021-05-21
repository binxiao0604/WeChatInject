//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseSectionData.h"

@class CMessageWrap, NSMutableArray;

@interface BTMsgSectionData : BTBaseSectionData
{
    CMessageWrap *_msgWrap;
    NSMutableArray *_arrItemCellViewModel;
    unsigned int _displayMode;
}

+ (_Bool)canCreateSectionDataWithMsgWrap:(id)arg1;
+ (id)createSectionDataWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;
+ (void)initMsgSectionDataClassList;
+ (void)registerMsgSectionDataClass:(Class)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) NSMutableArray *arrItemCellViewModel; // @synthesize arrItemCellViewModel=_arrItemCellViewModel;
@property(readonly, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)updateMsgWrap:(id)arg1;
@property(readonly, nonatomic) _Bool isExposed;
- (double)heightForSectionFooter;
- (unsigned long long)sectionType;
@property(readonly, nonatomic) unsigned int createTime;
@property(readonly, nonatomic) unsigned long long sequenceId;
- (id)initWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;

@end
