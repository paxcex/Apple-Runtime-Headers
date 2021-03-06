//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PHFetchResult, PXGadgetDataSourceManager;
@protocol PXContentUnavailablePlaceholderManagerDelegate;

@interface PXContentUnavailablePlaceholderManager : NSObject <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver>
{
    struct {
        _Bool didChange;
    } _delegateRespondsTo;
    _Bool _dataSourceEmpty;
    _Bool _libraryEmpty;
    id <PXContentUnavailablePlaceholderManagerDelegate> _delegate;
    NSString *_customTitle;
    NSString *_customMessage;
    PXGadgetDataSourceManager *_gadgetDataSourceManager;
    PHFetchResult *_singleAssetFetchResult;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isLibraryEmpty) _Bool libraryEmpty; // @synthesize libraryEmpty=_libraryEmpty;
@property(nonatomic, getter=isDataSourceEmpty) _Bool dataSourceEmpty; // @synthesize dataSourceEmpty=_dataSourceEmpty;
@property(retain, nonatomic) PHFetchResult *singleAssetFetchResult; // @synthesize singleAssetFetchResult=_singleAssetFetchResult;
@property(retain, nonatomic) PXGadgetDataSourceManager *gadgetDataSourceManager; // @synthesize gadgetDataSourceManager=_gadgetDataSourceManager;
@property(readonly, nonatomic) NSString *customMessage; // @synthesize customMessage=_customMessage;
@property(readonly, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(nonatomic) __weak id <PXContentUnavailablePlaceholderManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_invalidate;
- (void)_gadgetDataSourceDidChange;
- (void)performPlaceholderButtonAction;
@property(readonly, nonatomic) NSString *placeholderButtonTitle;
@property(readonly, nonatomic) NSString *placeholderMessage;
@property(readonly, nonatomic) NSString *placeholderTitle;
@property(readonly, nonatomic) _Bool wantsPlaceholder;
- (id)initWithGadgetDataSourceManager:(id)arg1 customTitle:(id)arg2 customMessage:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

