//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIDebugViewDefaults : NSObject
{
    _Bool _defaultBoolValue;
    _Bool _integerValueType;
    NSString *_title;
    NSString *_subtitle;
    NSString *_domain;
    NSString *_defaultName;
    unsigned long long _defaultIntegerValue;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long defaultIntegerValue; // @synthesize defaultIntegerValue=_defaultIntegerValue;
@property(nonatomic) _Bool integerValueType; // @synthesize integerValueType=_integerValueType;
@property(nonatomic) _Bool defaultBoolValue; // @synthesize defaultBoolValue=_defaultBoolValue;
@property(readonly, nonatomic) NSString *defaultName; // @synthesize defaultName=_defaultName;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)toggleDefaultBoolValue;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 domain:(id)arg3 defaultName:(id)arg4 boolType:(_Bool)arg5;

@end

