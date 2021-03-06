//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class FLEXArgumentInputView, FLEXFieldEditorView, NSString, UIBarButtonItem, UIScrollView;

@interface FLEXFieldEditorViewController : UIViewController <UIScrollViewDelegate>
{
    id _target;
    FLEXFieldEditorView *_fieldEditorView;
    UIBarButtonItem *_setterButton;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIBarButtonItem *setterButton; // @synthesize setterButton=_setterButton;
@property(retain, nonatomic) FLEXFieldEditorView *fieldEditorView; // @synthesize fieldEditorView=_fieldEditorView;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (id)titleForActionButton;
- (void)actionButtonPressed:(id)arg1;
@property(readonly, nonatomic) FLEXArgumentInputView *firstInputView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

