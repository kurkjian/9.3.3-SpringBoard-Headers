//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBLockScreenPlugin, SBLockScreenViewController;

@interface SBLockScreenPluginTransitionContext : NSObject
{
    SBLockScreenViewController *_lockScreenViewController;
    SBLockScreenPlugin *_fromPlugin;
    SBLockScreenPlugin *_toPlugin;
}

@property(retain, nonatomic) SBLockScreenPlugin *toPlugin; // @synthesize toPlugin=_toPlugin;
@property(retain, nonatomic) SBLockScreenPlugin *fromPlugin; // @synthesize fromPlugin=_fromPlugin;
@property(retain, nonatomic) SBLockScreenViewController *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (void).cxx_destruct;

@end
