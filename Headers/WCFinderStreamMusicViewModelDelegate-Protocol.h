//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderStreamMusicViewModel;

@protocol WCFinderStreamMusicViewModelDelegate <NSObject>
- (void)viewModelDataDidChanged:(WCFinderStreamMusicViewModel *)arg1;
- (void)viewModel:(WCFinderStreamMusicViewModel *)arg1 removeItemAtIdx:(long long)arg2;
- (void)viewModel:(WCFinderStreamMusicViewModel *)arg1 fetchDataWithError:(NSString *)arg2;
- (void)viewModel:(WCFinderStreamMusicViewModel *)arg1 appendDataFrom:(long long)arg2 toIdx:(long long)arg3;
@end

