//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockScreenPluginTransition.h"

@class SBLockOverlayTransition;

@interface SBLockScreenAnimatedPluginTransition : SBLockScreenPluginTransition
{
    SBLockOverlayTransition *_activeToOverlayTransition;
    SBLockOverlayTransition *_activeFromOverlayTransition;
    SBLockOverlayTransition *_activeOverlayTransition;
}

@property(retain, nonatomic) SBLockOverlayTransition *activeOverlayTransition; // @synthesize activeOverlayTransition=_activeOverlayTransition;
@property(retain, nonatomic) SBLockOverlayTransition *activeFromOverlayTransition; // @synthesize activeFromOverlayTransition=_activeFromOverlayTransition;
@property(retain, nonatomic) SBLockOverlayTransition *activeToOverlayTransition; // @synthesize activeToOverlayTransition=_activeToOverlayTransition;
- (void).cxx_destruct;
- (void)_finalizeAndClearPluginAnimationContext;
- (void)beginTransition;

@end

