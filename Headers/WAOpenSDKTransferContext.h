//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_group;

@interface WAOpenSDKTransferContext : NSObject
{
    _Bool _sendReqBeforeEnd;
    int _errorCode;
    NSString *_errorMessage;
    NSObject<OS_dispatch_group> *_group;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(copy) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool sendReqBeforeEnd; // @synthesize sendReqBeforeEnd=_sendReqBeforeEnd;
- (void)addSendLaunchWxaRedirectingPageRespWithTicket:(id)arg1 appID:(id)arg2 universalLink:(id)arg3 context:(id)arg4 beforeCallback:(CDUnknownBlockType)arg5 afterCallback:(CDUnknownBlockType)arg6;
- (void)addUpdateDeepLinkRequestWithTicket:(id)arg1 result:(id)arg2 context:(id)arg3;

@end

