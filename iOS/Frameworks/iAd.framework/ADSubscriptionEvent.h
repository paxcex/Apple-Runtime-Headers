//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface ADSubscriptionEvent : NSObject <NSCopying>
{
    long long _type;
    NSString *_qToken;
    NSString *_sourceID;
    double _eventTime;
    NSDictionary *_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(nonatomic) double eventTime; // @synthesize eventTime=_eventTime;
@property(retain, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(retain, nonatomic) NSString *qToken; // @synthesize qToken=_qToken;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 withQToken:(id)arg2 withSourceID:(id)arg3 withEventTime:(double)arg4 withInfo:(id)arg5;

@end

