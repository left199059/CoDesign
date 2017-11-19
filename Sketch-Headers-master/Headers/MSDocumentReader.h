//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, NSImage;

@interface MSDocumentReader : NSObject
{
    NSError *_error;
}

+ (id)readerForDocumentAtURL:(id)arg1;
+ (unsigned int)first4bytesOfFileAtURL:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)previewImageWithMaximumSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSImage *previewImage;
@property(readonly, nonatomic) NSDictionary *metadata;
- (id)readImmutableDataWithCorruptionDetected:(char *)arg1 error:(id *)arg2;
- (unsigned long long)validate;
@property(readonly, nonatomic) NSDictionary *UIMetadata;
- (BOOL)open:(id *)arg1;
@property(readonly, nonatomic) long long compatibilityVersion;
@property(readonly, nonatomic) long long version;
@property(readonly, nonatomic) NSArray *missingFonts;
- (void)repair;
@property(readonly, nonatomic) BOOL containsPreviewImage;
@property(readonly, nonatomic) BOOL documentWasMigrated;
- (id)readDataWithCorruptionDetected:(char *)arg1 error:(id *)arg2;

@end

