//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface DBContactLocal : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int chatState;
    unsigned int needUpdate;
    unsigned int metaFlag;
    unsigned int lastUpdateTime;
    unsigned int lastModifyTime;
    NSString *mobileIdentify;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_lastModifyTime;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_metaFlag;
+ (void)PBArrayAdd_mobileIdentify;
+ (void)PBArrayAdd_needUpdate;
+ (void)PBArrayAdd_chatState;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime;
@property(nonatomic) unsigned int metaFlag; // @synthesize metaFlag;
@property(retain, nonatomic) NSString *mobileIdentify; // @synthesize mobileIdentify;
@property(nonatomic) unsigned int needUpdate; // @synthesize needUpdate;
@property(nonatomic) unsigned int chatState; // @synthesize chatState;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

