//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TextState3rdPartyCustomViewDelegate-Protocol.h"

@class MMUILabel, MMWebImageView, NSString, UITapGestureRecognizer;
@protocol TextState3rdPartyCustomView;

@interface TextStatePublishSourceView : UIView <TextState3rdPartyCustomViewDelegate>
{
    NSString *_iconName;
    NSString *_iconImageURL;
    UIView<TextState3rdPartyCustomView> *_customView;
    CDUnknownBlockType _refreshHandler;
    CDUnknownBlockType _tapHandler;
    MMWebImageView *_imageView;
    MMUILabel *_nameLabel;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(copy, nonatomic) CDUnknownBlockType refreshHandler; // @synthesize refreshHandler=_refreshHandler;
@property(retain, nonatomic) UIView<TextState3rdPartyCustomView> *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) NSString *iconImageURL; // @synthesize iconImageURL=_iconImageURL;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void)customViewDidRefresh;
- (void)onTapView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initGesture;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

