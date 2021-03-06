//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKTritiumFaceAnimatorBaseStep.h>

@class UIView;
@protocol NTKTritiumAnimator;

@interface NTKTritiumFaceAnimatorTimeStep : NTKTritiumFaceAnimatorBaseStep
{
    UIView<NTKTritiumAnimator> *_timeView;
}

+ (id)stepWithTritiumOnFrameRange:(struct _NSRange)arg1 tritiumOffFrameRange:(struct _NSRange)arg2 timeView:(id)arg3 scale:(float)arg4 scaleType:(int)arg5;
+ (id)stepsWithTritiumOnFrameRange:(struct _NSRange)arg1 tritiumOffFrameRange:(struct _NSRange)arg2 timeViews:(id)arg3 scale:(float)arg4 scaleType:(int)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView<NTKTritiumAnimator> *timeView; // @synthesize timeView=_timeView;
- (void)setIsTritiumOn:(_Bool)arg1 progress:(float)arg2 faceView:(id)arg3;

@end

