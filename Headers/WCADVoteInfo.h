//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface WCADVoteInfo : NSObject <NSCoding>
{
    _Bool _forceUpdate;
    NSArray *_options;
    NSString *_componentUrl;
    NSString *_voteLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *voteLabel; // @synthesize voteLabel=_voteLabel;
@property(nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(retain, nonatomic) NSString *componentUrl; // @synthesize componentUrl=_componentUrl;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
- (_Bool)hasFriendsList;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

