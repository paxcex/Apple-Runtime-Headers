//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class MFComposeSubjectView, MFMailComposeHeaderView;

@interface _MFMailComposePlaceholderView : UIScrollView
{
    MFMailComposeHeaderView *_toField;
    MFMailComposeHeaderView *_multiView;
    MFComposeSubjectView *_subjectView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSubject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

