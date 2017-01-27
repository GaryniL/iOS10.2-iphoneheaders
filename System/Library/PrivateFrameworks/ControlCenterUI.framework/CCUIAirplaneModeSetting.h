/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/CCUISettingModule.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class RadiosPreferences;

@interface CCUIAirplaneModeSetting : CCUISettingModule <RadiosPreferencesDelegate> {

	RadiosPreferences* _airplaneModeController;
	BOOL _airplaneModeEnabled;

}

@property (assign,setter=_setAirplaneModeEnabled:,getter=_isAirplaneModeEnabled,nonatomic) BOOL airplaneModeEnabled;              //@synthesize airplaneModeEnabled=_airplaneModeEnabled - In the implementation block
+(id)identifier;
+(id)displayName;
+(id)statusOnString;
+(id)statusOffString;
-(void)dealloc;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
-(void)airplaneModeChanged;
-(void)_setAirplaneModeEnabled:(BOOL)arg1 ;
-(BOOL)_stateWithEffectiveOverrides;
-(BOOL)_isStateOverridden;
-(id)aggdKey;
-(id)selectedStateColor;
-(BOOL)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(BOOL)_isAirplaneModeEnabled;
@end
