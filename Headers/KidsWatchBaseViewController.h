//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UITapGestureRecognizer, WCSheetView;
@protocol KidsWatchBaseViewControllerDelegate;

@interface KidsWatchBaseViewController : MMUIViewController <UIScrollViewDelegate>
{
    _Bool _allowTapEndEditing;
    _Bool _firstResponderOnceToken;
    id <KidsWatchBaseViewControllerDelegate> _delegate;
    WCSheetView *_sheetView;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool firstResponderOnceToken; // @synthesize firstResponderOnceToken=_firstResponderOnceToken;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool allowTapEndEditing; // @synthesize allowTapEndEditing=_allowTapEndEditing;
@property(retain, nonatomic) WCSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) __weak id <KidsWatchBaseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)becomeFirstResponderOnce;
- (void)openKitChen:(id)arg1;
- (void)addTestGesture;
- (void)onKeyboardChangingHeight:(double)arg1;
- (void)onKeyboardWillChangeHeight:(double)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)initKeyboardEventListener;
- (_Bool)shouldEndEditForTappedView:(id)arg1;
- (void)onTapGestureTap:(id)arg1;
- (void)onTapCloseBarButtonItem;
- (void)onTapBackBarButtonItem;
- (void)onTapDismissBarButtonItem;
- (_Bool)forceCloseBarButtonItem;
- (_Bool)respondToKeyboardEvent;
- (double)contentWidth;
- (double)maxContentWidth;
- (long long)overrideUserInterfaceStyle;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)viewWillBeInteractivePoped;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
