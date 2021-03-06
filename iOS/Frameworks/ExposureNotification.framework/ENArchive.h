//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ENArchive : NSObject
{
    struct archive *_archive;
    struct archive_entry *_entry;
    NSString *_originalPath;
    _Bool _endOfArchive;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool endOfArchive; // @synthesize endOfArchive=_endOfArchive;
- (_Bool)skipBytes:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)readDataIntoBuffer:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)cloneToCurrentEntryAndReturnError:(id *)arg1;
- (void)close;
- (_Bool)advanceEntryAndReturnError:(id *)arg1;
@property(readonly, nonatomic) unsigned short entryFileType;
@property(readonly, nonatomic) unsigned long long entrySize;
@property(readonly, copy, nonatomic) NSString *entryPath;
- (void)dealloc;
- (id)initWithPath:(id)arg1 error:(id *)arg2;

@end

