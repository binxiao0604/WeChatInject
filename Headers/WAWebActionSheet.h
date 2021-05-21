//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, UIButton, UIScrollView, UIView;
@protocol WAWebActionSheetDelegate;

@interface WAWebActionSheet : MMObject
{
    UIScrollView *_containerView;
    NSMutableArray *_buttonArray;
    UIButton *_cancelButton;
    id <WAWebActionSheetDelegate> _delegate;
    double _maxHeight;
    UIView *_backgroundView;
    UIView *_view;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) __weak id <WAWebActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (id)makeAlertTextViewWithText:(id)arg1 backgroundWidth:(double)arg2;
- (void)setItemColor:(id)arg1 atIndex:(long long)arg2;
- (void)onClickBtn:(id)arg1;
- (void)tapOut:(id)arg1;
- (void)setItemColor:(id)arg1 cancelColor:(id)arg2;
- (void)setItems:(id)arg1 cancelText:(id)arg2 alertText:(id)arg3;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

@end

