//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CMailContact, UIButton;
@protocol MailContactButtonDelegate;

@interface MailContactButton : UIView
{
    CMailContact *m_oMailContact;
    id <MailContactButtonDelegate> m_delegate;
    UIButton *m_btnMailContactButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMailContact *m_oMailContact; // @synthesize m_oMailContact;
@property(nonatomic) __weak id <MailContactButtonDelegate> m_delegate; // @synthesize m_delegate;
- (void)dealloc;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)onReceiverBtnRepeatClick:(id)arg1;
- (void)onReceiverBtnClick:(id)arg1;
- (void)createButton;
- (id)initWithMailContact:(id)arg1;

@end

