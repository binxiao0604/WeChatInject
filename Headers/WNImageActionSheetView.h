//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WNActionButtonDelegate-Protocol.h"

@class MMUIButton, NSArray, NSMutableArray, NSString;
@protocol WNImageActionSheetViewDelegate;

@interface WNImageActionSheetView : UIView <WNActionButtonDelegate>
{
    id <WNImageActionSheetViewDelegate> _delegate;
    NSArray *_arrSelectedIndex;
    double _leftTitleLabelWidth;
    double _buttonLabelWidth;
    NSArray *_arrLeftTitles;
    NSArray *_arrAllBtnInfos;
    NSMutableArray *_arrSelectedBtnIndexs;
    NSMutableArray *_arrAllBtns;
    MMUIButton *_closeButton;
    UIView *_allButtonsView;
    UIView *_headerView;
    UIView *_bottomView;
    struct CGPoint _oriPosition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *allButtonsView; // @synthesize allButtonsView=_allButtonsView;
@property(nonatomic) struct CGPoint oriPosition; // @synthesize oriPosition=_oriPosition;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSMutableArray *arrAllBtns; // @synthesize arrAllBtns=_arrAllBtns;
@property(retain, nonatomic) NSMutableArray *arrSelectedBtnIndexs; // @synthesize arrSelectedBtnIndexs=_arrSelectedBtnIndexs;
@property(retain, nonatomic) NSArray *arrAllBtnInfos; // @synthesize arrAllBtnInfos=_arrAllBtnInfos;
@property(retain, nonatomic) NSArray *arrLeftTitles; // @synthesize arrLeftTitles=_arrLeftTitles;
@property(nonatomic) double buttonLabelWidth; // @synthesize buttonLabelWidth=_buttonLabelWidth;
@property(nonatomic) double leftTitleLabelWidth; // @synthesize leftTitleLabelWidth=_leftTitleLabelWidth;
@property(retain, nonatomic) NSArray *arrSelectedIndex; // @synthesize arrSelectedIndex=_arrSelectedIndex;
@property(nonatomic) __weak id <WNImageActionSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickButtonWithType:(long long)arg1 andIndex:(long long)arg2;
- (void)onClickConfirmButton:(id)arg1;
- (void)onClickCancelButton:(id)arg1;
- (void)onClickButton:(id)arg1;
- (void)updateSelectedBtns:(id)arg1;
- (void)changeToSelectedBtn:(long long)arg1 andIndex:(long long)arg2;
- (void)addGradientLayerFor:(id)arg1 beginAlphaComponent:(double)arg2 endAlphaComponent:(double)arg3;
- (void)addBottomView:(struct CGRect)arg1;
- (void)addHeaderView:(struct CGRect)arg1;
- (void)generateRightScorllView:(id)arg1 andFrame:(struct CGRect)arg2;
- (void)generateLeftLabel:(id)arg1 withOrigin:(struct CGPoint)arg2;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1 andTitles:(id)arg2 andAllBtnInfos:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

