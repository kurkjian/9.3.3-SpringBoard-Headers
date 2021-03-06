//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMediaTimingFunction;

@interface SBClientSideAnimation : NSObject
{
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    CDUnknownBlockType _applier;
    CDUnknownBlockType _completion;
    long long _frameInterval;
    double _startTime;
    double _lastFireTime;
}

+ (void)animateWithDuration:(double)arg1 timingFunction:(id)arg2 applier:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateWithDuration:(double)arg1 curve:(long long)arg2 applier:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) double lastFireTime; // @synthesize lastFireTime=_lastFireTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long frameInterval; // @synthesize frameInterval=_frameInterval;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType applier; // @synthesize applier=_applier;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (double)_solveForInput:(double)arg1;
- (void)_reset;
- (void)_getEffectiveElapsedTime:(double *)arg1 finished:(_Bool *)arg2;
@property(readonly, nonatomic) double elapsedTime;
- (void)_invokeCompletionWithFinished:(_Bool)arg1;
- (void)_invokeApplierWithProgress:(double)arg1;
- (_Bool)isRunning;
- (void)stop;
- (void)start;
- (void)setTimingFunctionFromAnimationCurve:(long long)arg1;
- (id)init;

@end

