/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <libobjc.A.dylib/SBPluginBundleController.h>

@class STKBaseAlertViewController, NSString;

@interface STKAlertManager : NSObject <SBPluginBundleController> {

	STKBaseAlertViewController* _currentAlertViewController;
	BOOL _wantsNextUserEvent;
	CTServerConnectionRef _serverConnection;

}

@property (nonatomic,retain) STKBaseAlertViewController * currentAlertViewController;              //@synthesize currentAlertViewController=_currentAlertViewController - In the implementation block
@property (assign,nonatomic) BOOL wantsNextUserEvent;                                              //@synthesize wantsNextUserEvent=_wantsNextUserEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)awakeFromBundle;
+(id)sharedInstance;
-(void)dealloc;
-(CTServerConnectionRef)serverConnection;
-(void)registerForAlerts;
-(STKBaseAlertViewController *)currentAlertViewController;
-(void)setCurrentAlertViewController:(STKBaseAlertViewController *)arg1 ;
-(void)startSTKMonitor;
-(void)idleScreenShown:(id)arg1 ;
-(void)dismissCurrentlyDisplayedAlert;
-(void)userEventOccurred:(id)arg1 ;
-(id)createViewControllerForAlert:(id)arg1 ;
-(BOOL)wantsNextUserEvent;
-(void)setWantsNextUserEvent:(BOOL)arg1 ;
@end

