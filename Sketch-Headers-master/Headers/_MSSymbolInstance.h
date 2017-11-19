//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStyledLayer.h"

@class NSDictionary, NSString;

@interface _MSSymbolInstance : MSStyledLayer
{
    double _horizontalSpacing;
    double _masterInfluenceEdgeMaxXPadding;
    double _masterInfluenceEdgeMaxYPadding;
    double _masterInfluenceEdgeMinXPadding;
    double _masterInfluenceEdgeMinYPadding;
    NSDictionary *_overrides;
    NSString *_symbolID;
    double _verticalSpacing;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(retain, nonatomic) NSString *symbolID; // @synthesize symbolID=_symbolID;
@property(retain, nonatomic) NSDictionary *overrides; // @synthesize overrides=_overrides;
@property(nonatomic) double masterInfluenceEdgeMinYPadding; // @synthesize masterInfluenceEdgeMinYPadding=_masterInfluenceEdgeMinYPadding;
@property(nonatomic) double masterInfluenceEdgeMinXPadding; // @synthesize masterInfluenceEdgeMinXPadding=_masterInfluenceEdgeMinXPadding;
@property(nonatomic) double masterInfluenceEdgeMaxYPadding; // @synthesize masterInfluenceEdgeMaxYPadding=_masterInfluenceEdgeMaxYPadding;
@property(nonatomic) double masterInfluenceEdgeMaxXPadding; // @synthesize masterInfluenceEdgeMaxXPadding=_masterInfluenceEdgeMaxXPadding;
@property(nonatomic) double horizontalSpacing; // @synthesize horizontalSpacing=_horizontalSpacing;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

