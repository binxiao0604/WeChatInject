//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCFinderLightDarkIconName;

@interface WCFinderWordingIconConfig : NSObject
{
    _Bool _isFromServer;
    NSString *_feedSinglePeopleLike;
    NSString *_feedMultiPeopleLiked;
    NSString *_fullFeedMultiPeopleLiked;
    NSString *_likeListTitle;
    NSString *_mentionLikedFeed;
    NSString *_mentionFriendLikedFeed;
    NSString *_mentionLikedLikes;
    NSString *_likeTips;
    long long _imageFetchType;
    WCFinderLightDarkIconName *_likedFilledIcon;
    WCFinderLightDarkIconName *_likedOutlinedIcon;
    WCFinderLightDarkIconName *_likedGroupIcon;
    WCFinderLightDarkIconName *_privateFilledIcon;
    WCFinderLightDarkIconName *_privateOutlinedIcon;
    WCFinderLightDarkIconName *_likedFilledFullPageIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLightDarkIconName *likedFilledFullPageIcon; // @synthesize likedFilledFullPageIcon=_likedFilledFullPageIcon;
@property(retain, nonatomic) WCFinderLightDarkIconName *privateOutlinedIcon; // @synthesize privateOutlinedIcon=_privateOutlinedIcon;
@property(retain, nonatomic) WCFinderLightDarkIconName *privateFilledIcon; // @synthesize privateFilledIcon=_privateFilledIcon;
@property(retain, nonatomic) WCFinderLightDarkIconName *likedGroupIcon; // @synthesize likedGroupIcon=_likedGroupIcon;
@property(retain, nonatomic) WCFinderLightDarkIconName *likedOutlinedIcon; // @synthesize likedOutlinedIcon=_likedOutlinedIcon;
@property(retain, nonatomic) WCFinderLightDarkIconName *likedFilledIcon; // @synthesize likedFilledIcon=_likedFilledIcon;
@property(nonatomic) long long imageFetchType; // @synthesize imageFetchType=_imageFetchType;
@property(nonatomic) _Bool isFromServer; // @synthesize isFromServer=_isFromServer;
@property(copy, nonatomic) NSString *likeTips; // @synthesize likeTips=_likeTips;
@property(copy, nonatomic) NSString *mentionLikedLikes; // @synthesize mentionLikedLikes=_mentionLikedLikes;
@property(copy, nonatomic) NSString *mentionFriendLikedFeed; // @synthesize mentionFriendLikedFeed=_mentionFriendLikedFeed;
@property(copy, nonatomic) NSString *mentionLikedFeed; // @synthesize mentionLikedFeed=_mentionLikedFeed;
@property(copy, nonatomic) NSString *likeListTitle; // @synthesize likeListTitle=_likeListTitle;
@property(copy, nonatomic) NSString *fullFeedMultiPeopleLiked; // @synthesize fullFeedMultiPeopleLiked=_fullFeedMultiPeopleLiked;
@property(copy, nonatomic) NSString *feedMultiPeopleLiked; // @synthesize feedMultiPeopleLiked=_feedMultiPeopleLiked;
@property(copy, nonatomic) NSString *feedSinglePeopleLike; // @synthesize feedSinglePeopleLike=_feedSinglePeopleLike;

@end
