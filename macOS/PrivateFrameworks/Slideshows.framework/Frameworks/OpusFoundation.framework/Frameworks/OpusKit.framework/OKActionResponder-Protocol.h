//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class NSString, OFNSView, OKAction;

@protocol OKActionResponder <NSObject>
@property(readonly) OFNSView *actionView;
- (BOOL)performActionScript:(NSString *)arg1 withAction:(OKAction *)arg2;
- (BOOL)sendAction:(OKAction *)arg1 toTarget:(NSString *)arg2;
@end

