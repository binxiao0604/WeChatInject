//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TAVSourceExportColorProperties;

@interface TAVSourceExportVideoConfiguration : NSObject
{
    NSDictionary *_inputSettings;
    unsigned long long _averageBitRate;
    NSString *_videoProfileLevel;
    TAVSourceExportColorProperties *_colorProperties;
    NSDictionary *_videoOutputSetting;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *videoOutputSetting; // @synthesize videoOutputSetting=_videoOutputSetting;
@property(retain, nonatomic) TAVSourceExportColorProperties *colorProperties; // @synthesize colorProperties=_colorProperties;
@property(retain, nonatomic) NSString *videoProfileLevel; // @synthesize videoProfileLevel=_videoProfileLevel;
@property(nonatomic) unsigned long long averageBitRate; // @synthesize averageBitRate=_averageBitRate;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSDictionary *inputSettings; // @synthesize inputSettings=_inputSettings;
- (id)makeOutputSetting;
- (id)init;

@end

