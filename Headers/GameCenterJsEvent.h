//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSDictionary, NSString;

@interface GameCenterJsEvent : MMObject
{
    NSString *_funcName;
    NSDictionary *_params;
    NSString *_callbackId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *funcName; // @synthesize funcName=_funcName;
- (void)endWithResult:(id)arg1 data:(id)arg2;
- (id)initWithFuncName:(id)arg1 params:(id)arg2 callbackId:(id)arg3;

@end

