//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSDictionary, NSMutableDictionary;
@protocol WebviewJSEventHandlerBaseDelegate;

@interface GameCenterJsApiFacade : MMObject
{
    NSDictionary *_funcMap;
    NSMutableDictionary *_funcHandlerMap;
    id <WebviewJSEventHandlerBaseDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)handle:(id)arg1;
- (_Bool)canHandle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)initJsApi;
- (id)init;

@end
