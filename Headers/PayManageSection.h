//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TextViewData;

@interface PayManageSection : NSObject
{
    NSArray *_extra_labels;
    TextViewData *_header;
    TextViewData *_footer;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain) TextViewData *footer; // @synthesize footer=_footer;
@property(retain) TextViewData *header; // @synthesize header=_header;
@property(retain) NSArray *extra_labels; // @synthesize extra_labels=_extra_labels;

@end

