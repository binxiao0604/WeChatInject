//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMFinderLiveOnlineStateSessionInfo : NSObject
{
    _Bool _isOffline;
    NSMutableArray *_userList;
    NSString *_title;
    NSString *_footerTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *userList; // @synthesize userList=_userList;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;

@end

