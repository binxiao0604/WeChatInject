//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class CMail, MIMEInfo;
@protocol ComposeSendDelegate;

@interface ComposeSendHelper : MMObject <PBMessageObserverDelegate>
{
    MIMEInfo *m_mimeInfo;
    CMail *m_mail;
    unsigned int m_realSize;
    id <ComposeSendDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ComposeSendDelegate> m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)composeSendEvent;
- (id)getToUserList;
- (void)ComposeSend:(id)arg1 mimeData:(id)arg2 realSize:(unsigned int)arg3;
- (id)getClientID;
- (void)dealloc;
- (id)init;

@end

