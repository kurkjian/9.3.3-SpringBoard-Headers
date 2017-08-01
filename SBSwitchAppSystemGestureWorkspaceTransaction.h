//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBSwitchAppSwipeTransactionDelegate.h"

@class FBUIApplicationSceneDeactivationAssertion, NSString, SBSwitchAppList, SBSwitchAppSwipeTransaction, SBWorkspaceApplicationTransitionContext;

@interface SBSwitchAppSystemGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBSwitchAppSwipeTransactionDelegate>
{
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBWorkspaceApplicationTransitionContext *_currentTransitionContext;
    _Bool _newGesturePending;
    SBSwitchAppSwipeTransaction *_trackingSwipeTransaction;
    SBSwitchAppList *_switchAppList;
}

@property(copy, nonatomic) SBSwitchAppList *switchAppList; // @synthesize switchAppList=_switchAppList;
- (void).cxx_destruct;
- (_Bool)shouldWatchdog:(id *)arg1;
- (double)watchdogTimeout;
- (void)swipeTransactionFinishedAnimating:(id)arg1;
- (void)_beginNextSwipeTransaction;
- (void)_interruptGestureIfAppropriate;
- (void)_unlockOrientation;
- (void)_lockOrientation:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

