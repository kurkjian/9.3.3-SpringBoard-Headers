//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainAppSwitcherPageView.h"

@class SBSaturatedIconView, UILabel, UIView;

@interface SBAppSwitcherContinuityAppPageView : SBMainAppSwitcherPageView
{
    UIView *_infoView;
    UIView *_iconTintView;
    SBSaturatedIconView *_saturatedIconView;
    UILabel *_deviceNameLabelBackdrop;
    UILabel *_deviceNameLabelForeground;
    double _deviceLabelOffset;
}

- (void).cxx_destruct;
- (void)_viewDismissing:(id)arg1;
- (id)auxiliaryView;
- (void)layoutSubviews;
- (double)_heightForDeviceLabel:(id)arg1 withWidth:(double)arg2;
- (void)setView:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 suggestedApp:(id)arg2;

@end
