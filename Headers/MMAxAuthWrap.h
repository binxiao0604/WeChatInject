//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMAuthInfo, MMAxAuthLogic;

@interface MMAxAuthWrap : NSObject
{
    MMAuthInfo *_authInfo;
    MMAxAuthLogic *_axAuthLogic;
}

- (void).cxx_destruct;
@property(retain) MMAxAuthLogic *axAuthLogic; // @synthesize axAuthLogic=_axAuthLogic;
@property(retain) MMAuthInfo *authInfo; // @synthesize authInfo=_authInfo;

@end

