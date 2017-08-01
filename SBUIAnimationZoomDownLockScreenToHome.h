//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationZoomDownAppToHome.h"

@class SBIconAnimator, SBLockScreenViewController, SBLockToAppStatusBarAnimator, SBWindowSelfHostWrapper, SBWorkspaceTransitionRequest;

@interface SBUIAnimationZoomDownLockScreenToHome : SBUIAnimationZoomDownAppToHome
{
    SBLockScreenViewController *_lockScreenViewController;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
    SBIconAnimator *_iconAnimator;
    SBWindowSelfHostWrapper *_alertWindowHostWrapper;
    SBWorkspaceTransitionRequest *_transitionRequest;
}

- (void).cxx_destruct;
- (id)animateZoomWithCompletion:(CDUnknownBlockType)arg1;
- (void)cleanupZoom;
- (void)prepareZoom;
- (_Bool)_shouldDismissBanner;
- (void)_prepareAnimation;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

