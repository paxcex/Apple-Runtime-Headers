//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFControlItem, HUControlPanelController;

@protocol HUControlPanelControllerDelegate <NSObject>

@optional
- (void)controlPanelController:(HUControlPanelController *)arg1 didEndPossibleWritesForControlItem:(HFControlItem *)arg2;
- (void)controlPanelController:(HUControlPanelController *)arg1 willBeginPossibleWritesForControlItem:(HFControlItem *)arg2;
@end

