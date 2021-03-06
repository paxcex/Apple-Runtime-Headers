//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex;

@interface INUpcomingMediaManager : NSObject
{
    CSSearchableIndex *_index;
}

+ (id)sharedManager;
+ (id)mediaQueue;
- (void).cxx_destruct;
@property(readonly) CSSearchableIndex *index; // @synthesize index=_index;
- (id)keyWithMediaItemTypeName:(id)arg1 bundleId:(id)arg2;
- (long long)_predictionModeForBundleId:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (void)setPredictionMode:(long long)arg1 forType:(long long)arg2;
- (void)_replaceMediaIntents:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_setSuggestedMediaIntents:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setSuggestedMediaIntents:(id)arg1;
- (id)initWithSearchableIndex:(id)arg1;

@end

