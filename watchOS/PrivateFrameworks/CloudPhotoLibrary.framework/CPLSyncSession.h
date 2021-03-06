//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol CPLSyncSessionRescheduler;

@interface CPLSyncSession : NSObject
{
    NSDate *_expectedDate;
    unsigned int _sequenceNumber;
    id <CPLSyncSessionRescheduler> _rescheduler;
}

+ (id)detachedSyncSession;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CPLSyncSessionRescheduler> rescheduler; // @synthesize rescheduler=_rescheduler;
@property(readonly, nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) NSDate *expectedDate; // @synthesize expectedDate=_expectedDate;
@property(readonly, nonatomic) NSString *whenItWillStartDescription;
@property(readonly, nonatomic) _Bool mightNeedForegroundToStart;
- (void)engineIsClosing;
- (void)sessionWontHappen;
- (void)sessionIsDone;
- (void)deferWithBlock:(CDUnknownBlockType)arg1;
- (void)dropExpectedDate;
- (_Bool)isInLessThanTimeInterval:(double)arg1;
- (_Bool)isInMoreThanTimeInverval:(double)arg1;
- (_Bool)isBeforeDate:(id)arg1;
- (_Bool)isAfterDate:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDefer;
@property(readonly, nonatomic, getter=isDetached) _Bool detached;
- (id)description;
- (id)initWithSequenceNumber:(unsigned int)arg1 expectedDate:(id)arg2;

@end

