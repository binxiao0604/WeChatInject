//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUser, UIView;

@interface MMFinderLiveConnectMicViewInfo : NSObject
{
    MMFinderLiveConnectMicUser *_userInfo;
    UIView *_userView;
    unsigned long long _index;
    unsigned long long _totalCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *userInfo; // @synthesize userInfo=_userInfo;

@end

