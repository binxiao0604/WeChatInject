//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class UIView, UIViewController;

@interface MinimizeTaskContainerInfo : MMObject
{
    _Bool _recieveTouches;
    _Bool _isAlwaysShowInForground;
    UIView *_weakContentView;
    UIViewController *_relatedVC;
    struct CGSize _containerSizeInAbsorbView;
    struct CGSize _containerSizeInList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAlwaysShowInForground; // @synthesize isAlwaysShowInForground=_isAlwaysShowInForground;
@property(nonatomic) __weak UIViewController *relatedVC; // @synthesize relatedVC=_relatedVC;
@property(nonatomic) _Bool recieveTouches; // @synthesize recieveTouches=_recieveTouches;
@property(nonatomic) struct CGSize containerSizeInList; // @synthesize containerSizeInList=_containerSizeInList;
@property(nonatomic) struct CGSize containerSizeInAbsorbView; // @synthesize containerSizeInAbsorbView=_containerSizeInAbsorbView;
@property(nonatomic) __weak UIView *weakContentView; // @synthesize weakContentView=_weakContentView;

@end

