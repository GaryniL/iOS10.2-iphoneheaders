/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSTableCell.h>

@class AXCaptionPreviewView, AXCloudShadowView;

@interface AXCaptionPreviewCell : PSTableCell {

	AXCaptionPreviewView* _captionPreviewView;
	AXCloudShadowView* _shadowView;
	double _xOffset;

}

@property (nonatomic,readonly) double xOffset;              //@synthesize xOffset=_xOffset - In the implementation block
+(CGSize)imageSize;
+(CGSize)previewSize;
-(id)captionPreviewView;
-(double)xOffset;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(BOOL)cellEnabled;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

