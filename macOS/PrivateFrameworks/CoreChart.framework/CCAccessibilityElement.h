//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

@class NSString;

@interface CCAccessibilityElement : NSAccessibilityElement
{
    NSString *label;
    NSString *roleDescription;
    struct CGRect frame;
}

- (void).cxx_destruct;
@property struct CGRect frame; // @synthesize frame;
@property(retain) NSString *roleDescription; // @synthesize roleDescription;
@property(retain) NSString *label; // @synthesize label;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (id)accessibilityLabel;

@end

