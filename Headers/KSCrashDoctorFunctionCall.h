//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSCrashDoctorFunctionCall : NSObject
{
    NSString *_name;
    NSArray *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionWithParamCount:(int)arg1;
- (id)descriptionForObjCCall;

@end

