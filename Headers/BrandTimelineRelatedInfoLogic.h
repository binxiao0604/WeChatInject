//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@protocol BrandTimelineRelatedInfoLogicDelegate;

@interface BrandTimelineRelatedInfoLogic : MMObject
{
    id <BrandTimelineRelatedInfoLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BrandTimelineRelatedInfoLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getRelatedInfoWithReaderWrap:(id)arg1;
- (id)getPageIdentifierForReaderWrap:(id)arg1;
- (void)checkAndUpdateRelatedInfoWithMsgArr:(id)arg1;
- (void)checkAndUpdateVisibleMsgsRelatedInfo;

@end

