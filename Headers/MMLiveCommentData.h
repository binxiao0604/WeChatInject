//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class MMLiveTaskId, NSArray, NSMutableArray, NSMutableDictionary;

@interface MMLiveCommentData : NSObject <NSCopying>
{
    _Bool _selfHasCommitComment;
    MMLiveTaskId *_taskId;
    NSArray *_commentArray;
    long long _currCommentSeq;
    NSMutableArray *_selfUnCompleteCommentArr;
    NSMutableDictionary *_commentTagDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *commentTagDict; // @synthesize commentTagDict=_commentTagDict;
@property(retain, nonatomic) NSMutableArray *selfUnCompleteCommentArr; // @synthesize selfUnCompleteCommentArr=_selfUnCompleteCommentArr;
@property(nonatomic) _Bool selfHasCommitComment; // @synthesize selfHasCommitComment=_selfHasCommitComment;
@property(nonatomic) long long currCommentSeq; // @synthesize currCommentSeq=_currCommentSeq;
@property(retain, nonatomic) NSArray *commentArray; // @synthesize commentArray=_commentArray;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) long long maxCommentSeq;
- (void)deleteComment:(long long)arg1;
- (long long)lastIndexForInsert:(id)arg1;
- (unsigned long long)nextIndexForAppend:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateSelfHasCommitComment:(_Bool)arg1;
- (void)checkCommentArrayOverLimit:(unsigned long long)arg1;
- (void)handleCommentsSeq:(id)arg1;
- (id)getCommentArrayFilterRepeatCommit:(id)arg1;
- (id)getCommentArrayFilterSelfCommit:(id)arg1;
- (_Bool)completeSelfUnCompleteComment:(id)arg1;
- (void)appendSelfUnCompleteComments:(id)arg1;
- (void)appendComments:(id)arg1 filterSelfCommit:(_Bool)arg2;
- (id)init;

@end

