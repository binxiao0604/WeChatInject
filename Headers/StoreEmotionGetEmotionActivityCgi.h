//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class NSString;
@protocol StoreEmotionGetEmotionActivityCgiDelegate;

@interface StoreEmotionGetEmotionActivityCgi : StoreEmotionBaseCgi
{
    NSString *m_activityId;
    NSString *m_md5;
    id <StoreEmotionGetEmotionActivityCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StoreEmotionGetEmotionActivityCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *md5; // @synthesize md5=m_md5;
@property(readonly, nonatomic) NSString *activityId; // @synthesize activityId=m_activityId;
- (void)handleErrorReturn;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (_Bool)startRequestWithActivityId:(id)arg1 md5:(id)arg2;
- (id)init;
- (void)dealloc;

@end
