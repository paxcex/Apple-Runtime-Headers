//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class UXCollectionView;

@interface UXCollectionDocumentView : NSView
{
    UXCollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UXCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (BOOL)acceptsFirstResponder;
- (void)_invalidateFocus;
- (void)layout;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;

@end

