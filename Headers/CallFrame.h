//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CallFrame : NSObject
{
    NSString *_functionName;
    NSString *_scriptId;
    NSString *_url;
    NSNumber *_lineNumber;
    NSNumber *_columnNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *columnNumber; // @synthesize columnNumber=_columnNumber;
@property(retain, nonatomic) NSNumber *lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *scriptId; // @synthesize scriptId=_scriptId;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
- (id)dictKey;

@end

