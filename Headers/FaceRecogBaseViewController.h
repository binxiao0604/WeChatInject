//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class FaceRecogBaseView;

@interface FaceRecogBaseViewController : MMUIViewController
{
    _Bool _showSuccessBtn;
    _Bool _bUseBlackStatusbar;
    FaceRecogBaseView *_baseView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bUseBlackStatusbar; // @synthesize bUseBlackStatusbar=_bUseBlackStatusbar;
@property(nonatomic) _Bool showSuccessBtn; // @synthesize showSuccessBtn=_showSuccessBtn;
@property(retain, nonatomic) FaceRecogBaseView *baseView; // @synthesize baseView=_baseView;
- (void)onNavBack;
- (void)viewDidTransitionToNewSize;
- (void)procedureDidFailed:(id)arg1 canRetry:(_Bool)arg2;
- (void)procedureDidFinish;
- (void)procedureDidGotFrameResult:(id)arg1 currentMotionType:(unsigned long long)arg2 failedType:(long long)arg3;
- (void)attachPreviewLayer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBeInteractivePoped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (_Bool)useBlackStatusbar;
- (id)init;

@end

