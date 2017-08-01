//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableSet;

@interface _SBClientSideAnimationEngine : NSObject
{
    NSMutableSet *_animations;
    CADisplayLink *_displayLink;
    NSMutableSet *_finishedAnimations;
}

+ (id)sharedEngine;
- (void).cxx_destruct;
- (void)_onDisplayLink:(id)arg1;
- (void)_tearDownDisplayLink;
- (void)_ensureDisplayLink;
- (void)_updateDisplayLink;
- (_Bool)isRunningAnimation:(id)arg1;
- (void)stopAnimation:(id)arg1;
- (void)updateAnimation:(id)arg1;
- (void)startAnimation:(id)arg1;
- (id)init;

@end
