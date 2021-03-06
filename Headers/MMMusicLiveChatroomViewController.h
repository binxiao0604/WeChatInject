//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "InputControllerDelegate-Protocol.h"
#import "MMMusicLiveCommentViewDelegate-Protocol.h"

@class MMGrowTextView, MMMusicLiveCommentModel, MMMusicLiveCommentView, MMUIButton, NSString, UIView, WCInputController;
@protocol MMMusicLiveChatroomViewControllerDelegate;

@interface MMMusicLiveChatroomViewController : MMUIViewController <MMMusicLiveCommentViewDelegate, InputControllerDelegate>
{
    id <MMMusicLiveChatroomViewControllerDelegate> _delegate;
    MMMusicLiveCommentModel *_commentModel;
    MMUIButton *_closeButton;
    MMMusicLiveCommentView *_commentView;
    MMGrowTextView *_commentInputView;
    UIView *_inputAreaView;
    WCInputController *_inputController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) UIView *inputAreaView; // @synthesize inputAreaView=_inputAreaView;
@property(retain, nonatomic) MMGrowTextView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(retain, nonatomic) MMMusicLiveCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMMusicLiveCommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(nonatomic) __weak id <MMMusicLiveChatroomViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCommitText:(id)arg1;
- (void)leaveCommentInputState;
- (void)enterCommentInputState;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)keyboardHiding;
- (void)keyboardWillHide;
- (void)keyboardShowing;
- (void)keyboardWillShow;
- (double)getVisibleHeight;
- (void)liveCommentView:(id)arg1 didTappedCommentRow:(long long)arg2;
- (void)resetCommentHeight;
- (void)resetInputView;
- (void)handleTappedCloseButton:(id)arg1;
- (void)liveCommentViewWillBeginScroll:(id)arg1;
- (void)setCurrentAudienceCount:(unsigned long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)setupSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCommentModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

