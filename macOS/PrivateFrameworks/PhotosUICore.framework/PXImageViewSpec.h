//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXViewSpec.h>

@class NSArray;

@interface PXImageViewSpec : PXViewSpec
{
    BOOL _shouldEnableFocus;
    NSArray *_overlaySpecs;
    long long _roundedCornersMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long roundedCornersMode; // @synthesize roundedCornersMode=_roundedCornersMode;
@property(nonatomic) BOOL shouldEnableFocus; // @synthesize shouldEnableFocus=_shouldEnableFocus;
@property(copy, nonatomic) NSArray *overlaySpecs; // @synthesize overlaySpecs=_overlaySpecs;
@property(readonly, nonatomic) double focusedSizeIncrease;
@property(readonly, nonatomic) struct CGSize floatingUnfocusedShadowExpansion;
@property(readonly, nonatomic) double floatingUnfocusedShadowVerticalOffset;
@property(readonly, nonatomic) double floatingShadowRadius;
@property(readonly, nonatomic) double floatingUnfocusedShadowRadius;
@property(readonly, nonatomic) double floatingShadowOpacity;
@property(readonly, nonatomic) double floatingUnfocusedShadowOpacity;
@property(readonly, nonatomic) struct CGPoint floatingContentMotionTranslation;
@property(readonly, nonatomic) struct CGPoint floatingContentMotionRotation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

