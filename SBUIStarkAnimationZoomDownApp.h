//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkScreenAnimationController.h"

@class SBAlert, UIView;

@interface SBUIStarkAnimationZoomDownApp : SBUIStarkScreenAnimationController
{
    SBAlert *_alertImpersonator;
    UIView *_viewToAnimate;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (double)animationDelay;
- (double)animationStartTime;
- (double)animationDuration;
- (void)_prepareAnimation;
- (_Bool)prefersLayerHostSnapshot;
- (void)dealloc;
- (id)initWithDeactivatingApp:(id)arg1 withAlertImpersonator:(id)arg2 starkScreenController:(id)arg3;
- (id)initWithDeactivatingApp:(id)arg1 starkScreenController:(id)arg2;

@end

