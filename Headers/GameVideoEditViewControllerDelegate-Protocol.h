//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GameVideoEditViewController, NSDictionary, NSError, NSString;

@protocol GameVideoEditViewControllerDelegate <NSObject>

@optional
- (void)gameVideoEditController:(GameVideoEditViewController *)arg1 didFailedWithError:(NSError *)arg2;
- (void)gameVideoEditController:(GameVideoEditViewController *)arg1 didFinishWithFilePath:(NSString *)arg2 withExtra:(NSDictionary *)arg3;
@end
