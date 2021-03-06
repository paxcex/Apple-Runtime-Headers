//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVUIKit/TVLockupView.h>

@class NSString, UIImage, UIView;

@interface TVSMModuleButtonView : TVLockupView
{
    long long _style;
    UIImage *_image;
    NSString *_imageSymbolName;
    NSString *_titleText;
    NSString *_secondaryText;
    UIView *_moduleContentView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *moduleContentView; // @synthesize moduleContentView=_moduleContentView;
@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) NSString *imageSymbolName; // @synthesize imageSymbolName=_imageSymbolName;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

