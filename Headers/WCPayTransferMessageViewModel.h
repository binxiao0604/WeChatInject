//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseMessageViewModel.h"

@class NSString;

@interface WCPayTransferMessageViewModel : WCPayBaseMessageViewModel
{
    NSString *_bgImageName;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
- (id)additionalAccessibilityDescription;
- (id)iconName;
- (unsigned long long)bubbleType;
- (double)iconSize;
- (id)titleText;
- (id)descText;
- (id)descTailText;
- (id)sourceTitle;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

