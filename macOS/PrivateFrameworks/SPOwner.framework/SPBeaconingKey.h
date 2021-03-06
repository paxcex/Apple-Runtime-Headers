//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSData, NSDateInterval;

@interface SPBeaconingKey : NSObject <NSCopying, NSSecureCoding>
{
    NSDateInterval *_dateInterval;
    NSData *_key;
    NSData *_secondaryKey;
    unsigned long long _primaryIndex;
    unsigned long long _secondaryIndex;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long secondaryIndex; // @synthesize secondaryIndex=_secondaryIndex;
@property(nonatomic) unsigned long long primaryIndex; // @synthesize primaryIndex=_primaryIndex;
@property(copy, nonatomic) NSData *secondaryKey; // @synthesize secondaryKey=_secondaryKey;
@property(copy, nonatomic) NSData *key; // @synthesize key=_key;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDateInterval:(id)arg1 key:(id)arg2 secondaryKey:(id)arg3 primaryIndex:(unsigned long long)arg4 secondaryIndex:(unsigned long long)arg5;
- (id)initWithDateInterval:(id)arg1 key:(id)arg2;

@end

