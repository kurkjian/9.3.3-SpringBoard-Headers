//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBReachabilityTriggerDelegate.h"

@class NSHashTable, NSMutableSet, NSString, SBReachabilityTrigger;

@interface SBReachabilityManager : NSObject <SBReachabilityTriggerDelegate>
{
    NSHashTable *_observers;
    _Bool _reachabilityModeActive;
    unsigned long long _reachabilityExtensionGenerationCount;
    _Bool _reachabilityModeEnabled;
    NSMutableSet *_temporaryDisabledReasons;
    SBReachabilityTrigger *_trigger;
}

+ (id)sharedInstance;
+ (_Bool)reachabilitySupported;
@property(readonly, nonatomic) _Bool reachabilityModeActive; // @synthesize reachabilityModeActive=_reachabilityModeActive;
- (void).cxx_destruct;
- (void)triggerDidTriggerReachability:(id)arg1;
- (void)_handleReachabilityActivated;
- (void)_handleSignificantTimeChanged;
- (void)_notifyObserversReachabilityModeActive:(_Bool)arg1 excludingObserver:(id)arg2;
- (void)_toggleReachabilityModeWithRequestingObserver:(id)arg1;
- (void)_pingKeepAliveWithDuration:(double)arg1 interactedBeforePing:(_Bool)arg2 initialKeepAliveTime:(double)arg3;
- (void)_setKeepAliveTimer;
- (void)_updateReachabilityModeActive:(_Bool)arg1 withRequestingObserver:(id)arg2;
- (void)_handleReachabilityDeactivated;
- (void)deactivateReachabilityModeForObserver:(id)arg1;
- (void)setReachabilityTemporarilyDisabled:(_Bool)arg1 forReason:(id)arg2;
@property(nonatomic) _Bool reachabilityEnabled;
- (void)cancelPendingReachabilityRequests;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

