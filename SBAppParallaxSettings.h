//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

@class SBFHomeScreenWallpaperParallaxSettings, SBFLockScreenWallpaperParallaxSettings, SBFParallaxSettings;

@interface SBAppParallaxSettings : _UISettings
{
    SBFLockScreenWallpaperParallaxSettings *_lockscreenWallpaperSettings;
    SBFHomeScreenWallpaperParallaxSettings *_homescreenWallpaperSettings;
    SBFParallaxSettings *_iconSettings;
    SBFParallaxSettings *_iconBadgeSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBFParallaxSettings *iconBadgeSettings; // @synthesize iconBadgeSettings=_iconBadgeSettings;
@property(retain) SBFParallaxSettings *iconSettings; // @synthesize iconSettings=_iconSettings;
@property(retain) SBFHomeScreenWallpaperParallaxSettings *homescreenWallpaperSettings; // @synthesize homescreenWallpaperSettings=_homescreenWallpaperSettings;
@property(retain) SBFLockScreenWallpaperParallaxSettings *lockscreenWallpaperSettings; // @synthesize lockscreenWallpaperSettings=_lockscreenWallpaperSettings;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

