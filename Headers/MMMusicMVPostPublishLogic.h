//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderCreateCoordinatorDelegate-Protocol.h"

@class NSString, UIImage, UIViewController, WCFinderCreateCoordinator;
@protocol MMMusicMVPostPublishLogicDelegate;

@interface MMMusicMVPostPublishLogic : NSObject <WCFinderCreateCoordinatorDelegate>
{
    _Bool _isDraftEditingMode;
    _Bool _saveAsDraft;
    id <MMMusicMVPostPublishLogicDelegate> _delegate;
    UIViewController *_currentVC;
    UIImage *_customCoverImage;
    WCFinderCreateCoordinator *_userCreator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCreateCoordinator *userCreator; // @synthesize userCreator=_userCreator;
@property(retain, nonatomic) UIImage *customCoverImage; // @synthesize customCoverImage=_customCoverImage;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(nonatomic) _Bool saveAsDraft; // @synthesize saveAsDraft=_saveAsDraft;
@property(nonatomic) _Bool isDraftEditingMode; // @synthesize isDraftEditingMode=_isDraftEditingMode;
@property(nonatomic) __weak id <MMMusicMVPostPublishLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportFinderPostWithPostState:(unsigned long long)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)realCommitCreation:(_Bool)arg1;
- (void)commitCreationAsDraft:(_Bool)arg1;
- (void)commitCreationInViewController:(id)arg1 customCover:(id)arg2;
- (void)cancelPublishingInViewController:(id)arg1;
- (id)initWithBaseMVModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

