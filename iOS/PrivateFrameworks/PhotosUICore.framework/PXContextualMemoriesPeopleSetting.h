//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXContextualMemoriesSetting-Protocol.h>

@class NSArray, NSString;

@interface PXContextualMemoriesPeopleSetting : NSObject <PXContextualMemoriesSetting>
{
    NSArray *_peopleNames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *peopleNames; // @synthesize peopleNames=_peopleNames;
- (void)requestPeopleNamesUpdateSinceDate:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resetToDefault;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *headerTitle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

