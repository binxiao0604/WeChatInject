//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonBoardCrossCollectionBasePageDelegate-Protocol.h"

@class CEmoticonWrap, EmoticonBoardCrossCollectionEmoticonHeaderModel, NSString, PersonalDesigner;

@protocol EmoticonBoardCrossCollectionEmoticonPageDelegate <EmoticonBoardCrossCollectionBasePageDelegate>
- (void)pushToDesignerProfile:(PersonalDesigner *)arg1 redotReporter:(EmoticonBoardCrossCollectionEmoticonHeaderModel *)arg2;
- (void)shouldHideEmoticonPreview;
- (void)shouldShowEmoticonPreviewForWrap:(CEmoticonWrap *)arg1 description:(NSString *)arg2 pageWrapPid:(NSString *)arg3 cellIndex:(unsigned long long)arg4 frame:(struct CGRect)arg5;
- (void)onEmoticonPageCellTapEmoticonWrap:(CEmoticonWrap *)arg1 atIndex:(long long)arg2 pid:(NSString *)arg3 maxCountPerLine:(unsigned long long)arg4;
@end
