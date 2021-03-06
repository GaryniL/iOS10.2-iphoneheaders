/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LARemoteUIHost.h>

@protocol LAUIMechanismLARemoteUIHost;
@class MechanismBase;

@interface RemoteUIManager : NSObject <LARemoteUIHost> {

	MechanismBase*<LAUIMechanism>*<LARemoteUIHost> _uiMechanism;
	/*^block*/id _pendingShowUiReply;
	/*^block*/id _pendingUiActivationBlock;
	id _dismissingUi;
	BOOL _uiDismissedBeforeConnection;

}
+(id)sharedInstance;
-(id)init;
-(void)connectRemoteUI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disconnectRemoteUI;
-(void)_assignPendingMechanism:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_activateUi;
-(void)_replyOnceToShowUi:(BOOL)arg1 error:(id)arg2 ;
-(void)showUiForMechanism:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)prepareForRemoteViewControllerWithMechanism:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectionToViewServiceInvalidated;
-(void)dismissRemoteUI:(id)arg1 uiMechanism:(id)arg2 uiDisappeared:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
@end

