//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MainWindow.h"

@interface iConsoleWindow : MainWindow
{
    _Bool _haveFirstTouch;
}

+ (id)createWindow;
+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (void)initialize;
@property(nonatomic) _Bool haveFirstTouch; // @synthesize haveFirstTouch=_haveFirstTouch;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)becomeKeyWindow;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;

@end
