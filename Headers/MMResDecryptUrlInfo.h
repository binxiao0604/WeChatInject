//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface MMResDecryptUrlInfo : MMObject
{
    NSString *_resUrl;
    NSString *_version;
    NSString *_aesKey;
    NSString *_md5;
    NSString *_originalMd5;
    NSString *_originalSha1;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originalSha1; // @synthesize originalSha1=_originalSha1;
@property(retain, nonatomic) NSString *originalMd5; // @synthesize originalMd5=_originalMd5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;

@end

