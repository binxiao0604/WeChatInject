//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponentReportBasicInfo.h"

@class WCCanvasComponentReportUrlInfo;

@interface WCCanvasComponentReportPanoramaInfo : WCCanvasComponentReportBasicInfo
{
    unsigned int _swipeCount;
    WCCanvasComponentReportUrlInfo *_imgUrlInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponentReportUrlInfo *imgUrlInfo; // @synthesize imgUrlInfo=_imgUrlInfo;
@property(nonatomic) unsigned int swipeCount; // @synthesize swipeCount=_swipeCount;
- (id)dictionaryRepresentation;

@end

