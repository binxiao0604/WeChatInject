//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCProductRecommandCellItem : NSObject
{
    unsigned int jumpType;
    NSString *iconUrl;
    NSString *title;
    NSString *args;
    NSString *cellJumpUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType;
@property(retain, nonatomic) NSString *cellJumpUrl; // @synthesize cellJumpUrl;
@property(retain, nonatomic) NSString *args; // @synthesize args;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
- (void)dealloc;

@end

