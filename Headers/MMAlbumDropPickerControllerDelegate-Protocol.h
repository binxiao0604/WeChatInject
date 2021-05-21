//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMAlbum, MMAlbumDropPickerController, NSArray;

@protocol MMAlbumDropPickerControllerDelegate <NSObject>
- (void)onReloadCurrentWithNewAlbum:(MMAlbum *)arg1 newAssetIds:(NSArray *)arg2 changeCount:(long long)arg3 latestIndex:(long long)arg4;
- (void)readAlbumsErrorWithAlbumDropPicker:(MMAlbumDropPickerController *)arg1;
- (void)authorizeErrorWithAlbumDropPicker:(MMAlbumDropPickerController *)arg1;
- (void)albumDropPicker:(MMAlbumDropPickerController *)arg1 didSelectAtAlbum:(MMAlbum *)arg2 isDefault:(_Bool)arg3;
@end
