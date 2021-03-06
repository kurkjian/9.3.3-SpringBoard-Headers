//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSLock, NSObject<OS_dispatch_queue>, NSString;

@interface SBApplicationShortcutStore : NSObject
{
    NSLock *_stateLock;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSArray *_cachedShortcutItems;
    _Bool _isLoaded;
    _Bool _isDirty;
    NSString *_bundleIdentifier;
}

@property(copy, nonatomic) NSArray *cachedShortcutItems; // @synthesize cachedShortcutItems=_cachedShortcutItems;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *shortcutItems;
- (void)_stateLock_markDirty;
- (void)_saveQueue_save;
- (void)saveSynchronously;
- (void)_stateLock_loadFromDiskIfNeeded;
- (id)_plistArrayFromShortcutItems:(id)arg1;
- (id)_shortcutItemsFromPlistArray:(id)arg1;
- (id)_url;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1;

@end

