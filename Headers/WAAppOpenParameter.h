//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MiniTaskTransitionContext, NSArray, NSDictionary, NSString, UINavigationController, WAAppOpenSheetModeParameter, WAContact;

@interface WAAppOpenParameter : MMObject
{
    _Bool _m_bUpdateAndForceReloadTask;
    _Bool _m_isOpenFromFloatingView;
    _Bool _m_bIsSilentOpen;
    unsigned int _m_uiVersion;
    NSString *_m_nsUserName;
    NSString *_m_nsAppId;
    WAContact *_m_contact;
    NSString *_m_nsPagePath;
    unsigned long long _m_uiDebugMode;
    UINavigationController *_m_navigationController;
    unsigned long long _m_uiScene;
    NSString *_m_nsSceneNote;
    unsigned long long _m_uiPreScene;
    NSString *_m_nsPreSceneNote;
    NSArray *_m_arrStackPages;
    unsigned long long _m_uiTaskReloadReason;
    NSString *_m_nsInstanceIdBeforeReload;
    NSString *_m_lastAppId;
    NSDictionary *_m_nsExtraParamInfo;
    NSString *_m_nsDebugLaunchInfo;
    NSString *_m_nsChatroomUsername;
    unsigned long long _m_launchMode;
    WAAppOpenSheetModeParameter *_m_sheetModeParameter;
    NSString *_m_nsMPShortLink;
    MiniTaskTransitionContext *_m_miniTaskVCAnimationContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniTaskTransitionContext *m_miniTaskVCAnimationContext; // @synthesize m_miniTaskVCAnimationContext=_m_miniTaskVCAnimationContext;
@property(copy, nonatomic) NSString *m_nsMPShortLink; // @synthesize m_nsMPShortLink=_m_nsMPShortLink;
@property(retain, nonatomic) WAAppOpenSheetModeParameter *m_sheetModeParameter; // @synthesize m_sheetModeParameter=_m_sheetModeParameter;
@property(nonatomic) _Bool m_bIsSilentOpen; // @synthesize m_bIsSilentOpen=_m_bIsSilentOpen;
@property(nonatomic) unsigned long long m_launchMode; // @synthesize m_launchMode=_m_launchMode;
@property(copy, nonatomic) NSString *m_nsChatroomUsername; // @synthesize m_nsChatroomUsername=_m_nsChatroomUsername;
@property(copy, nonatomic) NSString *m_nsDebugLaunchInfo; // @synthesize m_nsDebugLaunchInfo=_m_nsDebugLaunchInfo;
@property(retain, nonatomic) NSDictionary *m_nsExtraParamInfo; // @synthesize m_nsExtraParamInfo=_m_nsExtraParamInfo;
@property(nonatomic) _Bool m_isOpenFromFloatingView; // @synthesize m_isOpenFromFloatingView=_m_isOpenFromFloatingView;
@property(retain, nonatomic) NSString *m_lastAppId; // @synthesize m_lastAppId=_m_lastAppId;
@property(copy, nonatomic) NSString *m_nsInstanceIdBeforeReload; // @synthesize m_nsInstanceIdBeforeReload=_m_nsInstanceIdBeforeReload;
@property(nonatomic) unsigned long long m_uiTaskReloadReason; // @synthesize m_uiTaskReloadReason=_m_uiTaskReloadReason;
@property(nonatomic) _Bool m_bUpdateAndForceReloadTask; // @synthesize m_bUpdateAndForceReloadTask=_m_bUpdateAndForceReloadTask;
@property(retain, nonatomic) NSArray *m_arrStackPages; // @synthesize m_arrStackPages=_m_arrStackPages;
@property(copy, nonatomic) NSString *m_nsPreSceneNote; // @synthesize m_nsPreSceneNote=_m_nsPreSceneNote;
@property(nonatomic) unsigned long long m_uiPreScene; // @synthesize m_uiPreScene=_m_uiPreScene;
@property(copy, nonatomic) NSString *m_nsSceneNote; // @synthesize m_nsSceneNote=_m_nsSceneNote;
@property(nonatomic) unsigned long long m_uiScene; // @synthesize m_uiScene=_m_uiScene;
@property(nonatomic) __weak UINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
@property(nonatomic) unsigned long long m_uiDebugMode; // @synthesize m_uiDebugMode=_m_uiDebugMode;
@property(nonatomic) unsigned int m_uiVersion; // @synthesize m_uiVersion=_m_uiVersion;
@property(copy, nonatomic) NSString *m_nsPagePath; // @synthesize m_nsPagePath=_m_nsPagePath;
@property(retain, nonatomic) WAContact *m_contact; // @synthesize m_contact=_m_contact;
@property(copy, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId=_m_nsAppId;
@property(copy, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName=_m_nsUserName;
- (_Bool)hasUsrName;
- (id)initWithWeAppUsername:(id)arg1;

@end

