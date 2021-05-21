//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt-Protocol.h"

@class MMHeadImageView, NSString, RichTextView, UIImageView, UILabel;
@protocol MMAcceptAgreementCommonHeadViewDelegate;

@interface MMAcceptAgreementCommonHeadView : MMUIView <ILinkEventExt>
{
    MMHeadImageView *m_headImageView;
    double m_topMargin;
    UILabel *m_titleView;
    UILabel *m_contentView;
    UIImageView *m_logoView;
    RichTextView *m_contentRichTextView;
    id <MMAcceptAgreementCommonHeadViewDelegate> m_delegate;
    double _m_titleViewMargin;
    double _m_contentViewMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double m_contentViewMargin; // @synthesize m_contentViewMargin=_m_contentViewMargin;
@property(nonatomic) double m_titleViewMargin; // @synthesize m_titleViewMargin=_m_titleViewMargin;
@property(nonatomic) __weak id <MMAcceptAgreementCommonHeadViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) RichTextView *m_contentRichTextView; // @synthesize m_contentRichTextView;
@property(retain, nonatomic) UIImageView *m_logoView; // @synthesize m_logoView;
@property(retain, nonatomic) UILabel *m_contentView; // @synthesize m_contentView;
@property(retain, nonatomic) UILabel *m_titleView; // @synthesize m_titleView;
@property(nonatomic) double m_topMargin; // @synthesize m_topMargin;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)contentTextColor;
- (id)titleTextColor;
- (double)getContentViewMargin;
- (double)getTitleViewMargin;
- (void)updateHeadContentRichTextView:(id)arg1;
- (void)updateViewWithLogoSVGImage:(id)arg1 headContact:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4;
- (void)updateViewWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3;
- (void)updateViewWithLogoSVG:(id)arg1 headContact:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

