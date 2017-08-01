//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBControlCenterSectionViewController.h"

#import "MPAVRoutingControllerDelegate.h"
#import "SFAirDropDiscoveryAlertControllerDelegate.h"
#import "SFAirDropDiscoveryControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class BSTimer, MPAVRoutingController, MPAVRoutingSheet, MPAVRoutingViewController, MPAudioVideoRoutingPopoverController, NSString, SBCCButtonLikeSectionView, SFAirDropDiscoveryController, UIAlertController;

@interface SBCCAirStuffSectionController : SBControlCenterSectionViewController <MPAVRoutingControllerDelegate, UIPopoverControllerDelegate, SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryAlertControllerDelegate>
{
    SBCCButtonLikeSectionView *_airPlaySection;
    SBCCButtonLikeSectionView *_airDropSection;
    MPAVRoutingController *_airPlayController;
    MPAVRoutingSheet *_airPlayModalSheet;
    MPAVRoutingViewController *_airPlayViewController;
    MPAudioVideoRoutingPopoverController *_airPlayPopoverController;
    SFAirDropDiscoveryController *_airDropDiscoveryController;
    UIAlertController *_airDropAlertController;
    _Bool _isVisible;
    _Bool _airPlayWasPreviouslyEnabled;
    BSTimer *_resetTimer;
    BSTimer *_airPlayTimer;
    _Bool _airPlayEnabled;
    _Bool _airDropEnabled;
}

+ (id)defaultFontTight;
+ (id)defaultFont;
+ (Class)viewClass;
@property(nonatomic) _Bool airDropEnabled; // @synthesize airDropEnabled=_airDropEnabled;
@property(nonatomic) _Bool airPlayEnabled; // @synthesize airPlayEnabled=_airPlayEnabled;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)discoveryController:(id)arg1 alertControllerDidDismiss:(id)arg2;
- (void)discoveryControllerVisibilityDidChange:(id)arg1;
- (void)discoveryControllerSettingsDidChange:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)_dismissAirplayControllerAnimated:(_Bool)arg1;
- (void)_debugAirplaneStateDidChangeNotification:(id)arg1;
- (void)_debugWifiStateDidChangeNotification:(id)arg1;
- (void)_updateAirDropControlAsEnabled:(_Bool)arg1;
- (void)_updateForAirDropStateChange;
- (void)_updateAirPlayControlAsEnabled:(_Bool)arg1;
- (void)_updateForAirPlayStateChange;
- (void)_airPlayDoneButtonTapped:(id)arg1;
- (void)_airDropTapped:(id)arg1;
- (void)_airPlayTapped:(id)arg1;
- (void)_showAirPlayView:(id)arg1;
- (void)_noteSectionEnabledStateDidChange;
- (void)_updateSubsectionVisibilityAnimated:(_Bool)arg1;
- (void)_updateLayoutForSizeCategoryChange;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)viewDidLoad;
- (id)view;
- (_Bool)enabledForOrientation:(long long)arg1;
- (struct CGSize)contentSizeForOrientation:(long long)arg1;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

