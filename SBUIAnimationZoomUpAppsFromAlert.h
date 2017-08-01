//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAlertManager, SBAppStatusBarSettingsAssertion, SBWindowSelfHostWrapper, SBWorkspaceApplication;

@interface SBUIAnimationZoomUpAppsFromAlert : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBAlert *_alert;
    SBWorkspaceApplication *_primaryApp;
    SBWindowSelfHostWrapper *_appContextHostWrapper;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDelay;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

