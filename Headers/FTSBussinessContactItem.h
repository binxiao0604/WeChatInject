//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CContact, FTSBussinessDetailInfo, NSString;

@interface FTSBussinessContactItem : MMObject
{
    NSString *_nickName;
    FTSBussinessDetailInfo *_detailInfo;
    CContact *_contact;
}

+ (id)fromServerObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) FTSBussinessDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (id)init;

@end

