//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderProfileTask : NSObject
{
    _Bool _objectIsSender;
    NSObject *_object;
    SEL _selector;
}

+ (id)taskWithSender:(id)arg1 selector:(SEL)arg2;
+ (id)taskWithObject:(id)arg1 selector:(SEL)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool objectIsSender; // @synthesize objectIsSender=_objectIsSender;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)invokeWithSender:(id)arg1;

@end

