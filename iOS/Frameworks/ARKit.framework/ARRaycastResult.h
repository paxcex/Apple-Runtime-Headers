//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARAnchor, NSUUID;

@interface ARRaycastResult : NSObject
{
    long long _target;
    long long _targetAlignment;
    ARAnchor *_anchor;
    NSUUID *_anchorIdentifier;
    // Error parsing type: {?="columns"[4]}, name: _worldTransform
    // Error parsing type: {?="columns"[4]}, name: _localTransform
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *anchorIdentifier; // @synthesize anchorIdentifier=_anchorIdentifier;
// Error parsing type for property localTransform:
// Property attributes: T{?=[4]},N,V_localTransform

@property(retain, nonatomic) ARAnchor *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) long long targetAlignment; // @synthesize targetAlignment=_targetAlignment;
@property(nonatomic) long long target; // @synthesize target=_target;
// Error parsing type for property worldTransform:
// Property attributes: T{?=[4]},R,N,V_worldTransform

- (id)description;
- (id)_description:(_Bool)arg1;
-     // Error parsing type: @96@0:8{?=[4]}16q80q88, name: initWithWorldTransform:target:targetAlignment:

@end

