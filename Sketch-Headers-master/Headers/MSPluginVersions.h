//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface MSPluginVersions : NSObject
{
    NSString *_identifier;
    NSURL *_appcastURL;
    NSMutableDictionary *__versionsDictionary;
}

@property(readonly, nonatomic) NSMutableDictionary *_versionsDictionary; // @synthesize _versionsDictionary=__versionsDictionary;
@property(readonly, copy, nonatomic) NSURL *appcastURL; // @synthesize appcastURL=_appcastURL;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isUpdateAvailableForVersion:(id)arg1;
@property(readonly, copy, nonatomic) NSString *latestVersionAvailable;
@property(readonly, copy, nonatomic) NSDictionary *versionsDictionary;
- (BOOL)isVersionListed:(id)arg1;
- (BOOL)isVersionDownloaded:(id)arg1;
- (id)downloadURLForVersion:(id)arg1;
- (void)addVersions:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *versions;
- (id)initWithIdentifier:(id)arg1 appcastURL:(id)arg2;

@end

