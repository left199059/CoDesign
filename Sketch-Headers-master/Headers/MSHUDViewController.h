//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSTextField;

@interface MSHUDViewController : NSViewController
{
    NSTextField *_fps;
    NSTextField *_fpsTrend;
    NSTextField *_selection;
    NSTextField *_hovered;
    double *_buffer;
    unsigned long long _bufferPosition;
}

@property(nonatomic) unsigned long long bufferPosition; // @synthesize bufferPosition=_bufferPosition;
@property(nonatomic) double *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) __weak NSTextField *hovered; // @synthesize hovered=_hovered;
@property(nonatomic) __weak NSTextField *selection; // @synthesize selection=_selection;
@property(nonatomic) __weak NSTextField *fpsTrend; // @synthesize fpsTrend=_fpsTrend;
@property(nonatomic) __weak NSTextField *fps; // @synthesize fps=_fps;
- (void).cxx_destruct;
- (void)updateAverage:(double)arg1;
- (void)updateSelection:(id)arg1;
- (void)updateHoveredLayer:(id)arg1;
- (void)hoveredChangedNotification:(id)arg1;
- (void)selectionChangedNotification:(id)arg1;
- (void)uninstallMonitorForClient:(id)arg1;
- (void)installMonitorForClient:(id)arg1;
- (void)updateForClient:(id)arg1;
- (void)unregisterForNotificationsForClient:(id)arg1;
- (void)registerForNotificationsForClient:(id)arg1;
- (void)stopTrackingClient:(id)arg1;
- (void)startTrackingClient:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (id)client;

@end

