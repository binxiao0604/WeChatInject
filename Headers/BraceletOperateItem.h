//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeviceProfileButton, NSString;

@interface BraceletOperateItem : NSObject
{
    unsigned int _operateType;
    NSString *_operateTitle;
    DeviceProfileButton *_profileButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DeviceProfileButton *profileButton; // @synthesize profileButton=_profileButton;
@property(nonatomic) unsigned int operateType; // @synthesize operateType=_operateType;
@property(retain, nonatomic) NSString *operateTitle; // @synthesize operateTitle=_operateTitle;

@end
