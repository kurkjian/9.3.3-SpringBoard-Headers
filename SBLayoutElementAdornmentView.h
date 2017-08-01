//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBChevronView, SBLayoutElementPinResizeGrabberView, SBSceneDimmingView;

@interface SBLayoutElementAdornmentView : UIView
{
    SBSceneDimmingView *_dimmingView;
    long long _dimmingLevel;
    long long _sideSwitcherGrabberStyle;
    SBChevronView *_sideSwitcherGrabberView;
    SBLayoutElementPinResizeGrabberView *_pinResizeGrabberView;
    double _pinResizeGrabberHorizontalOffset;
    double _pinResizeGrabberVerticalOffset;
    _Bool _sideSwitcherGrabberPressed;
}

+ (id)sideSwitcherGrabberView;
@property(readonly, nonatomic) SBLayoutElementPinResizeGrabberView *pinResizeGrabberView; // @synthesize pinResizeGrabberView=_pinResizeGrabberView;
@property(readonly, nonatomic) SBSceneDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic, getter=isSideSwitcherGrabberPressed) _Bool sideSwitcherGrabberPressed; // @synthesize sideSwitcherGrabberPressed=_sideSwitcherGrabberPressed;
@property(nonatomic) double pinResizeGrabberVerticalOffset; // @synthesize pinResizeGrabberVerticalOffset=_pinResizeGrabberVerticalOffset;
@property(nonatomic) double pinResizeGrabberHorizontalOffset; // @synthesize pinResizeGrabberHorizontalOffset=_pinResizeGrabberHorizontalOffset;
@property(nonatomic) long long sideSwitcherGrabberStyle; // @synthesize sideSwitcherGrabberStyle=_sideSwitcherGrabberStyle;
@property(nonatomic) long long dimmingLevel; // @synthesize dimmingLevel=_dimmingLevel;
- (void).cxx_destruct;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)_updateGrabberColorAndVisibility;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)_pinResizeGrabberHitTestFrame;
@property(readonly, nonatomic) struct CGRect pinResizeGrabberFrame;
- (void)setWantsPinResizeGrabber:(_Bool)arg1 withPercent:(double)arg2;
@property(nonatomic) _Bool wantsPinResizeGrabber;
- (void)setDimmingLevel:(long long)arg1 withPercent:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

