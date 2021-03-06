/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSBundle, UIImageView, FIUIAnimatingSpriteImageView;

@interface FIUIHeartRateStatusView : UIView {

	NSString* _heartSpriteImageName;
	long long _heartSpriteImageFrameCount;
	long long _heartSpriteImageColumnCount;
	NSBundle* _resourceBundle;
	unsigned long long _state;
	double _heartRate;
	BOOL _delayedStartMeasuringAnimation;
	BOOL _isBeatingHeart;
	BOOL _animationsSuspended;
	UIImageView* _fullHeartImageView;
	FIUIAnimatingSpriteImageView* _animatingImageView;
	UIImageView* _reloadOutlineView;
	UIImageView* _reloadArrowView;

}

@property (nonatomic,retain) UIImageView * fullHeartImageView;                               //@synthesize fullHeartImageView=_fullHeartImageView - In the implementation block
@property (nonatomic,retain) FIUIAnimatingSpriteImageView * animatingImageView;              //@synthesize animatingImageView=_animatingImageView - In the implementation block
@property (nonatomic,retain) UIImageView * reloadOutlineView;                                //@synthesize reloadOutlineView=_reloadOutlineView - In the implementation block
@property (nonatomic,retain) UIImageView * reloadArrowView;                                  //@synthesize reloadArrowView=_reloadArrowView - In the implementation block
@property (assign,nonatomic) BOOL animationsSuspended;                                       //@synthesize animationsSuspended=_animationsSuspended - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)setFullHeartImageView:(UIImageView *)arg1 ;
-(UIImageView *)fullHeartImageView;
-(void)setAnimatingImageView:(FIUIAnimatingSpriteImageView *)arg1 ;
-(FIUIAnimatingSpriteImageView *)animatingImageView;
-(void)_resumeAnimations;
-(void)_suspendAnimations;
-(void)_startMeasuringAnimationAnimated:(BOOL)arg1 ;
-(void)_startBeatingHeart;
-(UIImageView *)reloadOutlineView;
-(UIImageView *)reloadArrowView;
-(void)setReloadOutlineView:(UIImageView *)arg1 ;
-(void)setReloadArrowView:(UIImageView *)arg1 ;
-(void)_beatFullHeartOnce;
-(void)_finishedHeartBeat;
-(id)_loadHeartMeasuringImage;
-(id)initWithFrame:(CGRect)arg1 heartSpriteImageName:(id)arg2 spriteFrameCount:(long long)arg3 spriteColumnCount:(long long)arg4 resourceBundle:(id)arg5 ;
-(void)setAnimationsSuspended:(BOOL)arg1 ;
-(void)setReloadHeartOutlineImage:(id)arg1 ;
-(void)setReloadArrowImage:(id)arg1 ;
-(void)unloadAnimationAssets;
-(BOOL)animationsSuspended;
-(void)setHeartRate:(double)arg1 ;
@end

