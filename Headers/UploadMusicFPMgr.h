//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UploadAFPMgr.h"

@class CLLocation;

@interface UploadMusicFPMgr : UploadAFPMgr
{
    CLLocation *_curLocation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *curLocation; // @synthesize curLocation=_curLocation;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SendFPData:(id)arg1 FPId:(unsigned int)arg2 Duration:(float)arg3 EndFlag:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

