//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCDWebServerMultiPart.h"

@class NSString;

@interface GCDWebServerMultiPartFile : GCDWebServerMultiPart
{
    NSString *_fileName;
    NSString *_temporaryPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *temporaryPath; // @synthesize temporaryPath=_temporaryPath;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (id)description;
- (void)dealloc;
- (id)initWithControlName:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 temporaryPath:(id)arg4;

@end

