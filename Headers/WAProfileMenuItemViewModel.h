//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAProfileMenuItemViewModel : NSObject
{
    _Bool _showArrow;
    _Bool _canSelect;
    NSString *_title;
    NSString *_subTitle;
}

+ (id)createWithTitle:(id)arg1 subTitle:(id)arg2 showArrow:(_Bool)arg3;
+ (id)createWithTitle:(id)arg1 subTitle:(id)arg2;
+ (id)createWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool canSelect; // @synthesize canSelect=_canSelect;
@property(nonatomic) _Bool showArrow; // @synthesize showArrow=_showArrow;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;

@end

