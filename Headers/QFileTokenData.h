//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QFileTokenData : NSObject
{
    NSString *_host;
    NSString *_token;
    double _expire;
}

- (void).cxx_destruct;
@property(nonatomic) double expire; // @synthesize expire=_expire;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) NSString *hostUrl;
- (id)initWithDict:(id)arg1;

@end

