//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCADChainStrengthenInfo : NSObject
{
    int wordingType;
    NSString *directWording;
    NSString *replaceWording;
    NSString *wordingLink;
    NSMutableArray *arrUserName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrUserName; // @synthesize arrUserName;
@property(retain, nonatomic) NSString *wordingLink; // @synthesize wordingLink;
@property(retain, nonatomic) NSString *replaceWording; // @synthesize replaceWording;
@property(retain, nonatomic) NSString *directWording; // @synthesize directWording;
@property(nonatomic) int wordingType; // @synthesize wordingType;
- (_Bool)isValidForShow;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
