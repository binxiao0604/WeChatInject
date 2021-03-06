//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@interface WCFinderGetContactListCGI : WCFinderBaseCgi
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _requestContactCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long requestContactCount; // @synthesize requestContactCount=_requestContactCount;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithFinderUsername:(id)arg1 msgInfoArrary:(id)arg2;
- (id)initWithContact:(id)arg1 finderUsername:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (id)initWithComment:(id)arg1 finderUsername:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (id)initWithAuthorUsernameArray:(id)arg1;
- (id)initWithUsernameArray:(id)arg1 finderUsername:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

