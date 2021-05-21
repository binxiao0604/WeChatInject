//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "EmoticonStoreDownloadViewDelegate-Protocol.h"

@class EmoticonStoreDownloadView, EmoticonStoreItem, MMWebImageView, NSString, UIImageView, UILabel, UIView;

@interface MMStoreEmotionHotCell : UICollectionViewCell <EmoticonStoreDownloadViewDelegate>
{
    MMWebImageView *_emotionButton;
    UILabel *_emotionTitleLabel;
    EmoticonStoreItem *_item;
    UIView *_imageBackgroundView;
    long long _type;
    long long _scene;
    MMWebImageView *_tagImageView;
    UIImageView *_newImageView;
    EmoticonStoreDownloadView *_m_downloadView;
    long long _cellType;
}

- (void).cxx_destruct;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) EmoticonStoreDownloadView *m_downloadView; // @synthesize m_downloadView=_m_downloadView;
@property(retain, nonatomic) EmoticonStoreItem *item; // @synthesize item=_item;
- (void)onDownloadFinished;
- (void)showFreeLabel;
- (void)setupLabel;
- (void)setupButton;
- (void)setupFrameView;
- (void)setupDownloadView;
- (void)loadTagImageView;
- (void)setupViews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setScene:(long long)arg1 andType:(long long)arg2;
- (void)setCellBackgroundColor:(id)arg1;
- (void)setBoardViewRecommendCellStyle;
- (void)setPersonalCellStyle;
- (void)hideFreeLabel;
- (void)setupEmotionStoreItem:(id)arg1 delegate:(id)arg2 Entrance:(unsigned int)arg3 andType:(long long)arg4;
- (void)setupLabelWithTitle:(id)arg1;
- (void)setupButtonImageURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
