//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCProductActionItemInfo : NSObject
{
    _Bool isPopUp;
    unsigned int actionType;
    unsigned int index;
    NSString *iconUrl;
    NSString *title;
    NSString *tips;
    NSString *content;
    NSArray *imageUrlList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int index; // @synthesize index;
@property(retain, nonatomic) NSArray *imageUrlList; // @synthesize imageUrlList;
@property(nonatomic) unsigned int actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *tips; // @synthesize tips;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(nonatomic) _Bool isPopUp; // @synthesize isPopUp;

@end

