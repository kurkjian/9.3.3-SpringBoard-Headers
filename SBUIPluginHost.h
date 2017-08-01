//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBUIPluginControllerHost.h"

@class NSString, SBUIPluginController;

@interface SBUIPluginHost : NSObject <SBUIPluginControllerHost>
{
    SBUIPluginController *_plugin;
    _Bool _expectsFaceContact;
    _Bool _isPluginRunning;
}

@property(retain) SBUIPluginController *pluginController; // @synthesize pluginController=_plugin;
- (void).cxx_destruct;
- (void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(long long)arg2 animated:(_Bool)arg3;
- (void)uiPluginUserEventOccurred:(id)arg1;
- (_Bool)uiPlugin:(id)arg1 openURL:(id)arg2;
- (_Bool)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(_Bool)arg4;
- (_Bool)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3;
- (void)uiPlugin:(id)arg1 setExpectsFaceContact:(_Bool)arg2;
- (void)_updateFaceContactForVisibilityChange:(_Bool)arg1;
- (_Bool)uiPluginExpectsFaceContact:(id)arg1;
- (void)uiPlugin:(id)arg1 isNowRunning:(_Bool)arg2;
- (void)_updateExpectsFaceContactWithChangedValue:(_Bool)arg1;
- (_Bool)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3;
- (void)uiPluginWantsDismissal:(id)arg1 withAnimation:(_Bool)arg2;
- (_Bool)pluginSuppressesNotifications;
- (_Bool)pluginWantsScreenDimInterval:(double *)arg1;
- (_Bool)pluginWantsInterfaceOrientation:(long long *)arg1;
- (_Bool)pluginHandledButtonTapEventFromSource:(int)arg1;
- (_Bool)pluginHandledButtonUpEventFromSource:(int)arg1;
- (_Bool)pluginHandledButtonDownEventFromSource:(int)arg1;
- (_Bool)pluginHandledPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPluginForEvent:(int)arg1;
- (void)_dismissUIPlugin:(id)arg1 animated:(_Bool)arg2;
- (void)cancelPendingPluginActivationEvent:(int)arg1;
- (void)preparePluginForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;
- (_Bool)pluginWantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double *)arg3;
- (_Bool)activatePluginForEvent:(int)arg1 eventSource:(int)arg2 context:(void *)arg3;
- (_Bool)expectsFaceContact;
@property(readonly) _Bool isPluginRunning;
@property(readonly) _Bool isPluginVisible;
- (void)_notePluginVisibilityDidChange;
- (void)_restoreOrientation;
- (void)_remoteLocked:(id)arg1;
- (void)_deviceBlocked:(id)arg1;
- (void)_uiLocked:(id)arg1;
- (void)_noteDeviceLockedOrBlocked;
- (void)_pluginWillUnload:(id)arg1;
- (void)_pluginDidLoad:(id)arg1;
- (void)_removeObserversForPlugin:(id)arg1;
- (_Bool)pluginSupportedAndEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

