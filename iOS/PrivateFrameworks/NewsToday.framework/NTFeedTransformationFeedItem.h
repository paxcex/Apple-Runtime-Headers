//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTFeedTransformationItem-Protocol.h>

@class NSDate, NSString, NTPBFeedItem, SFSearchResult;
@protocol FCFeedTransformationItem;

@interface NTFeedTransformationFeedItem : NSObject <NTFeedTransformationItem>
{
    NSDate *_cacheExpirationDate;
    SFSearchResult *_searchResult;
    NTPBFeedItem *_feedItem;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NTPBFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, copy, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, copy, nonatomic) NSDate *cacheExpirationDate; // @synthesize cacheExpirationDate=_cacheExpirationDate;
- (id)protoitemWithFetchedFeedItemHeadline:(id)arg1;
@property(readonly, copy, nonatomic) NTPBFeedItem *feedItemForHeadlineFetch;
@property(readonly, nonatomic) _Bool needsFeedItemHeadlinesFetch;
@property(readonly, nonatomic) id <FCFeedTransformationItem> feedTransformationItem;
@property(readonly, nonatomic) _Bool usesDynamicSlotAllocation;
@property(readonly, nonatomic, getter=isEligibleForLeadingCellAppearance) _Bool eligibleForLeadingCellAppearance;
@property(readonly, copy, nonatomic) NSDate *cacheCutoffTimeRelativeDate;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, nonatomic) unsigned long long todayItemType;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFeedItem:(id)arg1 cacheExpirationDate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long preferredDynamicSlotAllocation;
@property(readonly) Class superclass;

@end

