//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCActionSheetDelegate-Protocol.h"

@class AVAsset, MMUIViewController, NSString, NSURL;
@protocol MMImagePickerControlCenter, WCFinderLongVideoChooseHelperContextProtocol;

@interface WCFinderLongVideoChooseHelper : NSObject <WCActionSheetDelegate>
{
    _Bool _isSlowMotionVideo;
    AVAsset *_asset;
    NSURL *_url;
    MMUIViewController<WCFinderLongVideoChooseHelperContextProtocol> *_context;
    id <MMImagePickerControlCenter> _controlCenter;
    CDUnknownBlockType _shortAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType shortAction; // @synthesize shortAction=_shortAction;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(nonatomic) __weak MMUIViewController<WCFinderLongVideoChooseHelperContextProtocol> *context; // @synthesize context=_context;
@property(nonatomic) _Bool isSlowMotionVideo; // @synthesize isSlowMotionVideo=_isSlowMotionVideo;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (id)genTimelineVideoTimeFormatByUInt:(unsigned int)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startLongVideoPostWithAsset:(id)arg1 videoUrl:(id)arg2;
- (void)showLongVideoPostEntryWithShortAction:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

