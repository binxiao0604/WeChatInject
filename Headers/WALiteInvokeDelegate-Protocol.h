//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WALiteRuntime;

@protocol WALiteInvokeDelegate <NSObject>
@property(nonatomic) __weak WALiteRuntime *runtimeWeakRef;
@property(retain, nonatomic) NSString *invokeCondition;
- (NSString *)processInvokeHandler:(NSString *)arg1 param:(NSString *)arg2 callbackId:(unsigned int)arg3 isAsync:(_Bool)arg4;
- (_Bool)shouldInvoke:(NSString *)arg1;
@end
