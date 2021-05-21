//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCCgiBlockHelper;
@protocol TextStateProfileLogicDelegate;

@interface TextStateProfileLogic : NSObject
{
    id <TextStateProfileLogicDelegate> _delegate;
    WCCgiBlockHelper *_cgiHelperForSelf;
    WCCgiBlockHelper *_cgiHelperForOther;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCgiBlockHelper *cgiHelperForOther; // @synthesize cgiHelperForOther=_cgiHelperForOther;
@property(retain, nonatomic) WCCgiBlockHelper *cgiHelperForSelf; // @synthesize cgiHelperForSelf=_cgiHelperForSelf;
@property(nonatomic) __weak id <TextStateProfileLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestTextStateInfoForSelf;

@end

