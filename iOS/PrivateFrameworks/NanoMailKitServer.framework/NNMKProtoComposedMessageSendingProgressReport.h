//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSString;

@interface NNMKProtoComposedMessageSendingProgressReport : PBCodable <NSCopying>
{
    NSString *_composedMessageId;
    int _progress;
    struct {
        unsigned int progress:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) int progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSString *composedMessageId; // @synthesize composedMessageId=_composedMessageId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasProgress;
@property(readonly, nonatomic) _Bool hasComposedMessageId;

@end

