//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IWebNetTaskCallBack.h"

@class MMTimer, NSString;
@protocol MMResourceCdnDownloaderNotifierDelegate;

@interface MMResourceCdnDownloaderNotifier : IWebNetTaskCallBack
{
    id <MMResourceCdnDownloaderNotifierDelegate> _delegate;
    NSString *_identifier;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <MMResourceCdnDownloaderNotifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTimeout;
- (void)invalidateTimer;
- (void)scheduleTimer;
- (void)OnDownloadCompleted:(id)arg1 response:(id)arg2;
- (void)unregisterExtension;
- (void)registerExtension;
- (void)notifyWithDownloadInfo:(id)arg1;
- (void)stop;
- (void)startWithDelegate:(id)arg1 identifier:(id)arg2;
- (void)dealloc;

@end

