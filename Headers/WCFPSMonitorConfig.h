//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MatrixPluginConfig.h"

@interface WCFPSMonitorConfig : MatrixPluginConfig
{
    int _dumpInterval;
    int _dumpMaxCount;
    double _maxFrameInterval;
}

+ (id)defaultConfiguration;
@property(nonatomic) double maxFrameInterval; // @synthesize maxFrameInterval=_maxFrameInterval;
@property(nonatomic) int dumpMaxCount; // @synthesize dumpMaxCount=_dumpMaxCount;
@property(nonatomic) int dumpInterval; // @synthesize dumpInterval=_dumpInterval;

@end
