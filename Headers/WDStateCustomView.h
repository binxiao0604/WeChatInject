//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TextState3rdPartyCustomView-Protocol.h"

@class NSString, WCFinderLiveIconImageView;
@protocol TextState3rdPartyCustomViewDelegate;

@interface WDStateCustomView : UIView <TextState3rdPartyCustomView>
{
    id <TextState3rdPartyCustomViewDelegate> textStateDelegate;
    WCFinderLiveIconImageView *_statusView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveIconImageView *statusView; // @synthesize statusView=_statusView;
- (void)setTextStateDelegate:(id)arg1;
- (id)textStateDelegate;
- (void)reloadStatusViewIfNeededWithStyle:(unsigned long long)arg1;
- (void)refreshStatusView;
- (void)refreshSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

