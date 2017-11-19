//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSPath, NSArray;

@interface MSBezierContour : NSObject
{
    BOOL _clockwise;
    struct CGRect _bounds;
    BOOL _closed;
    BOOL _cachedClockwise;
    BOOL _cachedBounds;
    NSArray *_segments;
    MSPath *_path;
}

+ (id)contourWithRect:(struct CGRect)arg1;
@property(nonatomic) BOOL cachedBounds; // @synthesize cachedBounds=_cachedBounds;
@property(nonatomic) BOOL cachedClockwise; // @synthesize cachedClockwise=_cachedClockwise;
@property(retain, nonatomic) MSPath *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic, getter=isClosed) BOOL closed; // @synthesize closed=_closed;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)contourWithInset:(double)arg1;
- (id)rejoinSegments:(id)arg1 closed:(BOOL)arg2;
- (id)segmentsByJoiningCurveSegment1:(id)arg1 withLineSegment2:(id)arg2;
- (id)segmentsByJoiningLineSegment1:(id)arg1 withCurveSegment2:(id)arg2;
- (id)segmentsByJoiningLineSegment1:(id)arg1 withLineSegment2:(id)arg2;
- (id)simplifiedSegments;
- (id)simplifySegment:(id)arg1;
- (id)simplifiedSegmentsBySplittingSegment:(id)arg1 atOffset:(double)arg2;
- (id)closestOffsetGreaterThan:(double)arg1 inSet:(id)arg2;
- (id)closestOffsetLessThan:(double)arg1 inSet:(id)arg2;
- (id)firstOffsetInBezierIntervalFromSet:(id)arg1;
- (id)segmentBeforeSegment:(id)arg1 inArray:(id)arg2 closed:(BOOL)arg3;
- (id)segmentAfterSegment:(id)arg1 inArray:(id)arg2 closed:(BOOL)arg3;
- (id)segmentAfter:(id)arg1;
- (id)segmentBefore:(id)arg1;
- (id)reversedContour;
@property(nonatomic, getter=isClockwise) BOOL clockwise;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithSegments:(id)arg1 closed:(BOOL)arg2;

@end

