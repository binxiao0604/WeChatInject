//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class ReaderWrapNotifyMsg;

@interface MMReaderInfo : NSObject <NSCopying>
{
    ReaderWrapNotifyMsg *_notifyMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ReaderWrapNotifyMsg *notifyMsg; // @synthesize notifyMsg=_notifyMsg;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

