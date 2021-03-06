//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

#import "WCTColumnCoding-Protocol.h"
#import "WCTValueProtocol-Protocol.h"

@interface NSString (KindaSeprate) <WCTValueProtocol, WCTColumnCoding>
+ (id)wwkapi_nilobj;
+ (id)MMMusicStatistics_appendSessionID;
+ (id)genFinderEventExpiredTimeStringByUInt:(unsigned int)arg1;
+ (id)calDisplayNameWithCommentDidsplayName:(id)arg1 maxCommentCount:(unsigned long long)arg2;
+ (id)finderLocationDisplayStrWithCountryCode:(id)arg1 provinceCode:(id)arg2 cityCode:(id)arg3;
+ (id)finderHeatOfTopicInteractCount:(unsigned long long)arg1;
+ (id)likeStringWithFriendLikeCount:(long long)arg1 totalCount:(long long)arg2;
+ (id)commentFailTipsWithCommentErrorCode:(int)arg1;
+ (id)genFinderLiveNoticeTimeStringByUInt:(unsigned int)arg1;
+ (id)genFinderWechatMentionTimeStringByUInt:(unsigned int)arg1;
+ (id)genFinderDetailTimeStringByUInt:(unsigned long long)arg1;
+ (id)genFinderTimeStringByUIntWithinADay:(unsigned int)arg1;
+ (id)finderOtherInteractCount:(unsigned long long)arg1;
+ (id)finderSelfProfileInteractCount:(unsigned long long)arg1;
+ (id)legalFormatWithOriginalValue:(unsigned long long)arg1 divider:(unsigned long long)arg2;
+ (id)getTextFrom:(struct XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
+ (id)intToConvertBinaryString:(int)arg1;
+ (id)stringFromUInt32:(unsigned int)arg1;
+ (id)stringFromUInt64:(unsigned long long)arg1;
+ (id)fromHex:(id)arg1;
+ (id)fromBase64:(id)arg1;
+ (_Bool)isEmptyString:(id)arg1;
+ (id)repeat:(id)arg1 times:(int)arg2;
+ (id)receiverName:(unsigned long long)arg1;
+ (id)uuidString;
+ (id)stringWithView:(const struct UnsafeStringView *)arg1;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (id)changeEmoji2Text:(id)arg1;
+ (_Bool)isContainEmoji:(id)arg1;
+ (_Bool)isEmoji:(id)arg1;
+ (id)stringWithCharacter:(unsigned short)arg1;
+ (double)baselineWithFont:(id)arg1 height:(double)arg2;
+ (id)qb_stringWithName:(id)arg1 inAttributes:(id)arg2;
+ (id)safeStringWithString:(id)arg1;
+ (long long)captureCountForRegex:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (long long)captureCountForRegex:(id)arg1;
+ (void)clearStringCache;
+ (id)getShowStringBySize:(unsigned long long)arg1;
+ (id)generatePrivacyString:(id)arg1;
+ (id)safeStringWithUTF8String:(const char *)arg1;
+ (id)stringWithUInt64:(unsigned long long)arg1;
- (id)componentsSeparatedByLimitCount:(long long)arg1;
- (id)getUrlDomain;
- (id)getPkgId;
- (void)searchWithKeyWord:(id)arg1 UsingBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)MMMusicStatistics_appendMVUserId;
- (CDUnknownBlockType)MMMusicStatistics_appendCover;
- (CDUnknownBlockType)MMMusicStatistics_appendSect;
- (CDUnknownBlockType)MMMusicStatistics_appendSinger;
- (CDUnknownBlockType)MMMusicStatistics_appendHasLyric;
- (CDUnknownBlockType)MMMusicStatistics_appendMVNonceID;
- (CDUnknownBlockType)MMMusicStatistics_appendMVObjectID;
- (CDUnknownBlockType)MMMusicStatistics_appendMusicLength;
- (CDUnknownBlockType)MMMusicStatistics_appendScene;
- (CDUnknownBlockType)MMMusicStatistics_appendAppID;
- (CDUnknownBlockType)MMMusicStatistics_appendMusicUrl;
- (CDUnknownBlockType)MMMusicStatistics_appendSongName;
- (CDUnknownBlockType)MMMusicStatistics_appendDataURL;
- (CDUnknownBlockType)MMMusicStatistics_appendWebURL;
- (CDUnknownBlockType)MMMusicStatistics_appendSongID;
- (CDUnknownBlockType)MMMusicStatistics_appendString;
- (id)rewriteURLWithProtocol:(id)arg1;
- (id)cardMD5;
- (id)attributedStringWithStyle:(id)arg1;
- (id)attributedStringWithStyle:(id)arg1 range:(struct _NSRange)arg2;
- (id)trimRevertChar;
- (id)simplifyCN;
- (long long)compareByContactKeyGeneric:(id)arg1;
- (_Bool)isContentDifferentTo:(id)arg1;
- (_Bool)isNilOrEmpty;
- (long long)compareByContactKey:(id)arg1;
- (int)getSpecialKeyValue;
- (struct _NSRange)paragraphRangeAtIndex:(unsigned long long)arg1;
- (_Bool)isEndOfParagraphAtIndex:(unsigned long long)arg1;
- (unsigned long long)numOfParagraph;
- (id)filterNewLineCharacter;
- (id)prefixWithLength:(unsigned long long)arg1;
- (unsigned long long)getCharacterWithEmoji;
- (unsigned long long)getIndexWithMaxCharCount:(unsigned long long)arg1;
- (unsigned long long)charLength;
- (id)URLEncodedString;
- (id)sqliteString;
- (id)getContentAndRangeFromAttributeString;
- (id)dropAeraCode;
- (id)formatChinaPhoneString:(id)arg1;
- (_Bool)isEmailAddress;
- (_Bool)isMobilePhone;
- (_Bool)isCurrectPhoneNum;
- (_Bool)isNumericStr;
- (id)XXXString;
- (id)dropHead:(id)arg1;
- (_Bool)checkIsLegalMobile:(unsigned short *)arg1 bufLen:(int)arg2;
- (id)getTelPhoneNumberAreaString:(_Bool *)arg1;
- (id)GetTelPhoneNumberAreaString;
- (id)getTelPhoneNumbersWithComma;
- (id)GetTelPhoneNumber;
- (id)MD5Data;
- (id)MD5String;
- (unsigned int)uInt32Value;
- (unsigned long long)uInt64Value;
- (id)safeStringByReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)toHex;
- (id)toBase64;
- (id)md5;
- (id)urlDecode;
- (id)urlEncode;
- (id)rpad:(int)arg1 string:(id)arg2;
- (id)lpad:(int)arg1 string:(id)arg2;
- (_Bool)matches:(id)arg1;
- (_Bool)contains:(id)arg1;
- (_Bool)startsWith:(id)arg1;
- (_Bool)endsWith:(id)arg1;
- (id)withoutDiacritic;
- (id)lcFirst;
- (id)ucFirst;
- (id)snakeCase;
- (id)pascalCase;
- (id)camelCase;
- (id)trimRight;
- (id)trimLeft;
- (id)split:(int)arg1;
- (id)split;
- (id)replaceRegexp:(id)arg1 with:(id)arg2;
- (id)replace:(id)arg1 with:(id)arg2;
- (id)trimWithNewLine;
- (id)trim;
- (id)substr:(int)arg1 length:(int)arg2;
- (id)substr:(int)arg1;
- (id)prepend:(id)arg1;
- (id)append:(id)arg1;
- (id)toNumber;
- (id)initials;
- (id)explode:(id)arg1;
- (id)startTagWithAttributes:(id)arg1 withLowerMode:(_Bool)arg2;
- (id)endTagWithLowerMode:(_Bool)arg1;
- (id)startTagWithLowerMode:(_Bool)arg1;
- (id)replaceIdWithNameWithNameLengthLimit:(unsigned long long)arg1;
- (id)replaceIdWithName;
- (id)limitStringWithLength:(unsigned long long)arg1;
- (id)mimeTypeForPathExtension;
- (id)wcdb_stringByStandardizingPath;
- (id)numberValue;
- (id)stringValue;
- (id)dataValue;
- (id)archivedWCTValue;
- (id)stringByReplacingSpecialCharactor;
- (id)stringByReplacingMatchesFromRegularExpression:(id)arg1 replacementBlock:(CDUnknownBlockType)arg2;
- (id)MD5;
- (id)wa_formatChinaPhoneString:(id)arg1;
- (_Bool)containsRegex:(id)arg1;
- (_Bool)containsAppStoreLinkString;
- (id)stringByTruncatingAtString:(id)arg1 toWidth:(double)arg2 withFont:(id)arg3;
- (id)stringByOmitPrefixAndSuffix:(id)arg1;
- (id)stringByOmitSuffix:(id)arg1;
- (id)stringByReplacingJavaScriptUnsupportString:(_Bool)arg1;
- (id)stringByReplacingJavaScriptUnsupportString;
- (id)stringByOmitPrefix:(id)arg1;
- (unsigned long long)characterLengthOfComposedCharacter;
- (id)stringWithMaxLength:(unsigned long long)arg1;
- (unsigned long long)emojiCharCount;
- (id)emojiUnifiedString;
- (id)stringByUrlEncoded;
- (id)getNumberString;
- (id)removeSpaceAndNewline;
- (id)urlQueryParamDict;
- (_Bool)isNumber;
- (id)lastCharacter;
- (id)firstCharacter;
- (id)characterStringAtIndex:(unsigned long long)arg1;
- (id)stringByTrimmingWhitespace;
- (id)stringByReplacingHTMLEntities;
- (id)stringByAddingHTMLEntities;
- (_Bool)hasSuffixCharacterFromSet:(id)arg1;
- (_Bool)hasPrefixCharacterFromSet:(id)arg1;
- (float)percentValue;
- (_Bool)isNumeric;
- (unsigned long long)integerValueFromHex;
- (double)fontSizeFittingWidth:(double)arg1 maxLineNumber:(long long)arg2 maxHeight:(double)arg3 lineBreakMode:(long long)arg4 defaultFontSize:(double)arg5 minFontSize:(double)arg6;
- (double)fontSizeFittingWidth:(double)arg1 maxHeight:(double)arg2 lineBreakMode:(long long)arg3 defaultFontSize:(double)arg4 minFontSize:(double)arg5;
- (double)fontSizeFittingWidth:(double)arg1 maxLineNumber:(long long)arg2 lineBreakMode:(long long)arg3 defaultFontSize:(double)arg4 minFontSize:(double)arg5;
- (id)actualFont:(id)arg1 forWidth:(double)arg2;
- (id)prefixWithFont:(id)arg1 inWidth:(double)arg2;
- (struct CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(double)arg4;
- (struct CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)stringSizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)stringSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)stringSizeWithFont:(id)arg1;
- (id)JSONDictionary;
- (id)JSONValue;
- (void)qb_setInAttributes:(id)arg1 withName:(id)arg2;
- (_Bool)isEqualToString:(id)arg1 caseInsensitive:(_Bool)arg2;
- (_Bool)qbContainsString:(id)arg1 caseInsensitive:(_Bool)arg2;
- (id)gtm_stringByEncodeByJsonAndUrlEncode;
- (id)gtm_stringByUnescapingFromURLArgument;
- (id)gtm_stringByEscapingForURLArgumentOnly;
- (id)gtm_stringByEscapingForURLArgument;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumerateStringsSeparatedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (_Bool)enumerateStringsSeparatedByRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumerateStringsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (_Bool)enumerateStringsMatchedByRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeys:(id *)arg5 forCaptures:(int *)arg6 count:(unsigned long long)arg7;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withFirstKey:(id)arg5 arguments:(char *)arg6;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeysAndCaptures:(id)arg5;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 range:(struct _NSRange)arg2 withKeysAndCaptures:(id)arg3;
- (id)arrayOfDictionariesByMatchingRegex:(id)arg1 withKeysAndCaptures:(id)arg2;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeys:(id *)arg5 forCaptures:(int *)arg6 count:(unsigned long long)arg7;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withFirstKey:(id)arg5 arguments:(char *)arg6;
- (id)dictionaryByMatchingRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4 withKeysAndCaptures:(id)arg5;
- (id)dictionaryByMatchingRegex:(id)arg1 range:(struct _NSRange)arg2 withKeysAndCaptures:(id)arg3;
- (id)dictionaryByMatchingRegex:(id)arg1 withKeysAndCaptures:(id)arg2;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)arrayOfCaptureComponentsMatchedByRegex:(id)arg1;
- (id)captureComponentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)captureComponentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)captureComponentsMatchedByRegex:(id)arg1;
- (id)componentsMatchedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (id)componentsMatchedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)componentsMatchedByRegex:(id)arg1 capture:(long long)arg2;
- (id)componentsMatchedByRegex:(id)arg1;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2 range:(struct _NSRange)arg3;
- (id)stringByReplacingOccurrencesOfRegex:(id)arg1 withString:(id)arg2;
- (id)stringByMatching:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (id)stringByMatching:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)stringByMatching:(id)arg1 capture:(long long)arg2;
- (id)stringByMatching:(id)arg1;
- (struct _NSRange)rangeOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 capture:(long long)arg4 error:(id *)arg5;
- (struct _NSRange)rangeOfRegex:(id)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)rangeOfRegex:(id)arg1 capture:(long long)arg2;
- (struct _NSRange)rangeOfRegex:(id)arg1;
- (void)flushCachedRegexData;
- (_Bool)isRegexValidWithOptions:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)isRegexValid;
- (_Bool)isMatchedByRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4;
- (_Bool)isMatchedByRegex:(id)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)isMatchedByRegex:(id)arg1;
- (id)componentsSeparatedByRegex:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 error:(id *)arg4;
- (id)componentsSeparatedByRegex:(id)arg1 range:(struct _NSRange)arg2;
- (id)componentsSeparatedByRegex:(id)arg1;
- (long long)captureCountWithOptions:(unsigned int)arg1 error:(id *)arg2;
- (long long)captureCount;
- (id)stringByTrimingContinueCharactersInSet:(id)arg1;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)isValidWCMallPhoneNumber;
- (id)safeSubstringWithRange:(struct _NSRange)arg1;
- (id)safeSubstringToIndex:(long long)arg1;
- (id)safeSubstringFromIndex:(long long)arg1;
- (_Bool)containsSubstring:(id)arg1 option:(unsigned long long)arg2;
- (_Bool)containsSubstring:(id)arg1;
- (long long)compareWithUInt64:(id)arg1;
- (id)stringByEscapingAllLineBreak;
- (id)stringByTrimmingRight;
- (id)stringByTrimmingLeft;
- (id)stringByTrimming;
- (id)stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (unsigned long long)uint64Value;
- (unsigned long long)unsignLongLongValue;
- (id)JSONDictionary;
- (id)JSONArray;
- (id)JSONValue;
- (id)gtm_stringByUnescapingFromHTML;
- (id)gtm_stringByEscapingForXML;
- (id)gtm_stringByEscapingForHTML;
- (id)gtm_stringByEscapingHTMLUsingTable:(CDStruct_6a59ab51 *)arg1 ofSize:(unsigned long long)arg2 escapingUnicode:(_Bool)arg3;
- (SEL)ext_toSelector;
@end

