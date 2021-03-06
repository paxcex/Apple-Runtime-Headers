//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImaging/PADevice.h>

@class NSDictionary, NSObject, NSString, PAOpenGLContextPool, _PALowPriorityOpenGLDevice;
@protocol OS_dispatch_queue;

@interface PAOpenGLDevice : PADevice
{
    int _virtualScreen;
    NSString *_identifier;
    unsigned long long _rendererID;
    NSDictionary *_properties;
    PAOpenGLContextPool *_pool;
    NSObject<OS_dispatch_queue> *_initializationQueue;
    BOOL _initialized;
    NSObject<OS_dispatch_queue> *_deallocQueue;
    _PALowPriorityOpenGLDevice *_lowPriorityDevice;
}

+ (id)deviceWithScreen:(id)arg1;
+ (id)deviceWithOpenGLDisplayMask:(unsigned int)arg1;
+ (id)deviceWithRendererID:(unsigned long long)arg1;
+ (id)deviceWithVirtualScreen:(int)arg1;
+ (id)defaultDevice;
+ (id)_availableDevices;
+ (id)availableDevices;
+ (struct _CGLContextObject *)_sharedContext;
+ (struct _CGLContextObject *)sharedContext;
+ (struct _CGLPixelFormatObject *)_sharedPixelFormat:(BOOL)arg1;
+ (struct _CGLPixelFormatObject *)sharedDeepPixelFormat;
+ (struct _CGLPixelFormatObject *)sharedPixelFormat;
+ (id)discreteDevice;
+ (id)integratedDevice;
- (void).cxx_destruct;
@property(readonly, nonatomic) int virtualScreen; // @synthesize virtualScreen=_virtualScreen;
@property(readonly, nonatomic) unsigned long long rendererID; // @synthesize rendererID=_rendererID;
- (BOOL)isTextureFormatSupported:(int)arg1;
- (BOOL)isExtensionSupported:(id)arg1;
- (id)shadingLanguageVersion;
- (id)openGLRenderer;
- (id)openGLVendor;
- (id)openGLVersion;
- (id)_properties;
- (id)lowPriorityDevice;
- (id)deallocQueue;
- (id)description;
- (int)type;
- (id)identifier;
- (id)_newIdentifierWithVirtualScreen:(int)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned int displayMask;
- (BOOL)_isIntegerInternalFormatSupported:(int)arg1;
- (BOOL)_isInternalFormatSupported:(int)arg1;
- (id)_getString:(unsigned int)arg1;
- (id)_openGLProperties;
- (id)_rendererProperties;
- (id)_deviceProperties;
- (void)_lazyInitOnce;
- (void)_lazyInitOnceIfNeeded;
- (id)_initWithVirtualScreen:(int)arg1;
- (id)renderFormatForPixelFormat:(id)arg1 alpha:(BOOL)arg2;
- (id)extendedRangeRenderFormat;
- (id)renderFormatWithBitDepth:(long long)arg1 alpha:(BOOL)arg2;
- (id)subDeviceWithQoS:(unsigned int)arg1;
- (void)executeBlockWithContext:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PAOpenGLContextPool *contextPool;
- (unsigned long long)textureMemoryInMegaBytes;
- (BOOL)isOffline;
- (BOOL)isAccelerated;
- (BOOL)isEmulated;
- (BOOL)isDiscrete;
- (BOOL)isIntegrated;

@end

