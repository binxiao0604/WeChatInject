//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class CContact;

@protocol OpenIMContactSelectViewDelegate <MMUIViewControllerDelegate>
- (void)onSelectOpenIMContact:(CContact *)arg1;

@optional
- (_Bool)onShouldSelectOpenIMContact:(CContact *)arg1;
- (_Bool)onFilterOpenIMContactCandidate:(CContact *)arg1;
@end

