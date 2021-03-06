//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMAlbumChangeObserverExt-Protocol.h"
#import "MMAlbumDropableTitleViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMAlbumDropableTitleView, MMTableView, MMUIView, MMUIViewController, NSArray, NSString, UIImageView, UIView;
@protocol MMAlbumDropPickerControllerDelegate, MMImagePickerControlCenter;

@interface MMAlbumDropPickerController : NSObject <MMAlbumDropableTitleViewDelegate, UITableViewDelegate, UITableViewDataSource, MMAlbumChangeObserverExt>
{
    _Bool _directToFirstAlbum;
    _Bool _allAlbumsLoaded;
    _Bool _isShow;
    _Bool _isFirstAlbum;
    id <MMAlbumDropPickerControllerDelegate> _delegate;
    NSArray *_deviceAlbums;
    NSString *_currentAlbum;
    id <MMImagePickerControlCenter> _controlCenter;
    NSString *_waitingEntryAlbumId;
    MMUIViewController *_attachViewController;
    MMAlbumDropableTitleView *_titleView;
    MMUIView *_bgView;
    UIView *_tableContainerView;
    MMTableView *_tableView;
    MMUIView *_blurView;
    UIImageView *_shadowImageView;
    MMUIView *_dimmingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) MMUIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *tableContainerView; // @synthesize tableContainerView=_tableContainerView;
@property(retain, nonatomic) MMUIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) MMAlbumDropableTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak MMUIViewController *attachViewController; // @synthesize attachViewController=_attachViewController;
@property(retain, nonatomic) NSString *waitingEntryAlbumId; // @synthesize waitingEntryAlbumId=_waitingEntryAlbumId;
@property(nonatomic) _Bool isFirstAlbum; // @synthesize isFirstAlbum=_isFirstAlbum;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool allAlbumsLoaded; // @synthesize allAlbumsLoaded=_allAlbumsLoaded;
@property(nonatomic) _Bool directToFirstAlbum; // @synthesize directToFirstAlbum=_directToFirstAlbum;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(retain, nonatomic) NSString *currentAlbum; // @synthesize currentAlbum=_currentAlbum;
@property(copy, nonatomic) NSArray *deviceAlbums; // @synthesize deviceAlbums=_deviceAlbums;
@property(nonatomic) __weak id <MMAlbumDropPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)currentSelectedAlbum;
- (id)getAlbumName:(id)arg1 isFirstAlbum:(_Bool)arg2;
- (long long)getCacheOption;
- (void)safeCallOnMainThread:(CDUnknownBlockType)arg1;
- (void)stopLoading;
- (void)startLoadingBlocked:(_Bool)arg1;
- (void)backgroundUpdateAlbums:(id)arg1;
- (void)onAlbumAssetsChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickDropableTitleView:(id)arg1;
- (void)selectAlbum:(id)arg1;
- (void)loadAllAlbums:(_Bool)arg1;
- (void)toEntryAlbum:(CDUnknownBlockType)arg1;
- (void)readAlbums;
- (void)initAccessLimitTips;
- (void)initUI;
- (void)reloadTableView;
- (void)dismiss;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)startLoadAlbum;
- (void)setTitleHidden:(_Bool)arg1;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2 controlCenter:(id)arg3 toFirstAlbum:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

