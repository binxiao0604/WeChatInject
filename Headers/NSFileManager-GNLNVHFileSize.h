//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (GNLNVHFileSize)
+ (_Bool)Q2D_setXAttrStringValue:(id)arg1 forKey:(id)arg2 atURL:(id)arg3;
+ (id)Q2D_xattrStringValueForKey:(id)arg1 atURL:(id)arg2;
- (unsigned long long)fileSizeOfItemAtPath:(id)arg1;
- (id)_attributesOfItemAtPath:(id)arg1 followingSymLinks:(_Bool)arg2 error:(id *)arg3;
@end

