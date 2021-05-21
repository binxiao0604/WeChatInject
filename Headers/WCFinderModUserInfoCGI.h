//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString;

@interface WCFinderModUserInfoCGI : WCFinderBaseCgi
{
    _Bool _notShowLocation;
    _Bool _notShowSex;
    _Bool _notShowBirth;
    _Bool _musicForbidReproduce;
    int _sex;
    unsigned int _birthYear;
    unsigned int _birthMonth;
    unsigned int _birthDay;
    unsigned int _privateSwitch;
    unsigned int _finderVideoSwitch;
    unsigned int _showMentionFeed;
    NSString *_nickname;
    NSString *_signature;
    NSString *_username;
    NSString *_coverImgUrl;
    NSString *_headImageUrl;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_realCountry;
    NSString *_realProvince;
    NSString *_realCity;
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
@property(nonatomic) _Bool musicForbidReproduce; // @synthesize musicForbidReproduce=_musicForbidReproduce;
@property(nonatomic) unsigned int showMentionFeed; // @synthesize showMentionFeed=_showMentionFeed;
@property(nonatomic) unsigned int finderVideoSwitch; // @synthesize finderVideoSwitch=_finderVideoSwitch;
@property(nonatomic) unsigned int privateSwitch; // @synthesize privateSwitch=_privateSwitch;
@property(nonatomic) _Bool notShowBirth; // @synthesize notShowBirth=_notShowBirth;
@property(nonatomic) _Bool notShowSex; // @synthesize notShowSex=_notShowSex;
@property(nonatomic) _Bool notShowLocation; // @synthesize notShowLocation=_notShowLocation;
@property(nonatomic) unsigned int birthDay; // @synthesize birthDay=_birthDay;
@property(nonatomic) unsigned int birthMonth; // @synthesize birthMonth=_birthMonth;
@property(nonatomic) unsigned int birthYear; // @synthesize birthYear=_birthYear;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *realCity; // @synthesize realCity=_realCity;
@property(copy, nonatomic) NSString *realProvince; // @synthesize realProvince=_realProvince;
@property(copy, nonatomic) NSString *realCountry; // @synthesize realCountry=_realCountry;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(copy, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithUserName:(id)arg1 mvForbidReproduce:(_Bool)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithUserName:(id)arg1 selectCountry:(id)arg2 selectProvince:(id)arg3 selectCity:(id)arg4 notShowLocation:(_Bool)arg5 currentCountry:(id)arg6 currentProvince:(id)arg7 currentCity:(id)arg8 successful:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (id)initWithUserName:(id)arg1 hiddenMentionFeedSwitch:(_Bool)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setupDefaultValue;
- (id)initWithUsername:(id)arg1 nickname:(id)arg2 signature:(id)arg3 coverImgUrl:(id)arg4 headImageUrl:(id)arg5 country:(id)arg6 province:(id)arg7 city:(id)arg8 sex:(int)arg9 birthYear:(unsigned int)arg10 birthMonth:(unsigned int)arg11 birthDay:(unsigned int)arg12 notShowLocation:(_Bool)arg13 notShowSex:(_Bool)arg14 notShowBirth:(_Bool)arg15 privateSwitch:(unsigned int)arg16 finderVideoSwitch:(unsigned int)arg17 successful:(CDUnknownBlockType)arg18 failure:(CDUnknownBlockType)arg19;

@end
