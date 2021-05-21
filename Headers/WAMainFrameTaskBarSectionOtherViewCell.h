//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IMiniMizeUserdRecordUpdateExt-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"

@class CAGradientLayer, MMUIButton, MMWebImageView, MinimizeTaskData, NSString, UILabel, UIView;
@protocol WAMainFrameTaskBarSectionOtherViewCellDelegate;

@interface WAMainFrameTaskBarSectionOtherViewCell : UICollectionViewCell <MMWebImageViewDelegate, IMiniMizeUserdRecordUpdateExt>
{
    _Bool m_selected;
    UIView *_topMask;
    UIView *_bottomMask;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_bottomGradientLayer;
    MMUIButton *_closeButton;
    MinimizeTaskData *_taskData;
    id <WAMainFrameTaskBarSectionOtherViewCellDelegate> _delegate;
    UIView *_contentContainer;
    UIView *_coverArea;
    MMWebImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_sourceLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *coverArea; // @synthesize coverArea=_coverArea;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(nonatomic) __weak id <WAMainFrameTaskBarSectionOtherViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTaskSnapShotUpdate:(id)arg1;
- (_Bool)shouldListenSnapshotUpdate;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithListInfo:(id)arg1;
- (id)defaultImage;
- (_Bool)supportAddToMinimize;
- (void)onCloseBtnClicked;
- (void)initView;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

