//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

@class NSString;

@interface SBHarmonySettings : _UISettings
{
    _Bool _whitePointAdaptationInteractiveUpdateEnabled;
    float _whitePointAdaptationStrengthStandard;
    float _whitePointAdaptationStrengthReading;
    float _whitePointAdaptationStrengthPhoto;
    float _whitePointAdaptationStrengthVideo;
    float _whitePointAdaptationStrengthGame;
    float _whitePointAdaptationUpdateDefaultDuration;
    NSString *_whitePointAdaptationInteractiveUpdateTimingFunctionName;
}

+ (id)settingsControllerModule;
@property(copy, nonatomic) NSString *whitePointAdaptationInteractiveUpdateTimingFunctionName; // @synthesize whitePointAdaptationInteractiveUpdateTimingFunctionName=_whitePointAdaptationInteractiveUpdateTimingFunctionName;
@property(nonatomic) _Bool whitePointAdaptationInteractiveUpdateEnabled; // @synthesize whitePointAdaptationInteractiveUpdateEnabled=_whitePointAdaptationInteractiveUpdateEnabled;
@property(nonatomic) float whitePointAdaptationUpdateDefaultDuration; // @synthesize whitePointAdaptationUpdateDefaultDuration=_whitePointAdaptationUpdateDefaultDuration;
@property(nonatomic) float whitePointAdaptationStrengthGame; // @synthesize whitePointAdaptationStrengthGame=_whitePointAdaptationStrengthGame;
@property(nonatomic) float whitePointAdaptationStrengthVideo; // @synthesize whitePointAdaptationStrengthVideo=_whitePointAdaptationStrengthVideo;
@property(nonatomic) float whitePointAdaptationStrengthPhoto; // @synthesize whitePointAdaptationStrengthPhoto=_whitePointAdaptationStrengthPhoto;
@property(nonatomic) float whitePointAdaptationStrengthReading; // @synthesize whitePointAdaptationStrengthReading=_whitePointAdaptationStrengthReading;
@property(nonatomic) float whitePointAdaptationStrengthStandard; // @synthesize whitePointAdaptationStrengthStandard=_whitePointAdaptationStrengthStandard;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

