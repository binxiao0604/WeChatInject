//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IRegisterableCallbackHolder : NSObject
{
    CDUnknownBlockType callback;
    _Bool isContinuous;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isContinuous; // @synthesize isContinuous;
@property(copy) CDUnknownBlockType callback; // @synthesize callback;
- (id)initWithCallback:(CDUnknownBlockType)arg1 isContinuous:(_Bool)arg2;

@end

