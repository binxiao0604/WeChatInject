//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMUIViewController, WAAppCanvasWrapperView;
@protocol WAWidgetJSEventHandlerDelegate;

@interface WAWidgetJSEventHandler_BaseEvent : NSObject
{
    unsigned int _eventId;
    MMUIViewController *_viewController;
    WAAppCanvasWrapperView *_wrapperView;
    id <WAWidgetJSEventHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;
@property(nonatomic) __weak id <WAWidgetJSEventHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WAAppCanvasWrapperView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (void)handleJSEvent:(id)arg1;
- (void)endWithResult:(id)arg1;

@end

