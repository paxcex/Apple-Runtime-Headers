//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>

#import <FileProviderUI/FPUIAuthenticationServerInfoDelegate-Protocol.h>
#import <FileProviderUI/UITextFieldDelegate-Protocol.h>

@class FPUIAuthenticationSectionDescriptor, NSArray, NSMutableArray, NSString, NSURL, UITextField;

@interface FPUIAuthenticationLandingViewController : FPUIAuthenticationTableViewController <UITextFieldDelegate, FPUIAuthenticationServerInfoDelegate>
{
    FPUIAuthenticationSectionDescriptor *_recentServersSection;
    NSMutableArray *_recentServersRowDescriptors;
    UITextField *_serverInputTextField;
    NSURL *_initialURL;
    NSURL *_sanitizedURL;
    NSURL *_initialUsername;
    NSArray *_recentServers;
    NSURL *_initialConnectionURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *initialConnectionURL; // @synthesize initialConnectionURL=_initialConnectionURL;
- (void)removeServerWithRepresentation:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)_canMoveToNextStep;
- (void)_connectToServer:(id)arg1;
- (void)_connect:(id)arg1;
- (void)_disectURLToComponents:(id)arg1;
- (void)_updateNextStep;
- (void)_transitionUIStateToConnecting;
- (void)authenticationDelegate:(id)arg1 didEncounterError:(id)arg2;
- (void)_showRecentServersSectionWithRecentServers:(id)arg1 rowAnimation:(long long)arg2;
- (void)setupTableViewSections;
- (id)defaultRightBarButtonItem;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

