//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ButtomJumpInfo, ComonPromptInfo, NSString;

@interface PopUpWithHalfDialog : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ComonPromptInfo *content; // @dynamic content;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) ButtomJumpInfo *firstButton; // @dynamic firstButton;
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(retain, nonatomic) ButtomJumpInfo *secondButton; // @dynamic secondButton;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

