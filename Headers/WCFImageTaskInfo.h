//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CdnSnsTaskInfo, WCFImageKey;

@interface WCFImageTaskInfo : NSObject
{
    CdnSnsTaskInfo *_cdn;
    WCFImageKey *_imageKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WCFImageKey *imageKey; // @synthesize imageKey=_imageKey;
@property(retain, nonatomic) CdnSnsTaskInfo *cdn; // @synthesize cdn=_cdn;
- (long long)type;
- (id)initWithImageKey:(id)arg1 cdnTask:(id)arg2;
- (id)initWithType:(long long)arg1 key:(id)arg2 uri:(id)arg3 cdnTask:(id)arg4;

@end

