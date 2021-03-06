//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSTimer, TVLElement, TVLMenuElement;
@protocol TVLPreviewFactoryDelegate;

@interface TVLPreviewFactory : NSObject
{
    TVLMenuElement *_menuElement;
    TVLElement *_defaultPreviewElement;
    NSIndexPath *_indexPath;
    id <TVLPreviewFactoryDelegate> _delegate;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <TVLPreviewFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) TVLElement *defaultPreviewElement; // @synthesize defaultPreviewElement=_defaultPreviewElement;
@property(retain, nonatomic) TVLMenuElement *menuElement; // @synthesize menuElement=_menuElement;
- (void)loadPreviewFromURLString:(id)arg1 javascriptContext:(id)arg2 forIndexPath:(id)arg3;
- (id)previewElementAtIndexPath:(id)arg1;
- (id)menuItemElementAtIndexPath:(id)arg1;
- (void)updatePreview:(id)arg1 forIndexPath:(id)arg2;
- (void)timerFired:(id)arg1;
- (void)updatePreview:(id)arg1 forIndexPath:(id)arg2 withHysteresis:(double)arg3;

@end

