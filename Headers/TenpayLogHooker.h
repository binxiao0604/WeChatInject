//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TenpayLogHooker : NSObject
{
    CDUnknownBlockType logHooker;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType logHooker; // @synthesize logHooker;
- (void)writeLog:(id)arg1;
- (CDUnknownBlockType)getHooker;
- (void)setHooker:(CDUnknownBlockType)arg1;

@end
