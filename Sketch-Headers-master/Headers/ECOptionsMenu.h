//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECDebugMenu.h"

@class NSDictionary;

@interface ECOptionsMenu : ECDebugMenu
{
    NSDictionary *_options;
}

@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (void)valueSelected:(id)arg1;
- (void)optionSelected:(id)arg1;
- (void)buildMenuWithOptions:(id)arg1 action:(SEL)arg2;
- (void)setupAsRootMenu;
- (void)dealloc;
- (void)awakeFromNib;

@end

