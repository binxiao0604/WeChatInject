//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSTouchEventTracker-Protocol.h"

@class NSMutableArray, NSString, TSTouchTrackRecognizer, UIView;

@interface TSTouchTapTracker : NSObject <TSTouchEventTracker>
{
    UIView *_attachedView;
    TSTouchTrackRecognizer *_trackRecognizer;
    NSMutableArray *_touches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *touches; // @synthesize touches=_touches;
@property(retain, nonatomic) TSTouchTrackRecognizer *trackRecognizer; // @synthesize trackRecognizer=_trackRecognizer;
@property(nonatomic) __weak UIView *attachedView; // @synthesize attachedView=_attachedView;
- (void)attachedControlOnClick:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 trackEventHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

