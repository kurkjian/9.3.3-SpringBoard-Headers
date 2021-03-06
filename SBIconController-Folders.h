//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconController.h"

@interface SBIconController (Folders)
- (void)_runScrollFolderTest:(long long)arg1;
- (void)_runFolderCloseTest;
- (void)_runFolderOpenTest;
- (struct CGRect)_contentViewRelativeFrameForIcon:(id)arg1;
- (void)shiftFolderViewsForKeyboardAppearing:(_Bool)arg1 keyboardHeight:(double)arg2;
- (_Bool)allowsNestedFolders;
- (id)_proposedFolderNameForGrabbedIcon:(id)arg1 recipientIcon:(id)arg2;
- (void)_snapshotFadeDidStop:(id)arg1 finished:(id)arg2 snapshot:(id)arg3;
- (void)_compactRootListsAfterFolderCloseWithAnimation:(_Bool)arg1;
- (void)_cleanupForClosingFolderAnimated:(_Bool)arg1;
- (void)_folderDidFinishOpenClose:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_animateFolder:(id)arg1 open:(_Bool)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_folderControllerDidReceiveCancelReachabilityAction:(id)arg1;
- (void)_disableReachabilityImmediately:(_Bool)arg1;
- (void)_presentNotificationCenterForReachability;
- (void)replaceFolderIcon:(id)arg1 byContainedIcon:(id)arg2 animated:(_Bool)arg3;
- (void)addIcons:(id)arg1 intoFolderIcon:(id)arg2 animated:(_Bool)arg3 openFolderOnFinish:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;
- (_Bool)isDroppingIcon:(id)arg1;
- (_Bool)isDroppingIconsInOrOutOfFolder;
- (void)_moveDroppedIconsToLocation:(int)arg1;
- (void)_dropIconOutOfClosingFolder:(id)arg1 withInsertionPath:(id)arg2;
- (void)_dropIconIntoOpenFolder:(id)arg1 withInsertionPath:(id)arg2;
- (id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2;
- (void)_closeFolderController:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)closeFolderAnimated:(_Bool)arg1;
- (void)closeFolderAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)openFolder:(id)arg1 animated:(_Bool)arg2;
- (id)openFolder;
- (_Bool)hasOpenFolder;
- (_Bool)hasAnimatingFolder;
- (void)_setAnimatingFolderCreation:(_Bool)arg1;
- (void)_setFolderToOpenAfterScrolling:(id)arg1;
- (void)_setHasAnimatingFolder:(_Bool)arg1;
- (void)_noteFolderAnimationStateDidChange;
- (id)iconListViewAtIndex:(unsigned long long)arg1 inFolder:(id)arg2 createIfNecessary:(_Bool)arg3;
- (void)getListView:(id *)arg1 folder:(id *)arg2 relativePath:(id *)arg3 forIndexPath:(id)arg4 createIfNecessary:(_Bool)arg5;
@end

