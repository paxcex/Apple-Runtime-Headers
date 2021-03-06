//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRCroppingSprite;

@interface MREffectShadedColors : MREffect
{
    MRCroppingSprite *_sprite;
    float _primaryColor[4];
    float _secondaryColor[4];
}

+ (void)initialize;
- (void)_unload;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)setAttributes:(id)arg1;

@end

