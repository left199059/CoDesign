//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSBaseGrid.h"

@interface MSBaseGrid : _MSBaseGrid
{
    BOOL _forceDraw;
}

+ (BOOL)displayableAtZoom:(double)arg1;
+ (void)initialize;
@property(nonatomic) BOOL forceDraw; // @synthesize forceDraw=_forceDraw;
- (void)drawInRect:(struct CGRect)arg1 baseLine:(struct CGPoint)arg2 atZoom:(double)arg3;
- (BOOL)shouldDraw;
- (void)setIsEnabled:(BOOL)arg1;
- (id)horizontalGuidesForRulerData:(id)arg1 inRect:(struct CGRect)arg2;
- (id)verticalGuidesForRulerData:(id)arg1 inRect:(struct CGRect)arg2;

@end

