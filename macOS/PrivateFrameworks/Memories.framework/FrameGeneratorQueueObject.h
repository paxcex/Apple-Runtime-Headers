//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetImageGenerator, NSArray;

__attribute__((visibility("hidden")))
@interface FrameGeneratorQueueObject : NSObject
{
    AVAssetImageGenerator *m_whichInstance;
    CDUnknownBlockType m_completionBlock;
    NSArray *m_times;
}

+ (id)queueObjectForGenerator:(id)arg1 withTimes:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) AVAssetImageGenerator *generator; // @synthesize generator=m_whichInstance;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=m_completionBlock;
@property(retain, nonatomic) NSArray *times; // @synthesize times=m_times;
- (id)description;
- (void)dealloc;

@end

