//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JceStructContainer : NSObject
{
    void *_p;
    CDUnknownBlockType _allocator;
    CDUnknownBlockType _deallocator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType deallocator; // @synthesize deallocator=_deallocator;
@property(copy, nonatomic) CDUnknownBlockType allocator; // @synthesize allocator=_allocator;
@property(readonly, nonatomic) void *p; // @synthesize p=_p;
- (void)dealloc;
- (id)initWithAllocator:(CDUnknownBlockType)arg1 andDeallocator:(CDUnknownBlockType)arg2;

@end

