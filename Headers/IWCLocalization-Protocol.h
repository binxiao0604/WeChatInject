//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSBundle, NSString;

@protocol IWCLocalization <NSObject>
+ (void)updateLanguage:(NSString *)arg1 forRefresh:(_Bool)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(_Bool)arg4;
+ (NSString *)localizedStringForKey:(NSString *)arg1;

@optional
+ (NSBundle *)getWeAppSDKBundle;
@end

