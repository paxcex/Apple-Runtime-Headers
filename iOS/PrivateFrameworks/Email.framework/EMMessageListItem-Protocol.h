//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMCollectionItem-Protocol.h>
#import <Email/EMObject-Protocol.h>

@class ECMessageFlags, ECSubject, EMMessage, EMObjectID, NSArray, NSDate, NSIndexSet, NSString;
@protocol EMCollectionItemID;

@protocol EMMessageListItem <EMCollectionItem, EMObject>
@property(readonly) _Bool isEditable;
@property(readonly) _Bool shouldArchiveByDefault;
@property(readonly) _Bool supportsArchiving;
@property(readonly) _Bool deleteMovesToTrash;
@property(readonly) EMMessage *displayMessage;
@property(readonly) EMObjectID *displayMessageObjectID;
@property(readonly) id <EMCollectionItemID> displayMessageItemID;
@property(readonly, copy) NSArray *mailboxes;
@property(readonly, copy) NSArray *mailboxObjectIDs;
@property(readonly) long long conversationID;
@property(readonly) unsigned long long count;
@property(readonly) long long conversationNotificationLevel;
@property(readonly) _Bool hasAttachments;
@property(readonly) _Bool isCCMe;
@property(readonly) _Bool isToMe;
@property(readonly) _Bool isBlocked;
@property(readonly) _Bool isVIP;
@property(readonly, copy) NSIndexSet *flagColors;
@property(readonly) _Bool hasUnflagged;
@property(readonly) ECMessageFlags *flags;
@property(readonly, copy) NSArray *ccList;
@property(readonly, copy) NSArray *toList;
@property(readonly, copy) NSArray *senderList;
@property(readonly, copy) NSString *summary;
@property(readonly) ECSubject *subject;
@property(readonly) NSDate *date;
@end

