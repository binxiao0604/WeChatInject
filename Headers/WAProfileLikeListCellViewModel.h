//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GetProfileInfoResponse_WxaLikeList, NSString;

@interface WAProfileLikeListCellViewModel : NSObject
{
    NSString *_nickName;
    GetProfileInfoResponse_WxaLikeList *_friendLikeList;
}

+ (id)createWithNickName:(id)arg1 friendLikeList:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) GetProfileInfoResponse_WxaLikeList *friendLikeList; // @synthesize friendLikeList=_friendLikeList;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;

@end

