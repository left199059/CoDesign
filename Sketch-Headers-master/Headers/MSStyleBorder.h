//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSStyleBorder.h"

#import "MSColorSpaceConvertible.h"

@class NSString;

@interface MSStyleBorder : _MSStyleBorder <MSColorSpaceConvertible>
{
}

+ (id)defaultFillColor;
- (BOOL)supportsAdvancedBorderSettings;
- (void)multiplyBy:(double)arg1;
- (long long)patternFillType;
- (double)noiseIntensity;
- (void)performInitEmptyObject;
- (id)topViewForColorInspector:(id)arg1;
- (id)blendingViewForColorInspector:(id)arg1;
- (id)CSSAttributeString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

