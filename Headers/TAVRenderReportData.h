//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TAVRenderReportData : NSObject
{
    long long _renderTime;
    double _renderCostTime;
    long long _decodeTime;
    double _decodeCostTime;
    long long _decodeSuccessTime;
    struct CGSize _renderSize;
}

@property(nonatomic) long long decodeSuccessTime; // @synthesize decodeSuccessTime=_decodeSuccessTime;
@property(nonatomic) double decodeCostTime; // @synthesize decodeCostTime=_decodeCostTime;
@property(nonatomic) long long decodeTime; // @synthesize decodeTime=_decodeTime;
@property(nonatomic) double renderCostTime; // @synthesize renderCostTime=_renderCostTime;
@property(nonatomic) long long renderTime; // @synthesize renderTime=_renderTime;
@property(nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;

@end
