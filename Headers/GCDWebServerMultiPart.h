//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GCDWebServerMultiPart : NSObject
{
    NSString *_controlName;
    NSString *_contentType;
    NSString *_mimeType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) NSString *controlName; // @synthesize controlName=_controlName;
- (id)initWithControlName:(id)arg1 contentType:(id)arg2;

@end

