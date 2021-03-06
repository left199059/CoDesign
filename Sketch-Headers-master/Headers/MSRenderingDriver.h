//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface MSRenderingDriver : NSObject
{
    NSMapTable *_renderers;
}

+ (id)defaultDriver;
@property(retain, nonatomic) NSMapTable *renderers; // @synthesize renderers=_renderers;
- (void).cxx_destruct;
- (id)contextForCGContext:(struct CGContext *)arg1;
- (id)contextForCGContext:(struct CGContext *)arg1 zoomLevel:(double)arg2 document:(id)arg3;
- (id)rendererForObject:(id)arg1 protocol:(id)arg2;
- (void)addRenderersForSubclasses:(id)arg1;
- (id)setupRendererMap;
- (id)init;

@end

