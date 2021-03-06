//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface SBSoftwareUpdateStatePersistence : NSObject
{
    unsigned long long _alertFlow;
    _Bool _downloadWasQueuedRemotely;
    unsigned long long _nextAlertRepopStrategy;
    NSDate *_nextAlertScheduledDate;
}

- (void)_setNextAlertRepopStrategy:(unsigned long long)arg1;
@property(nonatomic) unsigned long long nextAlertRepopStrategy; // @synthesize nextAlertRepopStrategy=_nextAlertRepopStrategy;
@property(nonatomic) _Bool downloadWasQueuedRemotely; // @synthesize downloadWasQueuedRemotely=_downloadWasQueuedRemotely;
- (void)_setNextAlertDate:(id)arg1;
@property(retain, nonatomic) NSDate *nextAlertDate; // @synthesize nextAlertDate=_nextAlertScheduledDate;
@property(nonatomic) unsigned long long alertFlow; // @synthesize alertFlow=_alertFlow;
- (void).cxx_destruct;
- (void)_load;
- (void)_clear;
- (void)save;
- (id)description;
- (void)setNextAlertRepopStrategy:(unsigned long long)arg1 withNextAlertDate:(id)arg2;
- (id)init;

@end

