//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImagePickerManagerDelegate-Protocol.h"

@class FinderLiveAliasInfo, MMWebImageView, NSString, UIButton, UILabel, UITextField;

@interface WCFinderTrumpetEditorViewController : MMUIViewController <MMImagePickerManagerDelegate>
{
    _Bool _hideTakePhotoAction;
    FinderLiveAliasInfo *_aliasInfo;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_certainButton;
    UITextField *_nickNameTextField;
    MMWebImageView *_headerImageView;
    NSString *_headerImageURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property(nonatomic) __weak MMWebImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) __weak UITextField *nickNameTextField; // @synthesize nickNameTextField=_nickNameTextField;
@property(nonatomic) __weak UIButton *certainButton; // @synthesize certainButton=_certainButton;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool hideTakePhotoAction; // @synthesize hideTakePhotoAction=_hideTakePhotoAction;
@property(retain, nonatomic) FinderLiveAliasInfo *aliasInfo; // @synthesize aliasInfo=_aliasInfo;
- (void)handleImage:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)showImagePicker:(long long)arg1;
- (void)onPhotoLibrary;
- (void)onCamera;
- (void)clickDoneAction;
- (void)textFieldDone:(id)arg1;
- (void)textFieldChange:(id)arg1;
- (void)clickHeader;
- (id)createLineView;
- (void)setUpUI;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

