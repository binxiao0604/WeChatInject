//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, ProtobufCGIWrap;

@interface CMessage : NSObject
{
    unsigned int m_uiMessage;
    unsigned int m_uiEventID;
    NSDictionary *m_dicMessageInfo;
    ProtobufCGIWrap *m_pbCGIWrap;
    _Bool m_bNotify;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bNotify; // @synthesize m_bNotify;
@property(retain, nonatomic) ProtobufCGIWrap *m_pbCGIWrap; // @synthesize m_pbCGIWrap;
@property(retain, nonatomic) NSDictionary *m_dicMessageInfo; // @synthesize m_dicMessageInfo;
@property(nonatomic) unsigned int m_uiEventID; // @synthesize m_uiEventID;
@property(nonatomic) unsigned int m_uiMessage; // @synthesize m_uiMessage;
- (id)init;

@end

