//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet, NSString, SBApplication;

@protocol SBApplicationRestrictionDataSource <NSObject>
- (NSSet *)bundleIdentifiersWithVisibilityOverrideHidden;
- (void)noteNeedsToRefreshVisiblityOverrides;
- (NSArray *)allBundleIdentifiers;
- (NSArray *)allApplications;
- (SBApplication *)applicationWithBundleIdentifier:(NSString *)arg1;
@end

