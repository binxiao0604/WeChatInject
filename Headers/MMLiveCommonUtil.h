//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMLiveCommonUtil : NSObject
{
}

+ (struct CGRect)viewFrameForConnectMicUserAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2 totalSize:(struct CGSize)arg3;
+ (_Bool)isLiveLocation:(id)arg1 equal:(id)arg2;
+ (_Bool)isLocationOnlyCityInfo:(id)arg1;
+ (id)getShowAddressWithWCLocationInfo:(id)arg1;
+ (id)createWCLocationInfoWithFinderLocation:(id)arg1;
+ (id)createFinderLocationWithWCLocationInfo:(id)arg1;
+ (id)getRegionForFinderContact:(id)arg1;
+ (id)getTopVCInMainWindow;
+ (void)showErrorAlertWithErrorPage:(id)arg1 inLive:(_Bool)arg2;
+ (void)showErrorToastWithErrorPage:(id)arg1 inLive:(_Bool)arg2;
+ (unsigned long long)getWordCountWithEmojForStr:(id)arg1;
+ (id)calString:(id)arg1 maxCommentCount:(unsigned long long)arg2;
+ (id)genLotteryHourTime:(unsigned int)arg1;
+ (id)genLotteryLocalizedShowTimeSimple:(unsigned int)arg1;
+ (id)genLotteryLocalizedShowTime:(unsigned int)arg1;
+ (id)generateLotteryPrivacyString:(id)arg1;
+ (id)getPlatformShopIconPaddingImage;
+ (id)getPlatformShopIcon:(id)arg1;
+ (id)localizedNumberStringWithIntegerNumber:(unsigned long long)arg1;
+ (id)buildSceneNote:(id)arg1 shopContext:(id)arg2 sessionId:(id)arg3 clickId:(id)arg4;
+ (id)getFullHtmlSuffixRelativeURL:(id)arg1;
+ (id)getDisplayLiveLength:(unsigned int)arg1;
+ (void)lightShock;
+ (void)heavyShock;
+ (struct CGSize)liveSmallVideoViewSizeWithScreenView:(id)arg1;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andLiveTask:(id)arg2;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;
+ (id)coverBlurBackgroundBlurViewWithFrame:(struct CGRect)arg1 andCoverURL:(id)arg2 blurColor:(id)arg3;
+ (id)coverBlurBackgroundBlurViewWithFrame:(struct CGRect)arg1 andCoverURL:(id)arg2;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andFinderUserName:(id)arg2 blurColor:(id)arg3;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andFinderUserName:(id)arg2;
+ (id)avatarBlurBackgroundViewWithFrame:(struct CGRect)arg1 andUserName:(id)arg2;
+ (id)liveBlurBackgroundViewWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 imageDelegate:(id)arg3;
+ (_Bool)isSpecialSmallSizeDevice;
+ (double)liveShoppingPanelWidthWithTotalWidth:(double)arg1;
+ (double)liveShoppingPanelTopMarginWithTotalHeight:(double)arg1;
+ (double)liveCommonPanelDetailHeightWithTotalHeight:(double)arg1;
+ (double)liveCommonPanelWidthWithTotalWidth:(double)arg1;
+ (double)liveCommonPanelTopMarginWithTotalHeight:(double)arg1;
+ (double)liveSafeAreaBottomMarginWithView:(id)arg1;
+ (double)liveSafeAreaTopMarginWithView:(id)arg1;
+ (double)liveSafeAreaRightMarginWithView:(id)arg1;
+ (double)liveSafeAreaLeftMarginWithView:(id)arg1;
+ (struct UIEdgeInsets)getLiveRealSafeAreaInsets:(id)arg1;
+ (id)getDefinedValueArray:(id)arg1;
+ (double)parseFloatFromValues:(id)arg1;
+ (id)getMd5WithData:(id)arg1;
+ (unsigned long long)liveTidUInt64Value:(id)arg1;
+ (double)liveAdpatedValue:(id)arg1;
+ (double)getAdaptedValue:(id)arg1 hasDefined:(_Bool *)arg2 device:(_Bool)arg3;
+ (id)getAdaptedValueNameForDevice:(id)arg1 device:(_Bool)arg2;
+ (double)liveValue:(id)arg1;
+ (unsigned long long)currentDeviceOritation;
+ (_Bool)isCurrentOrientationPortrait;
+ (void)createShadowEffectForView:(id)arg1;
+ (id)getLiveBackgroundImageByUserName:(id)arg1;
+ (id)getContactByUserName:(id)arg1;
+ (id)getDisplayNameByUserName:(id)arg1 andRoomUserName:(id)arg2;
+ (_Bool)isSDKLogViewOpen;
+ (void)setSDKLogViewOpen:(_Bool)arg1;

@end

