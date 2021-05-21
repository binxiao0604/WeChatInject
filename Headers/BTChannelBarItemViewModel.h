//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BTBarItemViewModelProtocol-Protocol.h"

@class BTBaseBarItemView, MPChannelTopBarInfo, NSString;

@interface BTChannelBarItemViewModel : NSObject <BTBarItemViewModelProtocol>
{
    _Bool _hasLine;
    NSString *_username;
    NSString *_nickName;
    BTBaseBarItemView *_barItemView;
    MPChannelTopBarInfo *_channelInfo;
}

+ (id)itemViewClassName;
- (void).cxx_destruct;
@property(retain, nonatomic) MPChannelTopBarInfo *channelInfo; // @synthesize channelInfo=_channelInfo;
@property(nonatomic) __weak BTBaseBarItemView *barItemView; // @synthesize barItemView=_barItemView;
@property(nonatomic) _Bool hasLine; // @synthesize hasLine=_hasLine;
@property(readonly, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *smallIconUrl;
@property(readonly, nonatomic) _Bool showSmallIcon;
@property(readonly, nonatomic) NSString *informMsgCnt;
@property(readonly, nonatomic) _Bool showChannelGreenDot;
@property(readonly, nonatomic) _Bool hasArrow;
@property(readonly, nonatomic) _Bool hasGreenDot;
@property(readonly, nonatomic) _Bool useDefaultIcon;
@property(readonly, nonatomic) NSString *dmHeadImgUrl;
@property(readonly, nonatomic) NSString *headImgUrl;
@property(readonly, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

