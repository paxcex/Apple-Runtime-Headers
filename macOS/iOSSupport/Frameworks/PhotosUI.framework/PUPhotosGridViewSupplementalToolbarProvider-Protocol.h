//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray;
@protocol PUPhotosGridViewSupplementalToolbarDataSource;

@protocol PUPhotosGridViewSupplementalToolbarProvider <NSObject>
@property(readonly, copy, nonatomic) NSArray *toolbarItems;
@property(readonly, nonatomic) BOOL shouldShowToolbar;
- (id)initWithDataSource:(id <PUPhotosGridViewSupplementalToolbarDataSource>)arg1;
@end

