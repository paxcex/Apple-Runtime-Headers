//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSessionConfiguration : NSObject
{
    unsigned long long _maxRemoteParticipants;
    long long _sessionMode;
    id _reportingHierarchyToken;
}

@property(retain, nonatomic) id reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(nonatomic) long long sessionMode; // @synthesize sessionMode=_sessionMode;
@property(nonatomic) unsigned long long maxRemoteParticipants; // @synthesize maxRemoteParticipants=_maxRemoteParticipants;
- (_Bool)applyConfigurationUsingClientDict:(id)arg1;
- (_Bool)updateWithClientDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithClientDictionary:(id)arg1;

@end

