//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface WADetailBackView : UIView
{
    UIButton *_backButton;
    CDUnknownBlockType _tapBlock;
    CDUnknownBlockType _traitCollectionDidChangeBlock;
    UIView *_divLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *divLineView; // @synthesize divLineView=_divLineView;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlock; // @synthesize traitCollectionDidChangeBlock=_traitCollectionDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onClickDetailBack;
- (void)layoutSubviews;
- (_Bool)appeared;
- (id)init;

@end

