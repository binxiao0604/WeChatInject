//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact, NSString;

@interface MMLiveApplyConnectMicAudience : NSObject
{
    _Bool _isSelf;
    NSString *_sdkUserId;
    NSString *_displayName;
    NSString *_avatarUrlString;
    NSString *_avatarHDUrlString;
    NSString *_liveMicId;
    NSString *_identityId;
    NSString *_roomId;
    CContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
@property(copy, nonatomic) NSString *liveMicId; // @synthesize liveMicId=_liveMicId;
@property(copy, nonatomic) NSString *avatarHDUrlString; // @synthesize avatarHDUrlString=_avatarHDUrlString;
@property(copy, nonatomic) NSString *avatarUrlString; // @synthesize avatarUrlString=_avatarUrlString;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;

@end

