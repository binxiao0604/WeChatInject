//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol WCAudioSessionDelegate <NSObject>
- (_Bool)BlockActivateSpeaker;
- (_Bool)BlockDeactivateSpeaker;
- (_Bool)BlockChangeCategoryToSoloAmbientWithBlockType:(unsigned long long)arg1;
- (_Bool)BlockChangeCategoryToAmbientWithBlockType:(unsigned long long)arg1;
- (_Bool)BlockChangeCategoryToNotPlayAndRecordWithBlockType:(unsigned long long)arg1;
- (_Bool)BlockDeactivateSession;
@end

