//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSSliceLayer.h"

#import "MSColorSpaceConvertible.h"
#import "MSLayerWithBackgroundColor.h"

@class NSString;

@interface MSSliceLayer : _MSSliceLayer <MSLayerWithBackgroundColor, MSColorSpaceConvertible>
{
    id <MSSliceLayerWatcher> _sliceWatcher;
}

+ (id)keyPathsForValuesAffectingPreviewImages;
+ (id)sliceLayerFromLayer:(id)arg1;
@property(nonatomic) __weak id <MSSliceLayerWatcher> sliceWatcher; // @synthesize sliceWatcher=_sliceWatcher;
- (void).cxx_destruct;
- (void)convertColorsUsing:(id)arg1;
- (id)immutableBackgroundColor;
- (id)rootForNameUniquing;
- (BOOL)canRotate;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (id)selectionHitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3 resultIndex:(unsigned long long *)arg4;
- (BOOL)canBeTransformed;
- (void)setName:(id)arg1;
- (unsigned long long)filterType;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

