//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject;

@interface ObjectWrapper : NSObject
{
    id <NSObject> _obj;
    Class _cls;
    unsigned long long _inQueueTime;
}

+ (id)genIDKeyForObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long inQueueTime; // @synthesize inQueueTime=_inQueueTime;
@property(nonatomic) Class cls; // @synthesize cls=_cls;
@property(nonatomic) __weak id <NSObject> obj; // @synthesize obj=_obj;

@end

