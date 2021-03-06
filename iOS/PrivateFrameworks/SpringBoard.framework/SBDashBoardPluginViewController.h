//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <SpringBoard/SBLockScreenPluginDelegate-Protocol.h>

@class NSString, SBLockScreenPlugin;

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate>
{
    SBLockScreenPlugin *_plugin;
}

+ (Class)viewClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) SBLockScreenPlugin *plugin; // @synthesize plugin=_plugin;
- (long long)_presentationPriority;
- (void)_updateLegibility;
- (_Bool)handleEvent:(id)arg1;
- (void)pluginAppearanceDidChange:(id)arg1;
- (id)coverSheetIdentifier;
- (long long)presentationType;
- (long long)presentationPriority;
- (long long)presentationTransition;
- (long long)presentationStyle;
- (void)willTransitionToPresented:(_Bool)arg1;
- (id)displayLayoutElementIdentifier;
- (void)updateForPresentation:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (id)succinctDescriptionBuilder;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)view;
- (id)initWithLockScreenPlugin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

