//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray;
@protocol EmoticonDownloadMd5ListCgiDelegate;

@interface EmoticonDownloadMd5ListCgi : MMObject <PBMessageObserverDelegate>
{
    _Bool m_hasStartRequestOnce;
    unsigned int m_eventId;
    unsigned int m_endFlag;
    unsigned int m_currentIndex;
    id <EmoticonDownloadMd5ListCgiDelegate> m_delegate;
    NSMutableArray *m_md5List;
    unsigned long long _m_type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_type; // @synthesize m_type=_m_type;
@property(nonatomic) _Bool m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce;
@property(nonatomic) unsigned int m_currentIndex; // @synthesize m_currentIndex;
@property(nonatomic) unsigned int m_endFlag; // @synthesize m_endFlag;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId;
@property(retain, nonatomic) NSMutableArray *m_md5List; // @synthesize m_md5List;
@property(nonatomic) __weak id <EmoticonDownloadMd5ListCgiDelegate> m_delegate; // @synthesize m_delegate;
- (void)callOkDelegate;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)internalRequest;
- (void)startRequest;
- (_Bool)isActive;
- (id)initWithType:(unsigned long long)arg1 andDelegate:(id)arg2;
- (void)dealloc;

@end

