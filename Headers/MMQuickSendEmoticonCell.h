//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IStoreEmotionSingleDownloadMgrExt-Protocol.h"

@class CEmoticonWrap, MMEmoticonView, MMWebImageView, NSString, SightIconView, UILabel, UIView;

@interface MMQuickSendEmoticonCell : UICollectionViewCell <IStoreEmotionSingleDownloadMgrExt>
{
    UIView *m_backgroundView;
    _Bool _needPlayGif;
    MMEmoticonView *_emoticonView;
    MMWebImageView *_thumbView;
    CEmoticonWrap *_emoticonWrap;
    SightIconView *_sightIconView;
    UILabel *_descLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needPlayGif; // @synthesize needPlayGif=_needPlayGif;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) SightIconView *sightIconView; // @synthesize sightIconView=_sightIconView;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) MMWebImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)layoutSubviews;
- (void)updateEmoticonView;
- (void)showRecommendIdentifyIfNeeded;
- (void)setEmoticonWrap:(id)arg1 PlayGif:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)showBackgroundView;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
