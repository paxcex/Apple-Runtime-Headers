//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSLRUCache;
@protocol OS_dispatch_queue;

@interface ISURLBagCache : NSObject
{
    SSLRUCache *_cachedBags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)URLWithBagContext:(id)arg1;
+ (id)sharedCache;
- (void).cxx_destruct;
- (id)_newRequestWithURLBagContext:(id)arg1;
- (void)_storeFrontChangedNotification:(id)arg1;
- (id)URLBagForContext:(id)arg1 withOptions:(int)arg2;
- (id)URLBagForContext:(id)arg1;
- (void)invalidateURLBagForContext:(id)arg1;
- (void)invalidateAllURLBags;
- (void)addURLBag:(id)arg1;
- (void)dealloc;
- (id)init;

@end

