//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesOperationInfo : NSObject
{
    _Bool m_bOpEnable;
    NSString *m_nsOpName;
    NSString *m_nsOpType;
    NSString *m_nsOpContent;
    NSString *m_nsOpShowType;
    id m_inSender;
    unsigned int m_uiOsskey;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiOsskey; // @synthesize m_uiOsskey;
@property(nonatomic) __weak id m_inSender; // @synthesize m_inSender;
@property(retain, nonatomic) NSString *m_nsOpShowType; // @synthesize m_nsOpShowType;
@property(retain, nonatomic) NSString *m_nsOpContent; // @synthesize m_nsOpContent;
@property(retain, nonatomic) NSString *m_nsOpType; // @synthesize m_nsOpType;
@property(retain, nonatomic) NSString *m_nsOpName; // @synthesize m_nsOpName;
@property(nonatomic) _Bool m_bOpEnable; // @synthesize m_bOpEnable;

@end

