//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL, SMKMirrorController;

@protocol SMKMirrorControllerDelegate <NSObject>

@optional
- (void)mirrorController:(SMKMirrorController *)arg1 didChangeWebURL:(NSURL *)arg2;
- (void)mirrorController:(SMKMirrorController *)arg1 didChangeClients:(NSArray *)arg2;
@end

