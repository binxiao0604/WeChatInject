//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QScaleUnitsView, UIColor;

@interface QScaleView : UIView
{
    UIColor *_borderColorRegular;
    UIColor *_lightSegmentColorSatellite;
    UIColor *_darkSegmentColorSatellite;
    UIColor *_borderColorSatellite;
    NSString *_metersAbbreviation;
    NSString *_kilometersAbbreviation;
    double *_magicNumbers;
    int _oldNumberOfSegments;
    int _segmentNumber;
    double _resultSegmentLength;
    double _resultSegmentLengthInMeters;
    UIView *_outlineView;
    UIView *_verticalLineLeft;
    UIView *_verticalLineRight;
    QScaleUnitsView *_unitsView;
    _Bool _useRegularStyle;
    _Bool _isDarkMode;
    double _distanceInMeters;
    NSString *_customFont;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
@property(retain, nonatomic) NSString *customFont; // @synthesize customFont=_customFont;
@property(nonatomic) double distanceInMeters; // @synthesize distanceInMeters=_distanceInMeters;
@property(nonatomic) _Bool useRegularStyle; // @synthesize useRegularStyle=_useRegularStyle;
- (void)updateUnitsView;
- (id)drawVerticalLine:(struct CGPoint)arg1 width:(double)arg2 height:(double)arg3;
- (void)updateOutlineView;
- (void)updateDisplayStyle;
- (void)calculateSegmentLength;
- (void)calculateSegments;
- (void)updateOrigin:(struct CGPoint)arg1;
- (void)initSegmentViews;
- (void)initBaseLayer;
- (void)initMagicNumber;
- (void)initAttributes;
- (id)init;
- (void)dealloc;

@end

