//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSightCameraViewController.h"

#import "MMImagePickerManagerDelegate-Protocol.h"

@class MMImagePickerManagerOptionObj, NSString, WCFinderCameraViewModel;
@protocol WCFinderCameraViewControllerDelegate;

@interface WCFinderCameraViewController : MMSightCameraViewController <MMImagePickerManagerDelegate>
{
    WCFinderCameraViewModel *_viewModel;
    id <WCFinderCameraViewControllerDelegate> _cameraDelegate;
    MMImagePickerManagerOptionObj *_optionObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImagePickerManagerOptionObj *optionObj; // @synthesize optionObj=_optionObj;
@property(nonatomic) __weak id <WCFinderCameraViewControllerDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property(retain, nonatomic) WCFinderCameraViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)changeCameraCaptureSessionToRun:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)showImagePicker;
- (_Bool)hidesStatusBar;
- (void)viewDidPresent:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)handleDefaultCameraFrontBackDevice;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

