/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, NSDate, SBUILegibilityLabel, NSString;

@interface SBFLockScreenAlternateDateLabel : UIView <SBUILegibility> {

	_UILegibilitySettings* _legibilitySettings;
	double _strength;
	NSDate* _date;
	SBUILegibilityLabel* _label;

}

@property (nonatomic,retain) SBUILegibilityLabel * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSDate * date;                                           //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
+(BOOL)showAlternateDate;
+(id)_lunarCalendarIdentifier;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSDate *)date;
-(SBUILegibilityLabel *)label;
-(void)setLabel:(SBUILegibilityLabel *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 font:(id)arg3 ;
-(id)_alternateDateString;
@end
