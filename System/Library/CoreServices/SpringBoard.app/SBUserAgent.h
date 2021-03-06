/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUIUserAgent.h>

@class SBBulletinAlertHandlerRegistry, NSString;

@interface SBUserAgent : NSObject <SBUIUserAgent> {

	SBBulletinAlertHandlerRegistry* _modalAlertRegistry;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUserAgent;
-(CFRunLoopRef)wifiRunLoopRef;
-(BOOL)isIdleTimerDisabledForReason:(id)arg1 ;
-(BOOL)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(BOOL)arg4 options:(id)arg5 ;
-(BOOL)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 ;
-(id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 ;
-(void)_cleanupFromBannerLaunch;
-(BOOL)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4 animate:(BOOL)arg5 ;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1 andDimScreen:(BOOL)arg2 ;
-(void)activateRemoteAlertService:(id)arg1 options:(id)arg2 activationHandler:(/*^block*/id)arg3 deactivationHandler:(/*^block*/id)arg4 ;
-(id)foregroundDisplayID;
-(BOOL)isApplicationForegroundObscured:(id)arg1 ;
-(BOOL)applicationInstalledForDisplayID:(id)arg1 ;
-(BOOL)deviceIsTethered;
-(int)networkUsageTypeForAppWithDisplayID:(id)arg1 ;
-(BOOL)canUserLaunchIcon;
-(BOOL)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4 ;
-(BOOL)canLaunchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 ;
-(BOOL)launchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(BOOL)arg3 animate:(BOOL)arg4 ;
-(void)adjustLockScreenContentByOffset:(double)arg1 forAwayViewPlugin:(id)arg2 withAnimationDuration:(double)arg3 ;
-(void)updateLockScreenInterfaceIfNecessary;
-(void)lockAndDimDevice;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1 ;
-(void)addActiveInterfaceOrientationObserver:(id)arg1 ;
-(void)removeActiveInterfaceOrientationObserver:(id)arg1 ;
-(void)setMinimumBacklightLevel:(float)arg1 animated:(BOOL)arg2 ;
-(id)topSuspendedEventsOnlyDisplayID;
-(id)init;
-(long long)activeInterfaceOrientation;
-(BOOL)isInternalInstall;
-(BOOL)isScreenOn;
-(void)setWallpaperTunnelActive:(BOOL)arg1 forFullscreenAlertController:(id)arg2 ;
-(void)updateInterfaceOrientationIfNecessary;
-(BOOL)springBoardIsActive;
-(BOOL)deviceIsLocked;
-(BOOL)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3 ;
-(BOOL)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3 ;
-(BOOL)openURL:(id)arg1 allowUnlock:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)deviceIsPasscodeLockedRemotely;
-(BOOL)lockScreenIsShowing;
-(id)folderNameForDisplayID:(id)arg1 ;
-(void)notifyOnNextUserEvent;
-(id)modalBulletinAlertHandlerRegistry;
-(void)activateModalBulletinAlert:(id)arg1 ;
-(void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2 ;
-(void)activateRemoteAlertService:(id)arg1 options:(id)arg2 ;
-(BOOL)isNamedRemoteAlertServiceActive:(id)arg1 controllerClassName:(id)arg2 ;
-(void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2 ;
-(void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2 ;
-(id)foregroundApplicationDisplayID;
-(BOOL)alertIsActive;
-(void)setIdleText:(id)arg1 ;
-(void)undimScreen;
-(void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1 ;
-(BOOL)deviceIsBlocked;
-(id)localizedDisplayNameForDisplayID:(id)arg1 ;
-(BOOL)isApplicationRestrictedOrHidden:(id)arg1 ;
@end

