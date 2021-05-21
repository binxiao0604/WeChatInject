//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMHeadImageView, MMWebImageView;

@interface WDCommonHeadImageView : UIView
{
    _Bool _isFriend;
    double _headSize;
    MMWebImageView *_webImageView;
    MMHeadImageView *_headImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(nonatomic) double headSize; // @synthesize headSize=_headSize;
@property(nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
- (void)setHeadImage:(id)arg1 url:(id)arg2;
- (void)setHashName:(id)arg1 andHeadUrl:(id)arg2;
- (void)setLikeMsgInfo:(id)arg1;
- (void)setCommonInfo:(id)arg1;
- (id)initWithLikeMsgInfo:(id)arg1 size:(double)arg2;
- (id)initWithCommonInfo:(id)arg1 size:(double)arg2;
- (id)initWithSize:(double)arg1;

@end

