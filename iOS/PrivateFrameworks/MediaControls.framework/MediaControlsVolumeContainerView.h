//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaControls/UIGestureRecognizerDelegate-Protocol.h>

@class MTVisualStylingProvider, MediaControlsRelativeVolumeStepper, MediaControlsVolumeSlider, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsVolumeContainerView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _transitioning;
    _Bool _onScreen;
    unsigned int _volumeCapabilities;
    MediaControlsVolumeSlider *_volumeSlider;
    long long _style;
    MTVisualStylingProvider *_visualStylingProvider;
    MediaControlsRelativeVolumeStepper *_volumeStepper;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int volumeCapabilities; // @synthesize volumeCapabilities=_volumeCapabilities;
@property(retain, nonatomic) MediaControlsRelativeVolumeStepper *volumeStepper; // @synthesize volumeStepper=_volumeStepper;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) MediaControlsVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateVolumeCapabilities;
- (void)_updateVolumeStyle;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 slider:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

