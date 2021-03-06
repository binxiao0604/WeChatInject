//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCShareCardBaseHeaderView.h"

@class CALayer, MMUIButton, MMUILabel, MMUIView, MMWebImageView, NSMutableArray, UIImage;
@protocol WCShareCardGeneralReceiveHeaderDelegate;

@interface WCShareCardGeneralReceiveHeaderView : WCShareCardBaseHeaderView
{
    _Bool _isShowIcon;
    int _cardType;
    id <WCShareCardGeneralReceiveHeaderDelegate> _delegate;
    NSMutableArray *_textLabelArray;
    NSMutableArray *_textArray;
    MMUIButton *_sureButton;
    MMUILabel *_vaildDateLabel;
    MMUILabel *_useabelTimeLabel;
    MMUILabel *_detailLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    MMWebImageView *_headImageView;
    MMUIView *_conditionView;
    CALayer *_shadowLayer;
    MMUIView *_backView;
    CALayer *_maskLayer;
    double _viewWidth;
    UIImage *_disableBgImg;
    MMUILabel *_displaySubTitleLabel;
    MMUILabel *_displayAuxTitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *displayAuxTitleLabel; // @synthesize displayAuxTitleLabel=_displayAuxTitleLabel;
@property(retain, nonatomic) MMUILabel *displaySubTitleLabel; // @synthesize displaySubTitleLabel=_displaySubTitleLabel;
@property(retain, nonatomic) UIImage *disableBgImg; // @synthesize disableBgImg=_disableBgImg;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(nonatomic) _Bool isShowIcon; // @synthesize isShowIcon=_isShowIcon;
@property(nonatomic) int cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) MMUIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) MMUIView *conditionView; // @synthesize conditionView=_conditionView;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *useabelTimeLabel; // @synthesize useabelTimeLabel=_useabelTimeLabel;
@property(retain, nonatomic) MMUILabel *vaildDateLabel; // @synthesize vaildDateLabel=_vaildDateLabel;
@property(retain, nonatomic) MMUIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) NSMutableArray *textArray; // @synthesize textArray=_textArray;
@property(retain, nonatomic) NSMutableArray *textLabelArray; // @synthesize textLabelArray=_textLabelArray;
@property(nonatomic) __weak id <WCShareCardGeneralReceiveHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (double)headImgLen;
- (id)getVailDateStr;
- (_Bool)hasLimitField;
- (_Bool)hasOperateField;
- (id)getTitleName;
- (id)getSubTitleName;
- (_Bool)shouldShowConditionView;
- (double)calcUsedConditionHeight;
- (void)singleSureButtonDidSelected;
- (double)viewHeight;
- (void)layoutSubviews;
- (void)confiUIByData;
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 isShowIcon:(_Bool)arg3 isShareCard:(_Bool)arg4 cardStatus:(int)arg5 isNeedHideAccecptBtn:(_Bool)arg6 delegate:(id)arg7;

@end

