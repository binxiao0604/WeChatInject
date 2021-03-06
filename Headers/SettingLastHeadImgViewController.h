//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ImageScrollViewDelegate-Protocol.h"

@class ImageScrollView, NSString, UIImage;
@protocol SettingLastHeadImgViewControllerDelegate;

@interface SettingLastHeadImgViewController : MMUIViewController <ImageScrollViewDelegate>
{
    id <SettingLastHeadImgViewControllerDelegate> _delegate;
    UIImage *_originalImage;
    ImageScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ImageScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(nonatomic) __weak id <SettingLastHeadImgViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)onPhotoSave;
- (void)operate;
- (void)cancel;
- (void)use;
- (void)viewDidLayoutSubviews;
- (void)initButton;
- (void)initScrollViewAndImageView;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

