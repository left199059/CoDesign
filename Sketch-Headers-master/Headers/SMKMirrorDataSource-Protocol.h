//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SMKWebServerDataSource.h"

@class NSDictionary, NSString;

@protocol SMKMirrorDataSource <SMKWebServerDataSource>
@property(readonly) BOOL shouldScrollToSelectedArtboard;
@property(readonly, nonatomic) NSDictionary *manifestContent;
@property(readonly, nonatomic) NSString *currentArtboardID;
@end

