/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBCrossfadeZoomSettings.h>

@class SBAnimationSettings;

@interface SBCrossfadeAppTransitionSettings : SBCrossfadeZoomSettings {

	SBAnimationSettings* _iconBlurSettings;
	SBAnimationSettings* _appSnapshotBlurSettings;
	SBAnimationSettings* _appSnapshotCornerRadiusSettings;

}

@property (retain) SBAnimationSettings * iconBlurSettings;                             //@synthesize iconBlurSettings=_iconBlurSettings - In the implementation block
@property (retain) SBAnimationSettings * appSnapshotBlurSettings;                      //@synthesize appSnapshotBlurSettings=_appSnapshotBlurSettings - In the implementation block
@property (retain) SBAnimationSettings * appSnapshotCornerRadiusSettings;              //@synthesize appSnapshotCornerRadiusSettings=_appSnapshotCornerRadiusSettings - In the implementation block
+(id)settingsControllerModule;
-(SBAnimationSettings *)iconBlurSettings;
-(void)setIconBlurSettings:(SBAnimationSettings *)arg1 ;
-(SBAnimationSettings *)appSnapshotBlurSettings;
-(void)setAppSnapshotBlurSettings:(SBAnimationSettings *)arg1 ;
-(SBAnimationSettings *)appSnapshotCornerRadiusSettings;
-(void)setAppSnapshotCornerRadiusSettings:(SBAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end
