/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIViewController.h>
#import <ASMessagesProvider/ASMSApplicationDelegate.h>
#import <ASMessagesProvider/SKUIApplicationDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <ASMessagesProvider/ASNavigationItemProviding.h>
#import <libobjc.A.dylib/CKBrowserViewControllerProtocol.h>

@protocol CKBrowserViewControllerSendDelegate;
@class UIBarButtonItem, UIViewController, IMBalloonPlugin, IMBalloonPluginDataSource, NSString, CKBrowserDragManager, NSNumber, NSObject, ASMSApplicationController, ASMSSegmentedTabBarController, SKUIURL;

@interface ASMSViewController : UIViewController <ASMSApplicationDelegate, SKUIApplicationDelegate, UIViewControllerTransitioningDelegate, ASNavigationItemProviding, CKBrowserViewControllerProtocol> {

	BOOL _isIMessage;
	BOOL _inExpandedPresentation;
	BOOL _shouldResumeApplicationOnViewWillAppear;
	BOOL _isVisible;
	BOOL _appContextReady;
	NSNumber* _adamID;
	NSObject*<CKBrowserViewControllerSendDelegate> _sendDelegate;
	IMBalloonPlugin* _balloonPlugin;
	NSString* _conversationID;
	IMBalloonPluginDataSource* _balloonPluginDataSource;
	UIBarButtonItem* _messagesLeftBarButtonItem;
	UIBarButtonItem* _messagesRightBarButtonItem;
	UIViewController* _presentationViewController;
	ASMSApplicationController* _applicationController;
	ASMSSegmentedTabBarController* _rootViewController;
	SKUIURL* _launchURL;

}

@property (nonatomic,retain) ASMSApplicationController * applicationController;                                           //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,retain) ASMSSegmentedTabBarController * rootViewController;                                          //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldResumeApplicationOnViewWillAppear;                                                //@synthesize shouldResumeApplicationOnViewWillAppear=_shouldResumeApplicationOnViewWillAppear - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                                                                              //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) BOOL appContextReady;                                                                        //@synthesize appContextReady=_appContextReady - In the implementation block
@property (nonatomic,retain) SKUIURL * launchURL;                                                                         //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,retain) UIViewController * presentationViewController;                                               //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIBarButtonItem * messagesRightBarButtonItem;                                                //@synthesize messagesRightBarButtonItem=_messagesRightBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * messagesLeftBarButtonItem;                                                 //@synthesize messagesLeftBarButtonItem=_messagesLeftBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKBrowserViewControllerSendDelegate> sendDelegate;                          //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (nonatomic,readonly) IMBalloonPlugin * balloonPlugin;                                                           //@synthesize balloonPlugin=_balloonPlugin - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * balloonPluginDataSource;                                         //@synthesize balloonPluginDataSource=_balloonPluginDataSource - In the implementation block
@property (assign,nonatomic) BOOL isiMessage;                                                                             //@synthesize isIMessage=_isIMessage - In the implementation block
@property (assign,nonatomic) NSString * conversationID;                                                                   //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,readonly) BOOL wantsDarkUI; 
@property (nonatomic,readonly) BOOL wantsOpaqueUI; 
@property (nonatomic,readonly) BOOL supportsQuickView; 
@property (nonatomic,readonly) BOOL mayBeKeptInViewHierarchy; 
@property (nonatomic,readonly) long long browserPresentationStyle; 
@property (nonatomic,readonly) BOOL shouldShowChatChrome; 
@property (nonatomic,readonly) BOOL inExpandedPresentation;                                                               //@synthesize inExpandedPresentation=_inExpandedPresentation - In the implementation block
@property (nonatomic,readonly) unsigned long long badgeValue; 
@property (nonatomic,readonly) CKBrowserDragManager * browserDragManager; 
@property (assign,nonatomic) long long currentBrowserConsumer; 
@property (nonatomic,readonly) BOOL canReplaceDataSource; 
@property (nonatomic,retain) NSNumber * adamID;                                                                           //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,readonly) long long parentModalPresentationStyle; 
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate; 
+(void)load;
-(void)setAppContextReady:(BOOL)arg1 ;
-(void)_destroyRootViewController;
-(void)_createTabBarItems;
-(void)_setupRootViewController;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)setMessagesRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setMessagesLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)dismissApplication:(id)arg1 ;
-(void)_createApplicationController;
-(id)_formattedLaunchOptions;
-(void)_destroyApplicationController;
-(void)_handleBackground;
-(UIBarButtonItem *)messagesLeftBarButtonItem;
-(UIBarButtonItem *)messagesRightBarButtonItem;
-(BOOL)appContextReady;
-(void)_searchTapped:(id)arg1 ;
-(void)setShouldResumeApplicationOnViewWillAppear:(BOOL)arg1 ;
-(void)_notifyNativeViewControllersAppContextStateChange;
-(BOOL)shouldResumeApplicationOnViewWillAppear;
-(void)_categoriesApplication:(id)arg1 willTransitionToSize:(CGSize)arg2 ;
-(id)_newDefaultTabBarItemsWithClientContext:(id)arg1 style:(long long)arg2 ;
-(void)_addViewController:(id)arg1 toContainingViewController:(id)arg2 ;
-(void)_shuffleTopLevelDocumentsWithCategoriesViewController:(id)arg1 categoriesNavigationController:(id)arg2 isCompact:(BOOL)arg3 ;
-(void)dealloc;
-(ASMSSegmentedTabBarController *)rootViewController;
-(void)setRootViewController:(ASMSSegmentedTabBarController *)arg1 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(BOOL)isVisible;
-(void)dismiss;
-(BOOL)isLoaded;
-(void)setLaunchURL:(SKUIURL *)arg1 ;
-(SKUIURL *)launchURL;
-(ASMSApplicationController *)applicationController;
-(void)forceOrientationBackToSupportedOrientation;
-(void)application:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)application:(id)arg1 didFailToLoadWithError:(id)arg2 ;
-(id)application:(id)arg1 navigationControllerWithTabBarItem:(id)arg2 ;
-(void)applicationDidChangeClientContext:(id)arg1 ;
-(void)applicationDidDisplayFirstPage:(id)arg1 ;
-(UIViewController *)presentationViewController;
-(id)initWithBalloonPlugin:(id)arg1 ;
-(NSObject*<CKBrowserViewControllerSendDelegate>)sendDelegate;
-(id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2 ;
-(void)setStoreLaunchURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(void)setSendDelegate:(NSObject*<CKBrowserViewControllerSendDelegate>)arg1 ;
-(IMBalloonPlugin *)balloonPlugin;
-(IMBalloonPluginDataSource *)balloonPluginDataSource;
-(void)setBalloonPluginDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(BOOL)isiMessage;
-(void)setIsiMessage:(BOOL)arg1 ;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(BOOL)wantsDarkUI;
-(BOOL)wantsOpaqueUI;
-(BOOL)supportsQuickView;
-(BOOL)mayBeKeptInViewHierarchy;
-(long long)browserPresentationStyle;
-(BOOL)shouldShowChatChrome;
-(BOOL)inExpandedPresentation;
-(NSNumber *)adamID;
-(void)setAdamID:(NSNumber *)arg1 ;
-(long long)parentModalPresentationStyle;
-(id<UIViewControllerTransitioningDelegate>)parentTransitioningDelegate;
-(void)didBeginInstallingAppWithBundleIdentifier:(id)arg1 ;
-(void)setApplicationController:(ASMSApplicationController *)arg1 ;
@end

