//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface RightTopMenuItem : MMObject <NSCoding>
{
    NSString *m_nsID;
    _Bool m_bShowNew;
    _Bool m_bHasShowNew;
    unsigned int m_uiNewVersion;
    unsigned int m_uiOrder;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiOrder; // @synthesize m_uiOrder;
@property(nonatomic) unsigned int m_uiNewVersion; // @synthesize m_uiNewVersion;
@property(nonatomic) _Bool m_bHasShowNew; // @synthesize m_bHasShowNew;
@property(nonatomic) _Bool m_bShowNew; // @synthesize m_bShowNew;
@property(retain, nonatomic) NSString *m_nsID; // @synthesize m_nsID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

