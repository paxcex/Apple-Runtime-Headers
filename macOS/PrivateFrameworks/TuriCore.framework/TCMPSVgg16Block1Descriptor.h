//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TCMPSConvolutionDescriptor, TCMPSPoolingDescriptor;

__attribute__((visibility("hidden")))
@interface TCMPSVgg16Block1Descriptor : NSObject
{
    TCMPSConvolutionDescriptor *_conv1;
    TCMPSConvolutionDescriptor *_conv2;
    TCMPSPoolingDescriptor *_pooling;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TCMPSPoolingDescriptor *pooling; // @synthesize pooling=_pooling;
@property(retain, nonatomic) TCMPSConvolutionDescriptor *conv2; // @synthesize conv2=_conv2;
@property(retain, nonatomic) TCMPSConvolutionDescriptor *conv1; // @synthesize conv1=_conv1;
- (id)init;

@end

