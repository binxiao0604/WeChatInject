//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableAttributedString;

@interface WCFinderHighlightedInfoModel : NSObject
{
    NSMutableAttributedString *_attriStr;
    NSMutableArray *_topicRangeArray;
    NSMutableArray *_mentionArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mentionArray; // @synthesize mentionArray=_mentionArray;
@property(retain, nonatomic) NSMutableArray *topicRangeArray; // @synthesize topicRangeArray=_topicRangeArray;
@property(retain, nonatomic) NSMutableAttributedString *attriStr; // @synthesize attriStr=_attriStr;
- (id)init;

@end

