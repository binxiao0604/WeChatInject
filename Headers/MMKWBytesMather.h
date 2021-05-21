//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFSMather.h"

@interface MMKWBytesMather : MMFSMather
{
    unsigned int _kwm_length;
    char *_kwm_data;
}

@property(nonatomic) unsigned int kwm_length; // @synthesize kwm_length=_kwm_length;
@property(nonatomic) char *kwm_data; // @synthesize kwm_data=_kwm_data;
- (id)extractKeywords:(id)arg1;
- (id)dataModelGetKeywordWithContent:(id)arg1 location:(unsigned int)arg2;
- (void)doBuildMatherModel;
- (void)writeKeywordModel;
- (_Bool)readKeywordModel;
- (void)fillKeywordModelData;
- (void)createKeywordModel;
- (unsigned int)initPretreat:(unsigned short *)arg1 keywordMaxLen:(unsigned int)arg2;
- (unsigned int)getKeywordMaxLen;
- (void)dealloc;

@end

