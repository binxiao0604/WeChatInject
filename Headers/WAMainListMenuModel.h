//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GetWxaDesktopEntranceResponse_EntranceInfo, NSString, TipsShowInfo, UIImage;

@interface WAMainListMenuModel : NSObject
{
    NSString *_title;
    UIImage *_iconImage;
    NSString *_badge;
    GetWxaDesktopEntranceResponse_EntranceInfo *_entranceInfo;
    TipsShowInfo *_tipsInfo;
}

+ (id)createWithIcon:(id)arg1 title:(id)arg2 entranceInfo:(id)arg3;
+ (id)createWithIcon:(id)arg1 title:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TipsShowInfo *tipsInfo; // @synthesize tipsInfo=_tipsInfo;
@property(retain, nonatomic) GetWxaDesktopEntranceResponse_EntranceInfo *entranceInfo; // @synthesize entranceInfo=_entranceInfo;
@property(retain, nonatomic) NSString *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

