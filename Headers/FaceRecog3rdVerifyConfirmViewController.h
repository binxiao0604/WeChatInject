//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"

@class FaceRecog3rdVerifyConfirmLogic, MMUILabel, MMWebImageView, NSString, RichTextView, UIButton, UIImageView;
@protocol FaceRecog3rdVerifyConfirmViewControllerDelegate;

@interface FaceRecog3rdVerifyConfirmViewController : MMUIViewController <ILinkEventExt>
{
    _Bool _bAgreement;
    id <FaceRecog3rdVerifyConfirmViewControllerDelegate> _delegate;
    UIButton *_readAgreementBtn;
    RichTextView *_agreementView;
    UIButton *_feedbackButton;
    UIImageView *_imageCheckBox;
    MMWebImageView *_iconView;
    MMUILabel *_nameLabel;
    MMUILabel *_sloganLabel;
    UIButton *_confirmInvokeBtn;
    FaceRecog3rdVerifyConfirmLogic *_confirmLogic;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) FaceRecog3rdVerifyConfirmLogic *confirmLogic; // @synthesize confirmLogic=_confirmLogic;
@property(retain, nonatomic) UIButton *confirmInvokeBtn; // @synthesize confirmInvokeBtn=_confirmInvokeBtn;
@property(retain, nonatomic) MMUILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *imageCheckBox; // @synthesize imageCheckBox=_imageCheckBox;
@property(nonatomic) _Bool bAgreement; // @synthesize bAgreement=_bAgreement;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) RichTextView *agreementView; // @synthesize agreementView=_agreementView;
@property(retain, nonatomic) UIButton *readAgreementBtn; // @synthesize readAgreementBtn=_readAgreementBtn;
@property(nonatomic) __weak id <FaceRecog3rdVerifyConfirmViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateView:(id)arg1;
- (void)onCancel;
- (void)onStartFaceReco;
- (void)onFeedback;
- (id)faceRecogVerifyGetFeedbackUrl;
- (void)onClickCheckBox;
- (void)initLayout;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (id)initWithAppId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

