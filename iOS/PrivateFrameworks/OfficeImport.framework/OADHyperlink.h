//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface OADHyperlink : NSObject
{
    NSURL *mTargetLocation;
    int mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
    _Bool mDoEndSound;
    _Bool mIsVisited;
    _Bool mDoAddToHistory;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool doAddToHistory; // @synthesize doAddToHistory=mDoAddToHistory;
@property(nonatomic) _Bool isVisited; // @synthesize isVisited=mIsVisited;
@property(nonatomic) _Bool doEndSound; // @synthesize doEndSound=mDoEndSound;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setInvalidUrl:(id)arg1;
- (id)invalidUrl;
- (void)setTooltip:(id)arg1;
- (id)tooltip;
- (void)setAction:(id)arg1;
- (id)action;
- (void)setTargetFrame:(id)arg1;
- (id)targetFrame;
- (void)setTargetMode:(int)arg1;
- (int)targetMode;
- (void)setTargetLocation:(id)arg1;
- (id)targetLocation;
- (id)init;

@end

