//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableString.h>

@interface NSMutableString (RTE)
- (struct _NSRange)paragraphRangeAtIndex:(unsigned long long)arg1;
- (_Bool)isEndOfParagraphAtIndex:(unsigned long long)arg1;
- (_Bool)isHasAppend;
- (void)setIsHasAppend:(_Bool)arg1;
- (void)appendHTMLReportInteger:(long long)arg1;
- (void)appendHTMLReportString:(id)arg1;
- (void)safeAppendString:(id)arg1;
- (long long)replaceOccurrencesOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (long long)replaceOccurrencesOfRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;
- (long long)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2 range:(struct _NSRange)arg3;
- (long long)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2;
@end

