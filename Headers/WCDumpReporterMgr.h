//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface WCDumpReporterMgr : MMRootService <MMServiceProtocol>
{
    NSMutableArray *_uploadedIssueArray;
    NSMutableArray *_uploadingIssueArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadingIssueArray; // @synthesize uploadingIssueArray=_uploadingIssueArray;
@property(retain, nonatomic) NSMutableArray *uploadedIssueArray; // @synthesize uploadedIssueArray=_uploadedIssueArray;
- (void)handleReportLagIssue:(id)arg1 success:(_Bool)arg2;
- (void)handleBeginReportLagIssue:(id)arg1;
- (void)uploadDumpOnIPXX:(id)arg1;
- (void)onIPXX:(id)arg1;
- (void)uploadDumpWithDate:(id)arg1;
- (void)uploadAllDump;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

