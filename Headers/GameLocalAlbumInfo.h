//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface GameLocalAlbumInfo : MMObject
{
    NSString *_appId;
    NSString *_gameName;
    NSString *_albumName;
    NSString *_defaultTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *gameName; // @synthesize gameName=_gameName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

