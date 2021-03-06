//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TBMapCommonCounter;

@interface QUniversalMapCounter : NSObject
{
    TBMapCommonCounter *_worldMapCounter;
    TBMapCommonCounter *_customLayerCounter;
    TBMapCommonCounter *_indoorCounter;
    TBMapCommonCounter *_darkModeCounter;
    TBMapCommonCounter *_pointEventCounter;
    TBMapCommonCounter *_vectorHeatCounter;
    TBMapCommonCounter *_groundOverlayCounter;
    TBMapCommonCounter *_aoiLayerCounter;
    TBMapCommonCounter *_offlineMapCounter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TBMapCommonCounter *offlineMapCounter; // @synthesize offlineMapCounter=_offlineMapCounter;
@property(retain, nonatomic) TBMapCommonCounter *aoiLayerCounter; // @synthesize aoiLayerCounter=_aoiLayerCounter;
@property(retain, nonatomic) TBMapCommonCounter *groundOverlayCounter; // @synthesize groundOverlayCounter=_groundOverlayCounter;
@property(retain, nonatomic) TBMapCommonCounter *vectorHeatCounter; // @synthesize vectorHeatCounter=_vectorHeatCounter;
@property(retain, nonatomic) TBMapCommonCounter *pointEventCounter; // @synthesize pointEventCounter=_pointEventCounter;
@property(retain, nonatomic) TBMapCommonCounter *darkModeCounter; // @synthesize darkModeCounter=_darkModeCounter;
@property(retain, nonatomic) TBMapCommonCounter *indoorCounter; // @synthesize indoorCounter=_indoorCounter;
@property(retain, nonatomic) TBMapCommonCounter *customLayerCounter; // @synthesize customLayerCounter=_customLayerCounter;
@property(retain, nonatomic) TBMapCommonCounter *worldMapCounter; // @synthesize worldMapCounter=_worldMapCounter;
- (id)init;

@end

