//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WeishiReportItem : NSObject
{
    int _scene;
    unsigned int _weishiEntranceShowedCount;
    int _shootEntranceEndType;
    int _alertType;
    int _alertSelectType;
    NSString *_sessionId;
    unsigned long long _shootEntranceStartTime;
    unsigned long long _shootEntranceEndTime;
    unsigned long long _weishiEntranceClickTime;
    unsigned long long _alertClickTime;
    unsigned long long _jumpOutTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long jumpOutTime; // @synthesize jumpOutTime=_jumpOutTime;
@property(nonatomic) int alertSelectType; // @synthesize alertSelectType=_alertSelectType;
@property(nonatomic) unsigned long long alertClickTime; // @synthesize alertClickTime=_alertClickTime;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
@property(nonatomic) unsigned long long weishiEntranceClickTime; // @synthesize weishiEntranceClickTime=_weishiEntranceClickTime;
@property(nonatomic) unsigned long long shootEntranceEndTime; // @synthesize shootEntranceEndTime=_shootEntranceEndTime;
@property(nonatomic) int shootEntranceEndType; // @synthesize shootEntranceEndType=_shootEntranceEndType;
@property(nonatomic) unsigned int weishiEntranceShowedCount; // @synthesize weishiEntranceShowedCount=_weishiEntranceShowedCount;
@property(nonatomic) unsigned long long shootEntranceStartTime; // @synthesize shootEntranceStartTime=_shootEntranceStartTime;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

