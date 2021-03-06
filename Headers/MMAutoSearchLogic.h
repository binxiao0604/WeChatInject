//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSString;
@protocol MMAutoSearchLogicDelegate;

@interface MMAutoSearchLogic : MMObject
{
    _Bool _blockSignal;
    id <MMAutoSearchLogicDelegate> _delegate;
    NSMutableArray *_autoSearchQueue;
    NSString *_lastResponseKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastResponseKey; // @synthesize lastResponseKey=_lastResponseKey;
@property(nonatomic) _Bool blockSignal; // @synthesize blockSignal=_blockSignal;
@property(retain, nonatomic) NSMutableArray *autoSearchQueue; // @synthesize autoSearchQueue=_autoSearchQueue;
@property(nonatomic) __weak id <MMAutoSearchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tryNextSearch;
- (_Bool)autoSearchShouldFinishedWithKeyword:(id)arg1 QueryInterval:(double)arg2 StartFromFirst:(_Bool)arg3 RequestNext:(_Bool)arg4;
- (void)tryAutoSearchWithKeyword:(id)arg1 StartFromFirst:(_Bool)arg2;
- (void)reset;
- (id)init;

@end

