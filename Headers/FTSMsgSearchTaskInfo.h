//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact, NSArray, NSDictionary, NSNumber, NSString;

@interface FTSMsgSearchTaskInfo : NSObject
{
    _Bool _queryHasTalker;
    _Bool _isFastSearch;
    _Bool _isAppendMode;
    unsigned int _maxCreateTime;
    NSString *_queryParsedTalker;
    NSString *_queryParsedRealQuery;
    CContact *_restrictSessionContact;
    CContact *_restrictTalkerContact;
    NSArray *_arrSourceContact;
    NSNumber *_numProtentialSearch;
    NSArray *_arrTalkerMatchContact;
    NSDictionary *_dicMatchTip;
    NSDictionary *_dicUnIndexMsgMemCache;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int maxCreateTime; // @synthesize maxCreateTime=_maxCreateTime;
@property(nonatomic) _Bool isAppendMode; // @synthesize isAppendMode=_isAppendMode;
@property(nonatomic) _Bool isFastSearch; // @synthesize isFastSearch=_isFastSearch;
@property(retain, nonatomic) NSDictionary *dicUnIndexMsgMemCache; // @synthesize dicUnIndexMsgMemCache=_dicUnIndexMsgMemCache;
@property(retain, nonatomic) NSDictionary *dicMatchTip; // @synthesize dicMatchTip=_dicMatchTip;
@property(retain, nonatomic) NSArray *arrTalkerMatchContact; // @synthesize arrTalkerMatchContact=_arrTalkerMatchContact;
@property(retain, nonatomic) NSNumber *numProtentialSearch; // @synthesize numProtentialSearch=_numProtentialSearch;
@property(retain, nonatomic) NSArray *arrSourceContact; // @synthesize arrSourceContact=_arrSourceContact;
@property(retain, nonatomic) CContact *restrictTalkerContact; // @synthesize restrictTalkerContact=_restrictTalkerContact;
@property(retain, nonatomic) CContact *restrictSessionContact; // @synthesize restrictSessionContact=_restrictSessionContact;
@property(retain, nonatomic) NSString *queryParsedRealQuery; // @synthesize queryParsedRealQuery=_queryParsedRealQuery;
@property(retain, nonatomic) NSString *queryParsedTalker; // @synthesize queryParsedTalker=_queryParsedTalker;
@property(nonatomic) _Bool queryHasTalker; // @synthesize queryHasTalker=_queryHasTalker;

@end

