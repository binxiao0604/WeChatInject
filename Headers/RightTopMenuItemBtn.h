//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class RightTopMenuItemBtnData;

@interface RightTopMenuItemBtn : MMUIButton
{
    RightTopMenuItemBtnData *m_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RightTopMenuItemBtnData *m_data; // @synthesize m_data;
- (id)initWithBtnData:(id)arg1 showNew:(_Bool)arg2;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;

@end

