//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface WARemoteDebugMaskView : UIView
{
    _Bool _isShowing;
    UILabel *_label;
    UIButton *_stopButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
- (void)dismiss;
- (void)showWithString:(id)arg1;
- (id)init;

@end

