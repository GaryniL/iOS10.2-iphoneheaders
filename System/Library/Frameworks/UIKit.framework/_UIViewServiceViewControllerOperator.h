/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIViewServiceViewControllerOperator_RemoteViewControllerInterface.h>
#import <UIKit/_UIHostedTextServiceSessionDelegate.h>
#import <UIKit/_UIViewServiceDummyPopoverControllerDelegate.h>
#import <UIKit/_UIViewServiceDeputy.h>
#import <UIKit/_UIViewServiceDeputyRotationSource.h>

@protocol _UIViewServiceViewControllerOperatorDelegate;
@class NSMutableArray, NSString, NSArray, UIViewController, _UIHostedWindow, UIActionSheet, _UIHostedTextServiceSession, _UIAsyncInvocation, UIPopoverController, _UIViewServiceDummyPopoverController, _UIViewControllerOneToOneTransitionContext, NSUndoManager;

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {

	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	NSMutableArray* _deferredToViewDidAppear;
	int _hostPID;
	NSString* _hostBundleID;
	SCD_Struct_UI38 _hostAuditToken;
	id _remoteViewControllerProxyToOperator;
	id _remoteViewControllerProxyToViewController;
	NSArray* _plugInScenes;
	UIViewController* _localViewController;
	NSString* _presentationControllerClassName;
	_UIHostedWindow* _hostedWindow;
	BOOL _disableAutomaticKeyboardBehavior;
	UIActionSheet* _hostedActionSheet;
	BOOL _serviceInPopover;
	long long _hostStatusBarOrientation;
	double _hostStatusBarHeight;
	NSMutableArray* _deputyRotationDelegates;
	unsigned _hostAccessibilityServerPort;
	_UIHostedTextServiceSession* _textServiceSession;
	_UIAsyncInvocation* _prepareForDisconnectionInvocation;
	_UIAsyncInvocation* _invalidationInvocation;
	UIPopoverController* _displayedPopoverController;
	_UIViewServiceDummyPopoverController* _dummyPopoverController;
	unsigned long long _supportedOrientations;
	BOOL _canShowTextServices;
	UIEdgeInsets _localViewControllerRequestedInsets;
	_UIViewControllerOneToOneTransitionContext* _viewControllerTransitioningContext;
	long long _editAlertToken;
	NSUndoManager* _editAlertUndoManager;
	id<_UIViewServiceViewControllerOperatorDelegate> _delegate;
	/*^block*/id __traitsWillChangeHandler;
	/*^block*/id __traitsDidChangeHandler;

}

@property (setter=_setTraitsWillChangeHandler:,nonatomic,copy) id _traitsWillChangeHandler;                 //@synthesize _traitsWillChangeHandler=__traitsWillChangeHandler - In the implementation block
@property (setter=_setTraitsDidChangeHandler:,nonatomic,copy) id _traitsDidChangeHandler;                   //@synthesize _traitsDidChangeHandler=__traitsDidChangeHandler - In the implementation block
@property (assign,nonatomic,__weak) id<_UIViewServiceViewControllerOperatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(SCD_Struct_UI38)arg4 ;
-(void)setDelegate:(id<_UIViewServiceViewControllerOperatorDelegate>)arg1 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id<_UIViewServiceViewControllerOperatorDelegate>)delegate;
-(id)invalidate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(BOOL)_canShowTextServices;
-(id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(id)_showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(id)_window;
-(void)_sendFocusMovementAction:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(id)_queue;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setNeedsWhitePointAdaptivityStyleUpdate;
-(void)setNeedsStatusBarAppearanceUpdate;
-(id)_viewControllersForRotationCallbacks;
-(void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3 ;
-(id)preferredFocusEnvironments;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
-(BOOL)_isDeallocating;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGSize)preferredContentSize;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(CGSize)contentSizeForViewInPopover;
-(void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)__knownPresentationWithoutPresentationControllerInstance;
-(CGRect)_frameForContainerViewInSheetForBounds:(CGRect)arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3 ;
-(void)_updateSupportedInterfaceOrientationsIfNecessary;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)_presentationControllerClassName;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_didBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_willResignContentViewControllerOfPopover:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(BOOL)_isHostedRootViewController;
-(CGRect)_frameForContainerViewInSheetForBounds:(CGRect)arg1 ;
-(int)__automatic_invalidation_logic;
-(BOOL)_tryRetain;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)addDeputyRotationDelegate:(id)arg1 ;
-(void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__setContentSize:(CGSize)arg1 withFence:(id)arg2 ;
-(void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 legacyAppearance:(BOOL)arg5 traitCollection:(id)arg6 initialInterfaceOrientation:(long long)arg7 hostAccessibilityServerPort:(id)arg8 canShowTextServices:(BOOL)arg9 replyHandler:(/*^block*/id)arg10 ;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)_firstResponderDidChange:(id)arg1 ;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1 ;
-(void)__hostDidChangeStatusBarHeight:(double)arg1 ;
-(void)__hostWillEnterForeground;
-(void)__hostDidEnterBackground;
-(void)__hostDidSetContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)__scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)__hostDidPromoteFirstResponder;
-(void)__hostedActionSheetDidPresent;
-(void)__hostedActionSheetDidDismissWithClickedButtonIndex:(long long)arg1 ;
-(void)__hostedActionSheetClickedButtonAtIndex:(long long)arg1 ;
-(void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg1 ;
-(void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 underlapsStatusBar:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)__hostDidAttachDisplay:(id)arg1 ;
-(void)__hostDidDetachDisplayWithIntegerDisplayID:(unsigned)arg1 ;
-(void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned)arg1 newHostingHandleReplyHandler:(/*^block*/id)arg2 ;
-(void)__hostViewDidAppear:(BOOL)arg1 ;
-(void)__hostViewWillDisappear:(BOOL)arg1 ;
-(void)__hostViewDidDisappear:(BOOL)arg1 ;
-(void)__hostDidSetPresentationControllerClassName:(id)arg1 ;
-(void)__setContentSize:(CGSize)arg1 ;
-(void)__hostViewWillTransitionToSize:(CGSize)arg1 withContextDescription:(id)arg2 statusBarHeight:(double)arg3 underlapsStatusBar:(BOOL)arg4 whenDone:(/*^block*/id)arg5 ;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3 ;
-(void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(BOOL)arg2 ;
-(void)__setServiceInPopover:(BOOL)arg1 ;
-(void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(BOOL)arg2 ;
-(void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(BOOL)arg3 ;
-(void)__dimmingViewWasTapped;
-(id)_appearanceSource;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(BOOL)arg3 ;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2 ;
-(void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)__textServiceDidDismiss;
-(void)__cancelAlertActionWithToken:(long long)arg1 ;
-(void)__undoActionWithToken:(long long)arg1 ;
-(void)__redoActionWithToken:(long long)arg1 ;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2 ;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(double)arg3 ;
-(void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2 ;
-(void)dummyPopoverController:(id)arg1 didChangeContentSize:(CGSize)arg2 animated:(BOOL)arg3 ;
-(void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(BOOL)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(BOOL)arg5 replyHandler:(/*^block*/id)arg6 ;
-(void)_prepareForDisconnectionUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_popoverWillPresent:(id)arg1 ;
-(void)_popoverDidDismiss:(id)arg1 ;
-(id)_inputViewsKey;
-(void)_setTraitsDidChangeHandler:(/*^block*/id)arg1 ;
-(void)_setTraitsWillChangeHandler:(/*^block*/id)arg1 ;
-(BOOL)_presentActionSheet:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(CGRect)arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned long long)arg5 passthroughViews:(id)arg6 backgroundStyle:(long long)arg7 animated:(BOOL)arg8 ;
-(void)_dismissActionSheet:(id)arg1 withClickedButtonIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_viewServiceIsDisplayingPopoverController:(id)arg1 ;
-(void)_windowDidUpdateCurrentTintView:(id)arg1 ;
-(void)_windowDidRegisterScrollToTopView;
-(void)_windowDidUnregisterScrollToTopView;
-(id)_traitsWillChangeHandler;
-(id)_traitsDidChangeHandler;
-(BOOL)_shouldForwardLegacyRotationOnly;
-(id)_supportedInterfaceOrientationsForViewController:(id)arg1 ;
-(void)__showEditAlertView;
-(BOOL)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char*)arg3 ;
-(id)_sessionForStateRestoration:(id)arg1 ;
-(id)_dataFromPressesEvent:(id)arg1 ;
-(BOOL)_forwardPresses:(id)arg1 withEvent:(id)arg2 canceled:(BOOL)arg3 ;
-(void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2 ;
@end
