//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class EditImageAttr, MMImageExifLogInfo;

@interface ImageInfo : NSObject <NSCopying>
{
    unsigned int m_uiImageSource;
    MMImageExifLogInfo *_exifLogInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImageExifLogInfo *exifLogInfo; // @synthesize exifLogInfo=_exifLogInfo;
@property(nonatomic) unsigned int m_uiImageSource; // @synthesize m_uiImageSource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(retain, nonatomic) EditImageAttr *editImageAttr;
@property(nonatomic) _Bool isEdited;

@end
