//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageWrapExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfLocation : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    double m_latitude;
    double m_longitude;
    double m_mapScale;
    NSString *m_locationLabel;
    NSString *m_poiName;
    NSString *m_mapType;
    NSString *m_infoUrl;
    NSString *m_poiId;
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_poiId; // @synthesize m_poiId;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(retain, nonatomic) NSString *m_infoUrl; // @synthesize m_infoUrl;
@property(retain, nonatomic) NSString *m_mapType; // @synthesize m_mapType;
@property(nonatomic) double m_mapScale; // @synthesize m_mapScale;
@property(nonatomic) double m_longitude; // @synthesize m_longitude;
@property(retain, nonatomic) NSString *m_poiName; // @synthesize m_poiName;
@property(retain, nonatomic) NSString *m_locationLabel; // @synthesize m_locationLabel;
@property(nonatomic) double m_latitude; // @synthesize m_latitude;
- (id)msgReferSummary;
- (_Bool)msgCanBeRefered;
- (id)messageFTSText;
- (void)UpdateContent:(id)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

