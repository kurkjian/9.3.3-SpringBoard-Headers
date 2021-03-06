//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBControlCenterObserver.h"
#import "SBControlCenterSectionViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UIBackdropViewObserver.h"
#import "_UISettingsKeyObserver.h"

@class NSMutableArray, NSString, SBControlCenterContainerView, SBControlCenterContentView, SBControlCenterSettings, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SBControlCenterViewController : UIViewController <UIGestureRecognizerDelegate, SBControlCenterSectionViewControllerDelegate, _UISettingsKeyObserver, _UIBackdropViewObserver, SBControlCenterObserver>
{
    SBControlCenterContainerView *_containerView;
    SBControlCenterContentView *_contentView;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    NSMutableArray *_sectionList;
    SBControlCenterSettings *_settings;
    _Bool _presented;
    _Bool _transitioning;
    id <SBControlCenterViewControllerDelegate> _delegate;
}

@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic, getter=isPresented) _Bool presented; // @synthesize presented=_presented;
@property(nonatomic) __weak id <SBControlCenterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backdropViewDidChange:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)section:(id)arg1 publishStatusUpdate:(id)arg2;
- (void)noteSectionEnabledStateDidChange:(id)arg1;
- (void)sectionWantsControlCenterDismissal:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)view;
- (void)abortAnimatedTransition;
- (void)_noteControlCenterControlDidDeactivate:(id)arg1;
- (void)_noteControlCenterControlDidActivate:(id)arg1;
@property(nonatomic) double revealPercentage;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillFinishTransitionOpen:(_Bool)arg1 withDuration:(double)arg2;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (double)contentHeightForOrientation:(long long)arg1;
- (void)trackChevronView:(id)arg1;
- (id)chevronView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

