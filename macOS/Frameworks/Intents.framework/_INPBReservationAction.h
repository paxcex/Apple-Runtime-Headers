//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBReservationAction-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBUserActivity;

@interface _INPBReservationAction : PBCodable <_INPBReservationAction, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    BOOL __encodeLegacyGloryData;
    int _type;
    _INPBUserActivity *_userActivity;
    _INPBDateTimeRange *_validDuration;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBDateTimeRange *validDuration; // @synthesize validDuration=_validDuration;
@property(retain, nonatomic) _INPBUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasValidDuration;
@property(readonly, nonatomic) BOOL hasUserActivity;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

