//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAlertManager;

@interface SBUIAnimationFadeAlertToAlert : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBAlert *_fromAlert;
    SBAlert *_toAlert;
    _Bool _alertIsTransparent;
}

- (void).cxx_destruct;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDuration;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

