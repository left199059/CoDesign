//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStylePartInspectorViewController.h"

@class MSColorPreviewButton, NSPopUpButton, NSTextField<MSUpDownProtocol>;

@interface MSFillInspectorViewController : MSStylePartInspectorViewController
{
    NSPopUpButton *_blendingPopUpButton;
    MSColorPreviewButton *_colorButton;
    NSTextField<MSUpDownProtocol> *_opacityField;
}

@property(retain, nonatomic) NSTextField<MSUpDownProtocol> *opacityField; // @synthesize opacityField=_opacityField;
@property(retain, nonatomic) MSColorPreviewButton *colorButton; // @synthesize colorButton=_colorButton;
@property(retain, nonatomic) NSPopUpButton *blendingPopUpButton; // @synthesize blendingPopUpButton=_blendingPopUpButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)opacityFieldAction:(id)arg1;
- (void)prepare;
- (void)viewDidLoad;

@end

