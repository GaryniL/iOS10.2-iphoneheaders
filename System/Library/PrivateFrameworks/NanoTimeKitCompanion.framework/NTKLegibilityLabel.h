/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UILabel.h>
#import <libobjc.A.dylib/NTKLegibilityView.h>

@class UIColor, NSString;

@interface NTKLegibilityLabel : UILabel <NTKLegibilityView> {

	double _sBlur;
	UIColor* _sColor;
	BOOL _legibilityEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL legibilityEnabled;                //@synthesize legibilityEnabled=_legibilityEnabled - In the implementation block
@property (assign,nonatomic) double shadowBlur; 
@property (nonatomic,retain) UIColor * shadowColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIColor *)shadowColor;
-(UIEdgeInsets)_contentInsetsFromFonts;
-(double)shadowBlur;
-(void)setShadowBlur:(double)arg1 ;
-(void)_updateShadow;
-(BOOL)legibilityEnabled;
-(void)setLegibilityEnabled:(BOOL)arg1 ;
@end
