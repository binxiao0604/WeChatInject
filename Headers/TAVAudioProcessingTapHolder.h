//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class TAVAudioProcessingChain;

@interface TAVAudioProcessingTapHolder : NSObject <NSCopying>
{
    struct opaqueMTAudioProcessingTap *_tap;
    TAVAudioProcessingChain *_audioProcessingChain;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVAudioProcessingChain *audioProcessingChain; // @synthesize audioProcessingChain=_audioProcessingChain;
@property(nonatomic) struct opaqueMTAudioProcessingTap *tap; // @synthesize tap=_tap;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;

@end
