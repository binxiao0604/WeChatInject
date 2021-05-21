//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@protocol MoveWithTouchAlgorithmDelegate;

@interface MoveWithTouchAlgorithm : MMObject
{
    _Bool m_hasMoved;
    _Bool m_hasStart;
    _Bool _canMoveOutside;
    _Bool _hasMoveLong;
    id <MoveWithTouchAlgorithmDelegate> m_delegate;
    double _edgeOffsetX;
    double _edgeOffsetTop;
    double _edgeOffsetBottom;
    double _longMoveMinDelta;
    long long _m_startOrientation;
    struct CGPoint m_startPoint;
    struct CGPoint m_maxMoveDistance;
    struct CGPoint m_startPosition;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasMoveLong; // @synthesize hasMoveLong=_hasMoveLong;
@property(nonatomic) long long m_startOrientation; // @synthesize m_startOrientation=_m_startOrientation;
@property(nonatomic) _Bool canMoveOutside; // @synthesize canMoveOutside=_canMoveOutside;
@property(nonatomic) double longMoveMinDelta; // @synthesize longMoveMinDelta=_longMoveMinDelta;
@property(nonatomic) double edgeOffsetBottom; // @synthesize edgeOffsetBottom=_edgeOffsetBottom;
@property(nonatomic) double edgeOffsetTop; // @synthesize edgeOffsetTop=_edgeOffsetTop;
@property(nonatomic) double edgeOffsetX; // @synthesize edgeOffsetX=_edgeOffsetX;
@property(nonatomic) struct CGPoint m_startPosition; // @synthesize m_startPosition;
@property(nonatomic) struct CGPoint m_maxMoveDistance; // @synthesize m_maxMoveDistance;
@property(nonatomic) _Bool m_hasStart; // @synthesize m_hasStart;
@property(nonatomic) _Bool m_hasMoved; // @synthesize m_hasMoved;
@property(nonatomic) __weak id <MoveWithTouchAlgorithmDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) struct CGPoint m_startPoint; // @synthesize m_startPoint;
- (void)adsorbToWindow;
- (void)calculateMaxDistance;
- (void)stopCalculate;
- (void)startCalculate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setMoveWithTouchAlgorithmDelegate:(id)arg1;
- (id)init;

@end

