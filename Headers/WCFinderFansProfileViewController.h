//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

#import "WCFinderHalfProfileInfoViewDelegate-Protocol.h"

@class CContact, NSString, RichTextView, UIButton, UILabel, WCFinderComment, WCFinderContact, WCFinderHalfProfileInfoView, WCFinderHeadImageView;
@protocol WCFinderFansProfileViewControllerDelegate;

@interface WCFinderFansProfileViewController : MMUIHalfScreenViewController <WCFinderHalfProfileInfoViewDelegate>
{
    id <WCFinderFansProfileViewControllerDelegate> _fansProfileDelegate;
    unsigned long long _fromSceneType;
    WCFinderHeadImageView *_headImageView;
    RichTextView *_nickNameView;
    RichTextView *_signatureView;
    UIButton *_addToBlackListButton;
    UIButton *_privateMsgButton;
    unsigned long long _actionType;
    UILabel *_sexLabel;
    UILabel *_cityLabel;
    WCFinderComment *_comment;
    CContact *_contact;
    WCFinderContact *_finderContact;
    WCFinderHalfProfileInfoView *_profileInfoView;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) WCFinderHalfProfileInfoView *profileInfoView; // @synthesize profileInfoView=_profileInfoView;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak UILabel *cityLabel; // @synthesize cityLabel=_cityLabel;
@property(nonatomic) __weak UILabel *sexLabel; // @synthesize sexLabel=_sexLabel;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) __weak UIButton *privateMsgButton; // @synthesize privateMsgButton=_privateMsgButton;
@property(nonatomic) __weak UIButton *addToBlackListButton; // @synthesize addToBlackListButton=_addToBlackListButton;
@property(retain, nonatomic) RichTextView *signatureView; // @synthesize signatureView=_signatureView;
@property(retain, nonatomic) RichTextView *nickNameView; // @synthesize nickNameView=_nickNameView;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) unsigned long long fromSceneType; // @synthesize fromSceneType=_fromSceneType;
@property(nonatomic) __weak id <WCFinderFansProfileViewControllerDelegate> fansProfileDelegate; // @synthesize fansProfileDelegate=_fansProfileDelegate;
- (void)finderHalfProfileInfoView:(id)arg1 didClickLikeList:(id)arg2;
- (void)finderHalfProfileInfoView:(id)arg1 didClickContact:(id)arg2;
- (void)clickPrivateMsgAction;
- (void)clickBlackListButtonAction;
- (void)setUpUI;
- (void)updateContentWithContact:(id)arg1;
- (void)updateContentHeightWithContact:(id)arg1 showAction:(_Bool)arg2 animation:(_Bool)arg3;
- (void)updateFansContact;
- (void)_updateUI;
- (void)_updateView;
- (void)updatePrivateMsgContact:(id)arg1 actionType:(unsigned long long)arg2 sessionId:(id)arg3 finderContact:(id)arg4;
- (void)updateContact:(id)arg1 actionType:(unsigned long long)arg2 comment:(id)arg3 finderContact:(id)arg4;
- (void)reportPrivateMsgButtonExpouse;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

