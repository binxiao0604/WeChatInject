//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCPayPayResultShowInfoValueAttr;

@interface WCPayPayResultShowInfo : NSObject
{
    NSString *_name;
    NSString *_value;
    WCPayPayResultShowInfoValueAttr *_value_attr;
    NSString *_name_color;
    NSString *_value_color;
}

+ (id)genFromProto:(id)arg1;
+ (id)genFromXml:(struct XmlReaderNode_t *)arg1;
+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *value_color; // @synthesize value_color=_value_color;
@property(retain, nonatomic) NSString *name_color; // @synthesize name_color=_name_color;
@property(retain, nonatomic) WCPayPayResultShowInfoValueAttr *value_attr; // @synthesize value_attr=_value_attr;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)readChildText:(const char *)arg1 inNode:(struct XmlReaderNode_t *)arg2;
- (id)initWithDic:(id)arg1;

@end

