//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class KindaLayout, NSString;

@interface KindaCollectionViewCell : UICollectionViewCell
{
    NSString *_m_layoutType;
    KindaLayout *_m_layout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KindaLayout *m_layout; // @synthesize m_layout=_m_layout;
@property(retain, nonatomic) NSString *m_layoutType; // @synthesize m_layoutType=_m_layoutType;
- (void)layoutSubviews;
- (id)kindaLayout;
- (void)updateKindaLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

