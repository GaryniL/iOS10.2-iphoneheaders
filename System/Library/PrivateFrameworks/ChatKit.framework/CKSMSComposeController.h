/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CKSMSCompose.h>
#import <libobjc.A.dylib/CKSMSComposeRemoteViewControllerDelegate.h>

@class _UIAsyncInvocation, UINavigationController, CKSMSComposeRemoteViewController, CKSMSComposeQueuingRemoteViewControllerProxy, NSString;

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate> {

	int _entryViewInvisible;
	_UIAsyncInvocation* _cancellationInvocation;
	UINavigationController* _clientNavigationController;
	BOOL _safeToAdd;
	BOOL _didChangeStatusBarStyle;
	long long _savedStatusBarStyle;
	id _delegate;
	CKSMSComposeRemoteViewController* _remoteViewController;
	CKSMSComposeQueuingRemoteViewControllerProxy* _remoteViewControllerProxy;

}

@property (assign,nonatomic,__weak) id delegate;                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKSMSComposeRemoteViewController * remoteViewController;                               //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) CKSMSComposeQueuingRemoteViewControllerProxy * remoteViewControllerProxy;              //@synthesize remoteViewControllerProxy=_remoteViewControllerProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
+(BOOL)acceptsMIMEType:(id)arg1 ;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CKSMSComposeRemoteViewController *)remoteViewController;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setRemoteViewController:(CKSMSComposeRemoteViewController *)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
-(void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2 ;
-(void)forceMMS;
-(void)setCanEditRecipients:(BOOL)arg1 ;
-(BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(void)smsComposeControllerDataInserted;
-(BOOL)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 ;
-(void)setPendingAddresses:(id)arg1 ;
-(void)disableCameraAttachments;
-(void)setTextEntryContentsVisible:(BOOL)arg1 ;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)smsComposeControllerSendStartedWithText:(id)arg1 ;
-(void)smsComposeControllerCancelled;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 ;
-(void)setUICustomizationData:(id)arg1 ;
-(BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4 ;
-(void)forceCancelComposition;
-(void)setGameCenterModeWithPickerBlock:(/*^block*/id)arg1 ;
-(void)setRemoteViewControllerProxy:(CKSMSComposeQueuingRemoteViewControllerProxy *)arg1 ;
-(CKSMSComposeQueuingRemoteViewControllerProxy *)remoteViewControllerProxy;
-(void)_addRemoteVCIfNeeded;
-(BOOL)canInsertMessage;
-(BOOL)insertRichLinkWithURL:(id)arg1 andData:(id)arg2 ;
-(BOOL)insertMessage:(id)arg1 ;
@end
