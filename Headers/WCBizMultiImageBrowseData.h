//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIImage;

@interface WCBizMultiImageBrowseData : NSObject
{
    NSArray *m_arrBrowseImgItem;
    unsigned int m_uiStartIndex;
    UIImage *m_oWaitBackGroundImg;
    _Bool m_bCached;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *m_oWaitBackGroundImg; // @synthesize m_oWaitBackGroundImg;
@property(nonatomic) unsigned int m_uiStartIndex; // @synthesize m_uiStartIndex;
@property(nonatomic) _Bool m_bCached; // @synthesize m_bCached;
@property(retain, nonatomic) NSArray *m_arrBrowseImgItem; // @synthesize m_arrBrowseImgItem;
- (void)dealloc;

@end

