//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MMAsset, NSString;

@interface MMMusicAlbumVideoCellModel : MMObject
{
    int _pos;
    NSString *_uniqueId;
    MMAsset *_asset;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) int pos; // @synthesize pos=_pos;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;

@end

