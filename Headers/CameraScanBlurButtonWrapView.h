//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface CameraScanBlurButtonWrapView : UIView
{
    UIButton *_topButton;
    UIView *_bottomView;
    UIView *_middleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *middleView; // @synthesize middleView=_middleView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *topButton; // @synthesize topButton=_topButton;
- (void)setupSubviews;
- (id)init;

@end

