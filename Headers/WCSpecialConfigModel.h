//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCSpecialConfigModel : NSObject
{
    unsigned int _logID;
    NSString *_pageName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int logID; // @synthesize logID=_logID;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (id)toString;
- (id)initPageName:(id)arg1 withLogID:(unsigned int)arg2;

@end

