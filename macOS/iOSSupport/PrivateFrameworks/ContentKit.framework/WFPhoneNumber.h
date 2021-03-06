//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface WFPhoneNumber : NSObject <WFNaming, NSCopying, WFSerializableContent>
{
    NSString *_string;
    NSString *_contactName;
    NSString *_label;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)phoneNumberWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3;
+ (id)phoneNumberWithPhoneNumberString:(id)arg1;
+ (id)phoneNumberWithTextCheckingResult:(id)arg1;
+ (BOOL)stringContainsPhoneNumbers:(id)arg1;
+ (id)phoneNumbersInString:(id)arg1 error:(id *)arg2;
+ (id)phoneNumberUtil;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (id)wfSerializedRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *localizedLabel;
@property(readonly, copy, nonatomic) NSString *wfName;
@property(readonly, nonatomic) NSString *normalizedPhoneNumber;
@property(readonly, nonatomic) NSString *formattedPhoneNumber;
- (id)region;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithPhoneNumberString:(id)arg1 contactName:(id)arg2 label:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

