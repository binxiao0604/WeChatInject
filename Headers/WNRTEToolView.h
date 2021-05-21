//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IWNAudioMgrExt-Protocol.h"
#import "WNRTEToolViewHelperDelegate-Protocol.h"

@class MMUIView, NSArray, NSString, WNRTEToolViewHelper;
@protocol WNRTEToolViewDelegate;

@interface WNRTEToolView : UIView <IWNAudioMgrExt, WNRTEToolViewHelperDelegate>
{
    MMUIView *_extBtnContainer;
    UIView *_tabLine;
    _Bool _allowVoiceClick;
    UIView *_textMoreLineIndicator;
    int _viewType;
    id <WNRTEToolViewDelegate> _delegate;
    NSArray *_baseBtns;
    NSArray *_extendBtns;
    WNRTEToolViewHelper *_toolViewHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WNRTEToolViewHelper *toolViewHelper; // @synthesize toolViewHelper=_toolViewHelper;
@property(retain, nonatomic) NSArray *extendBtns; // @synthesize extendBtns=_extendBtns;
@property(retain, nonatomic) NSArray *baseBtns; // @synthesize baseBtns=_baseBtns;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(nonatomic) __weak id <WNRTEToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getViewController;
- (void)insertAttributes:(id)arg1;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)allowVoiceBtnClick;
- (void)onCreateVoice:(id)arg1;
- (void)checkVoiceBtnStatus;
- (void)setBtnSelected:(long long)arg1 selected:(_Bool)arg2;
- (unsigned int)checkExceedMaxObjectCountAndAlert:(unsigned int)arg1;
- (void)onClickItem:(id)arg1;
- (id)getIconSelectedName:(int)arg1;
- (id)getIconName:(int)arg1;
- (id)getTitle:(int)arg1;
- (void)updateExtBtnStatus;
- (void)showTextExtView;
- (void)showBasicView;
- (void)initExtendView;
- (void)initBasicView;
- (void)initUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
