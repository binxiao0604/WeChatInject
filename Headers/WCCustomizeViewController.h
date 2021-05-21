//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString;

@interface WCCustomizeViewController : MMUIViewController <MMSightCameraViewControllerDelegate, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, MMImagePickerManagerDelegate>
{
    NSMutableArray *m_rowsData;
    MMTableView *m_tableView;
    NSString *m_username;
    _Bool m_isUploading;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_username; // @synthesize m_username;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSMutableArray *m_rowsData; // @synthesize m_rowsData;
- (id)cropAndResize:(id)arg1 realCropRect:(struct CGRect)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)getNavigationController;
- (id)getViewController;
- (void)onFinishedSelectImage:(id)arg1;
- (void)popToMessageSessionView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)reloadRowData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

