//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookCore/ABSearchElement.h>

#import <AddressBookCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface ABSearchElementMatch : ABSearchElement <NSSecureCoding>
{
    NSString *_searchProperty;
    long long _searchPropertyType;
    id _searchValue;
    long long _searchValueType;
    NSString *_searchLabel;
    NSString *_searchKey;
    long long _testCase;
    BOOL _searchPeople;
    BOOL _searchSubscribed;
    BOOL _diacriticInsensitive;
    long long _comparison;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
- (id)decodeAccountWithCoder:(id)arg1;
- (id)addressBookWithCoder:(id)arg1 databaseDirectory:(id)arg2;
- (id)decodeDatabasePathWithCoder:(id)arg1;
- (id)decodeParentGroupsWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)encodingVersion;
- (id)initWithCoder:(id)arg1;
- (id)storesInAddressBook:(id)arg1 exceptStore:(id)arg2;
- (id)affectedStoresInAddressBook:(id)arg1;
- (id)_withinDate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_isNegation;
- (BOOL)isSimpleSearch;
- (long long)_comparison;
- (BOOL)diacriticInsensitiveOption;
- (void)setDiacriticInsensitiveOption:(BOOL)arg1;
- (id)prefetchingRelationshipKeyPathsForImplClass:(Class)arg1 inAddressBook:(id)arg2;
- (id)_searchProperty;
- (id)_key;
- (id)_label;
- (id)_value;
- (BOOL)searchSubscribed;
- (BOOL)searchPeople;
- (id)groupsUsedInDefinition;
- (BOOL)usesGroupInDefinition:(id)arg1;
- (BOOL)searchGroups;
- (id)searchRecordClasses;
- (BOOL)matchesRecord:(id)arg1;
- (BOOL)predicateMatchesRecord:(id)arg1;
- (BOOL)nts_MatchesRecord:(id)arg1;
- (BOOL)_compareMultiNoLabelDictionaryNoKeyWithRecordValue:(id)arg1;
- (BOOL)_compareMultiNoLabelDictionaryKeyWithRecordValue:(id)arg1;
- (BOOL)_compareMultiNoLabelArrayWithRecordValue:(id)arg1;
- (BOOL)_compareMultiNoLabelScalarWithRecordValue:(id)arg1;
- (BOOL)_compareMultiLabelDictionaryNoKeyWithRecordValue:(id)arg1;
- (BOOL)_compareMultiLabelDictionaryKeyWithRecordValue:(id)arg1;
- (BOOL)_compareMultiLabelArrayWithRecordValue:(id)arg1;
- (BOOL)_compareMultiLabelScalarWithRecordValue:(id)arg1;
- (BOOL)_compareSingleDictionaryNoKeyWithRecordValue:(id)arg1;
- (BOOL)_compareSingleDictionaryKeyWithRecordValue:(id)arg1;
- (BOOL)_compareSingleArrayWithRecordValue:(id)arg1;
- (BOOL)_compareSingleScalarWithRecordValue:(id)arg1;
- (id)_valueInMultiValue:(id)arg1;
- (BOOL)compareWithRecordValue:(id)arg1;
- (id)_predicateForImplClass:(Class)arg1 context:(id)arg2 basePersistenceURL:(id)arg3;
- (id)_predicateForImplClass:(Class)arg1 addressBook:(id)arg2;
- (BOOL)isReferencingGroup:(id)arg1;
- (id)_predicateForCustomProperty:(id)arg1 comparison:(long long)arg2 value:(id)arg3 label:(id)arg4;
- (id)_predicateForMessagingAddressService:(id)arg1 comparison:(long long)arg2 value:(id)arg3 label:(id)arg4;
- (id)_predicateForToManyRelationshipName:(id)arg1 relativeKeyPath:(id)arg2 comparison:(long long)arg3 value:(id)arg4 label:(id)arg5;
- (id)_predicateForYearlessSearchOnDatePropertyKeyPath:(id)arg1 toManyRelationshipName:(id)arg2 futureOnly:(BOOL)arg3 allNotMatch:(BOOL)arg4 customPropertyPath:(id)arg5 customProperty:(id)arg6 searchValue:(id)arg7 label:(id)arg8;
- (id)_predicateForUnknownKeyWithComparison:(long long)arg1 value:(id)arg2;
- (id)_predicateForKeyPath:(id)arg1 comparison:(long long)arg2 value:(id)arg3;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 label:(id)arg2 key:(id)arg3 value:(id)arg4 searchPeople:(BOOL)arg5 comparison:(long long)arg6;
- (id)initWithProperty:(id)arg1 label:(id)arg2 key:(id)arg3 value:(id)arg4 searchPeople:(BOOL)arg5 searchSubscribed:(BOOL)arg6 comparison:(long long)arg7;
- (void)setSearchValue:(id)arg1;
- (void)_nts_CalculatePropertyTypeForRecord:(id)arg1;
- (id)description;
- (id)_remoteSearchElementWithPublicClass:(Class)arg1;

@end

