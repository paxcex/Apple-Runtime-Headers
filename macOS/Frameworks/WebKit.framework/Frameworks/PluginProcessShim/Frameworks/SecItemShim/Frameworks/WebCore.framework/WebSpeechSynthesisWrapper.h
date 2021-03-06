//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/NSSpeechSynthesizerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebSpeechSynthesisWrapper : NSObject <NSSpeechSynthesizerDelegate>
{
    struct PlatformSpeechSynthesizer *m_synthesizerObject;
    struct PlatformSpeechSynthesisUtterance *m_utterance;
    struct RetainPtr<NSSpeechSynthesizer> m_synthesizer;
    float m_basePitch;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)arg1 willSpeakWord:(struct _NSRange)arg2 ofString:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (void)invalidate;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)speakUtterance:(struct PlatformSpeechSynthesisUtterance *)arg1;
- (void)updateBasePitchForSynthesizer;
- (float)convertPitchToNSSpeechValue:(float)arg1;
- (float)convertRateToWPM:(float)arg1;
- (id)initWithSpeechSynthesizer:(struct PlatformSpeechSynthesizer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

