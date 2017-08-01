//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSceneManagerDelegate.h"
#import "FBSceneManagerObserver.h"
#import "SBSceneLayoutViewControllerDelegate.h"

@class BSCopyingCacheSet, FBSDisplay, FBSceneManager, NSCountedSet, NSMutableSet, NSString, SBPolicyAggregator, SBSceneLayoutViewController, SBSceneLayoutWindow, UIScreen;

@interface SBSceneManager : NSObject <SBSceneLayoutViewControllerDelegate, FBSceneManagerObserver, FBSceneManagerDelegate>
{
    FBSceneManager *_sceneManager;
    UIScreen *_screen;
    FBSDisplay *_display;
    SBSceneLayoutWindow *_window;
    SBSceneLayoutViewController *_layoutController;
    SBPolicyAggregator *_policyAggregator;
    BSCopyingCacheSet *_allScenes;
    BSCopyingCacheSet *_daemonScenes;
    BSCopyingCacheSet *_pluginScenes;
    BSCopyingCacheSet *_workspaceScenes;
    BSCopyingCacheSet *_applicationScenes;
    BSCopyingCacheSet *_foregroundApplicationScenes;
    BSCopyingCacheSet *_reportedForegroundApplicationScenes;
    BSCopyingCacheSet *_externalApplicationScenes;
    BSCopyingCacheSet *_externalForegroundApplicationScenes;
    BSCopyingCacheSet *_reportedExternalForegroundApplicationScenes;
    NSCountedSet *_assertedBackgroundScenes;
    NSMutableSet *_outgoingSnapshots;
    NSMutableSet *_incomingSnapshots;
    id <SBSceneManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSceneManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBSDisplay *display; // @synthesize display=_display;
- (void).cxx_destruct;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneLayoutController:(id)arg1 noteHasVisibleElements:(_Bool)arg2;
- (void)_updateStateForScene:(id)arg1 withSettings:(id)arg2;
- (_Bool)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)_snapshotRequestsForApplication:(id)arg1 scene:(id)arg2 settings:(id)arg3;
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (_Bool)_handleAction:(id)arg1 forScene:(id)arg2;
- (long long)_hostingPolicyForScene:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (_Bool)_isStarkActivelyConnected;
- (id)_newPolicyAggregatorForDisplay:(id)arg1;
- (id)_sceneWindowLayoutStrategy;
- (id)_newLayoutControllerForDisplay:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)additionalActionsForApplication:(id)arg1 withTransitionContext:(id)arg2;
- (void)destroyAllScenes;
- (id)assertBackgroundedStatusForScenes:(id)arg1;
- (id)scenesForWorkspaceWithID:(id)arg1;
- (id)pluginScenes;
- (id)daemonScenes;
- (id)externalForegroundApplicationScenes;
- (id)externalApplicationScenes;
- (id)foregroundApplicationScenes;
- (id)applicationScenes;
- (id)allScenes;
@property(readonly, nonatomic) SBPolicyAggregator *policyAggregator;
@property(readonly, nonatomic) SBSceneLayoutViewController *layoutController;
@property(readonly, nonatomic) SBSceneLayoutWindow *window;
- (void)_invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithDisplay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

