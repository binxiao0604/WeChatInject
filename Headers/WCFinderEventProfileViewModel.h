//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCFinderEventProfileViewModel : NSObject
{
    _Bool _isLoading;
    _Bool _hadMore;
    NSMutableArray *_eventItems;
    NSData *_lastBuffer;
    NSString *_username;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool hadMore; // @synthesize hadMore=_hadMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *eventItems; // @synthesize eventItems=_eventItems;
- (void)fetchNextEventItemsWithBlock:(CDUnknownBlockType)arg1;
- (void)clearAllData;
- (_Bool)isAuthorView;
- (id)initWithUserName:(id)arg1;

@end

