//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@class UITouch;

@interface SBSceneResizeSnakebiteGestureRecognizer : UIGestureRecognizer
{
    _Bool _beganTrackingNearDivider;
    _Bool _ignoresTouchesMoved;
    _Bool _waitingForInvalidTouchToBecomeValid;
    double _dividerPosition;
    double _velocity;
    double _distanceTraveledFromInitialLocation;
    double _absoluteDistanceTraveled;
    double _initialSingleTouchTimestamp;
    UITouch *_leftTouch;
    UITouch *_rightTouch;
    UITouch *_singleTrackingTouch;
    UITouch *_waitingTouch;
    double _previousTouchPosition;
    double _previousTouchTimestamp;
    id <SBSceneResizeSnakebiteGestureDebugDelegate> _debugDelegate;
    struct CGPoint _initialWaitingTouchLocation;
    struct CGPoint _initialTouchLocation;
}

@property(nonatomic) __weak id <SBSceneResizeSnakebiteGestureDebugDelegate> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
@property(nonatomic, getter=isWaitingForInvalidTouchToBecomeValid) _Bool waitingForInvalidTouchToBecomeValid; // @synthesize waitingForInvalidTouchToBecomeValid=_waitingForInvalidTouchToBecomeValid;
@property(nonatomic) double previousTouchTimestamp; // @synthesize previousTouchTimestamp=_previousTouchTimestamp;
@property(nonatomic) double previousTouchPosition; // @synthesize previousTouchPosition=_previousTouchPosition;
@property(nonatomic) struct CGPoint initialTouchLocation; // @synthesize initialTouchLocation=_initialTouchLocation;
@property(nonatomic) struct CGPoint initialWaitingTouchLocation; // @synthesize initialWaitingTouchLocation=_initialWaitingTouchLocation;
@property(nonatomic, getter=_ignoresTouchesMoved, setter=_setIgnoresTouchesMoved:) _Bool ignoresTouchesMoved; // @synthesize ignoresTouchesMoved=_ignoresTouchesMoved;
@property(retain, nonatomic, getter=_waitingTouch, setter=_setWaitingTouch:) UITouch *waitingTouch; // @synthesize waitingTouch=_waitingTouch;
@property(retain, nonatomic, getter=_singleTrackingTouch, setter=_setSingleTrackingTouch:) UITouch *singleTrackingTouch; // @synthesize singleTrackingTouch=_singleTrackingTouch;
@property(retain, nonatomic, getter=_rightTouch, setter=_setRightTouch:) UITouch *rightTouch; // @synthesize rightTouch=_rightTouch;
@property(retain, nonatomic, getter=_leftTouch, setter=_setLeftTouch:) UITouch *leftTouch; // @synthesize leftTouch=_leftTouch;
@property(nonatomic) _Bool beganTrackingNearDivider; // @synthesize beganTrackingNearDivider=_beganTrackingNearDivider;
@property(nonatomic) double initialSingleTouchTimestamp; // @synthesize initialSingleTouchTimestamp=_initialSingleTouchTimestamp;
@property(nonatomic) double absoluteDistanceTraveled; // @synthesize absoluteDistanceTraveled=_absoluteDistanceTraveled;
@property(nonatomic) double distanceTraveledFromInitialLocation; // @synthesize distanceTraveledFromInitialLocation=_distanceTraveledFromInitialLocation;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
- (void)_setDividerPosition:(double)arg1;
@property(nonatomic) double dividerPosition; // @synthesize dividerPosition=_dividerPosition;
- (void).cxx_destruct;
- (void)_debugRegionsDidChange;
- (void)_stopDrawingDebugRegions;
- (void)_drawDebugRegions;
- (void)_updateStatsForTouchPosition:(double)arg1 timestamp:(double)arg2;
- (void)_handleTouchesMovedForSingleTouchTracking:(id)arg1 withEvent:(id)arg2;
- (void)_handleTouchesMovedForMultipleTouchTracking:(id)arg1 withEvent:(id)arg2;
- (void)_clearTrackingTouches;
- (_Bool)_shouldContinueTrackingInvalidTouchWithDistanceFromDivider:(double)arg1;
- (_Bool)_shouldConsiderSingleTouchTrackingAsFailed;
- (void)_startTrackingWithSingleTouch:(id)arg1;
- (_Bool)_canStartAnyKindOfTrackingWithTouch:(id)arg1;
- (void)_startTrackingWithTouch:(id)arg1 andTouch:(id)arg2;
- (_Bool)_checkOngoingValidityOfLeftTouch:(id)arg1 rightTouch:(id)arg2;
- (_Bool)_checkInitialValidityOfTouch:(id)arg1 andTouch:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)interfaceOrientedLocationInView:(id)arg1;
- (_Bool)willAllowResizeForSingleTouch:(id)arg1;
- (_Bool)_singleTouchStartedInPinningAreaWithLocation:(struct CGPoint)arg1;
- (_Bool)_shouldStartTrackingSingleTouchAtLocation:(struct CGPoint)arg1 distanceFromDivider:(double)arg2;
- (double)_viewOffsetForNormalizedLocation:(double)arg1;
- (double)_normalizedLocationForViewOffset:(double)arg1;
- (double)_dividerViewOffset;
- (struct CGRect)_interfaceOrientedBounds;
- (struct CGPoint)_interfaceOrientedPoint:(struct CGPoint)arg1;
- (struct CGRect)_convertViewRect:(struct CGRect)arg1 toInterfaceOrientation:(long long)arg2;
- (struct CGPoint)_convertViewPoint:(struct CGPoint)arg1 toInterfaceOrientation:(long long)arg2;
- (long long)_interfaceOrientation;

// Remaining properties
@property(nonatomic) __weak id <SBSceneResizeSnakebiteGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

