/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>
#import <libobjc.A.dylib/SBFScreenFadeReplicatable.h>

@class _UILegibilitySettings, SBUILegibilityView, NSString;

@interface SBLockScreenTimerDialView : UIView <SBUILegibility, SBFScreenFadeReplicatable> {

	double _strength;
	_UILegibilitySettings* _legibilitySettings;
	SBUILegibilityView* _dialView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(id)replicate;
-(id)_imageNameForCurrentContentSize:(id)arg1 ;
-(id)_newDialViewForSettings:(id)arg1 ;
@end

