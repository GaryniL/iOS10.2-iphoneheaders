/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <MapsLockScreen/SBAwayHeaderPluginView.h>

@class GuidanceManeuverView, GuidanceSignDistanceLabel, UILabel, NSArray, UIImage, UIImageView, NSAttributedString, TopBarTitleView, TrafficAlertView, NSString;

@interface DrivingWalkingLockScreenHeader : UIView <CAAnimationDelegate, SBAwayHeaderPluginView> {

	GuidanceManeuverView* _maneuverView;
	GuidanceSignDistanceLabel* _distanceLabel;
	UILabel* _instructionsLabel;
	NSArray* _instructions;
	UIImage* _shieldImage;
	UIImageView* _shieldImageView;
	BOOL _isDimmed;
	BOOL _isAnimatingDimState;
	BOOL _centerLabels;
	BOOL _needsUpdateContainerFrameHeightForPad;
	NSAttributedString* _timeAttributedString;
	NSAttributedString* _etaAttributedString;
	TopBarTitleView* _topBarTitleView;
	TrafficAlertView* _trafficAlertView;
	NSString* _inProgressDistance;
	NSArray* _inProgressInstructions;
	CGPoint _shieldCenterPoint;

}

@property (nonatomic,readonly) SCD_Struct_Dr6 metrics; 
@property (nonatomic,retain) TopBarTitleView * _topBarTitleView;                                   //@synthesize topBarTitleView=_topBarTitleView - In the implementation block
@property (nonatomic,retain) TrafficAlertView * _trafficAlertView;                                 //@synthesize trafficAlertView=_trafficAlertView - In the implementation block
@property (assign,nonatomic) BOOL _isAnimatingDimState;                                            //@synthesize isAnimatingDimState=_isAnimatingDimState - In the implementation block
@property (nonatomic,copy) NSString * _inProgressDistance;                                         //@synthesize inProgressDistance=_inProgressDistance - In the implementation block
@property (nonatomic,copy) NSArray * _inProgressInstructions;                                      //@synthesize inProgressInstructions=_inProgressInstructions - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateContainerFrameHeightForPad;                           //@synthesize needsUpdateContainerFrameHeightForPad=_needsUpdateContainerFrameHeightForPad - In the implementation block
@property (nonatomic,readonly) GuidanceManeuverView * maneuverView;                                //@synthesize maneuverView=_maneuverView - In the implementation block
@property (nonatomic,copy) NSArray * instructions; 
@property (nonatomic,copy) NSString * distance; 
@property (nonatomic,copy) UIImage * shieldImage;                                                  //@synthesize shieldImage=_shieldImage - In the implementation block
@property (assign,nonatomic) CGPoint shieldCenterPoint;                                            //@synthesize shieldCenterPoint=_shieldCenterPoint - In the implementation block
@property (nonatomic,copy) NSAttributedString * timeAttributedString;                              //@synthesize timeAttributedString=_timeAttributedString - In the implementation block
@property (nonatomic,copy) NSAttributedString * etaAttributedString;                               //@synthesize etaAttributedString=_etaAttributedString - In the implementation block
@property (assign,nonatomic) BOOL isDimmed;                                                        //@synthesize isDimmed=_isDimmed - In the implementation block
@property (assign,nonatomic) BOOL centerLabels;                                                    //@synthesize centerLabels=_centerLabels - In the implementation block
@property (getter=isShowingTrafficAlert,nonatomic,readonly) BOOL showingTrafficAlert; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsDimmed:(BOOL)arg1 ;
-(TrafficAlertView *)_trafficAlertView;
-(TopBarTitleView *)_topBarTitleView;
-(NSArray *)_inProgressInstructions;
-(void)set_topBarTitleView:(TopBarTitleView *)arg1 ;
-(NSAttributedString *)timeAttributedString;
-(void)set_trafficAlertView:(TrafficAlertView *)arg1 ;
-(NSAttributedString *)etaAttributedString;
-(void)set_isAnimatingDimState:(BOOL)arg1 ;
-(BOOL)isShowingTrafficAlert;
-(BOOL)_isAnimatingDimState;
-(NSString *)_inProgressDistance;
-(void)setEtaAttributedString:(NSAttributedString *)arg1 ;
-(void)_updateColorsForDimState;
-(void)set_inProgressDistance:(NSString *)arg1 ;
-(void)layoutForInterfaceOrientation:(long long)arg1 ;
-(CGPoint)shieldCenterPoint;
-(BOOL)languageIsWrittenRightToLeft;
-(void)set_inProgressInstructions:(NSArray *)arg1 ;
-(void)setShieldCenterPoint:(CGPoint)arg1 ;
-(long long)_interfaceOrientaton;
-(id)legibilitySettingsForDimmed:(BOOL)arg1 ;
-(void)setTimeAttributedString:(NSAttributedString *)arg1 ;
-(void)setCenterLabels:(BOOL)arg1 ;
-(UIImage *)shieldImage;
-(void)dismissTrafficAlert;
-(GuidanceManeuverView *)maneuverView;
-(void)setShieldImage:(UIImage *)arg1 ;
-(void)showTrafficAlertWithType:(unsigned long long)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)setNeedsUpdateContainerFrameHeightForPad:(BOOL)arg1 ;
-(BOOL)needsUpdateContainerFrameHeightForPad;
-(void)_updateLayoutForTrafficAlertVeiw;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setDistance:(NSString *)arg1 ;
-(NSString *)distance;
-(void)update:(/*^block*/id)arg1 ;
-(SCD_Struct_Dr6)metrics;
-(NSArray *)instructions;
-(void)setInstructions:(NSArray *)arg1 ;
-(int)maneuver;
-(void)updateIfNecessary:(BOOL)arg1 ;
-(void)setManeuver:(int)arg1 ;
-(BOOL)isDimmed;
-(BOOL)centerLabels;
@end

