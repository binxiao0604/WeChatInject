//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QBorder : NSObject
{
    struct CGPath *_borderPath;
    struct CGRect _borderBoundingBox;
    struct CGPoint *_points;
    int _nPoints;
}

- (void)dealloc;
- (id)initWithBorder:(id)arg1;
- (void)constructPathWithString:(id)arg1 unitSeparator:(id)arg2 itemSeparator:(id)arg3;
- (void)constructBorderPath:(id)arg1;
- (_Bool)containsMapRect:(CDStruct_02837cd9)arg1;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;

@end
