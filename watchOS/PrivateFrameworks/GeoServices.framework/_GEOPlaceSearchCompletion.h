//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOCompletion-Protocol.h>

@class GEOAutocompleteSessionData, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchCompletion : NSObject <GEOCompletion>
{
    NSArray *_groups;
    GEOAutocompleteSessionData *_sessionData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOAutocompleteSessionData *sessionData; // @synthesize sessionData=_sessionData;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
- (id)initWithResponse:(id)arg1 traits:(id)arg2 sessionData:(id)arg3 mapItems:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

