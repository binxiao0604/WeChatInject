//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate;

@interface ShowRatingAchive : NSObject <NSCoding>
{
    unsigned int m_uiLastShowedVersion;
    NSDate *m_dtFirstRecieveTime;
    unsigned int m_uiShowType;
    _Bool _m_bShowing;
    _Bool _m_bUseNewShowRatingStrategy;
    unsigned int m_uiWaitDays;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bUseNewShowRatingStrategy; // @synthesize m_bUseNewShowRatingStrategy=_m_bUseNewShowRatingStrategy;
@property(nonatomic) _Bool m_bShowing; // @synthesize m_bShowing=_m_bShowing;
@property(nonatomic) unsigned int m_uiWaitDays; // @synthesize m_uiWaitDays;
@property(nonatomic) unsigned int m_uiShowType; // @synthesize m_uiShowType;
@property(retain, nonatomic) NSDate *m_dtFirstRecieveTime; // @synthesize m_dtFirstRecieveTime;
@property(nonatomic) unsigned int m_uiLastShowedVersion; // @synthesize m_uiLastShowedVersion;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

