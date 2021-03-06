/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBUISceneUpdater.h>
#import <libobjc.A.dylib/FBSceneHost.h>

@protocol FBSceneDelegate, FBSceneClient, FBSceneClientProvider, BSInvalidatable;
@class FBSceneLayerManager, FBSceneHostManager, FBProcess, NSString, FBSDisplay, FBSMutableSceneSettings, FBSSceneSettings, FBSSceneClientSettings, FBSSceneDefinition, NSHashTable, FBSSceneParameters, FBWindowContextManager, FBWindowContextHostManager;

@interface FBScene : NSObject <BSDescriptionProviding, FBUISceneUpdater, FBSceneHost> {

	FBSceneLayerManager* _layerManager;
	FBSceneHostManager* _hostManager;
	BOOL _valid;
	id<FBSceneDelegate> _delegate;
	id<FBSceneClient> _client;
	id<FBSceneClientProvider> _clientProvider;
	FBProcess* _clientProcess;
	NSString* _identifier;
	NSString* _workspaceIdentifier;
	FBSDisplay* _display;
	FBSMutableSceneSettings* _mutableSettings;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	FBSSceneDefinition* _definition;
	NSHashTable* _geometryObservers;
	unsigned long long _transactionID;
	BOOL _waitingForResponse;
	BOOL _lockedForMutation;
	id<BSInvalidatable> _stateCaptureAssertion;

}

@property (assign,nonatomic) id<FBSceneDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) FBSMutableSceneSettings * mutableSettings;                    //@synthesize mutableSettings=_mutableSettings - In the implementation block
@property (nonatomic,readonly) unsigned long long _transactionID;                                   //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,setter=_setLockedForMutation:,nonatomic) BOOL _lockedForMutation;                 //@synthesize lockedForMutation=_lockedForMutation - In the implementation block
@property (getter=isWaitingForResponse,nonatomic,readonly) BOOL waitingForResponse;                 //@synthesize waitingForResponse=_waitingForResponse - In the implementation block
@property (nonatomic,retain,readonly) id<FBSceneClient> client;                                     //@synthesize client=_client - In the implementation block
@property (nonatomic,retain,readonly) id<FBSceneClientProvider> clientProvider;                     //@synthesize clientProvider=_clientProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * workspaceIdentifier;                                 //@synthesize workspaceIdentifier=_workspaceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneDefinition * definition;                                //@synthesize definition=_definition - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplay * display;                                         //@synthesize display=_display - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneSettings * settings;                                  //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneClientSettings * clientSettings;                      //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneParameters * parameters; 
@property (nonatomic,retain,readonly) FBSceneLayerManager * layerManager;                           //@synthesize layerManager=_layerManager - In the implementation block
@property (nonatomic,retain,readonly) FBSceneHostManager * hostManager;                             //@synthesize hostManager=_hostManager - In the implementation block
@property (nonatomic,retain,readonly) FBProcess * clientProcess;                                    //@synthesize clientProcess=_clientProcess - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                           //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain,readonly) FBWindowContextManager * contextManager; 
@property (nonatomic,retain,readonly) FBWindowContextHostManager * contextHostManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sceneIdentifier; 
-(CGRect)accessibilitySceneFrame;
-(BOOL)accessibilitySceneOwnerIsAUIApplication;
-(BOOL)accessibilityIsSceneOnMainScreen;
-(id)accessibilitySceneProcess;
-(BOOL)accessibilitySceneBelongsToTheSystemApp;
-(BOOL)accessibilitySceneIsDeactivatedBySidebar;
-(BOOL)accessibilitySceneIsDeactivatedBySwitcher;
-(BOOL)accessibilityIsShowingSheet;
-(BOOL)accessibilitySceneIsForegroundVisible;
-(id)accessibilitySceneIdentifier;
-(id)accessibilityScenePID;
-(double)accessibilitySceneLevel;
-(BOOL)accessibilityIsSceneOccluded;
-(BOOL)accessibilitySceneIsRunningInForeground;
-(id)accessibilitySceneDescription;
-(BOOL)accessibilitySceneIsSuspended;
-(id)contentView;
-(void)setDelegate:(id<FBSceneDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<FBSceneDelegate>)delegate;
-(FBSSceneSettings *)settings;
-(NSString *)identifier;
-(id)uiSettings;
-(id)uiClientSettings;
-(void)sendActions:(id)arg1 ;
-(FBSDisplay *)display;
-(BOOL)isValid;
-(id)snapshotContext;
-(FBSSceneParameters *)parameters;
-(FBSSceneDefinition *)definition;
-(FBSSceneClientSettings *)clientSettings;
-(FBWindowContextManager *)contextManager;
-(id)createSnapshot;
-(id<FBSceneClient>)client;
-(NSString *)sceneIdentifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)createSnapshotWithContext:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_addSceneGeometryObserver:(id)arg1 ;
-(void)_removeSceneGeometryObserver:(id)arg1 ;
-(FBSceneLayerManager *)layerManager;
-(FBSceneHostManager *)hostManager;
-(unsigned long long)_transactionID;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 attachLayer:(id)arg2 ;
-(void)client:(id)arg1 updateLayer:(id)arg2 ;
-(void)client:(id)arg1 detachLayer:(id)arg2 ;
-(void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)client:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)clientWillInvalidate:(id)arg1 ;
-(FBProcess *)clientProcess;
-(void)updateUISettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)updateSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)updateUISettingsWithBlock:(/*^block*/id)arg1 ;
-(long long)currentInterfaceOrientation;
-(void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(FBSMutableSceneSettings *)mutableSettings;
-(NSString *)workspaceIdentifier;
-(id)initWithDefiniton:(id)arg1 initialParameters:(id)arg2 clientProvider:(id)arg3 ;
-(BOOL)_lockedForMutation;
-(void)_setLockedForMutation:(BOOL)arg1 ;
-(unsigned long long)_applyMutableSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<FBSceneClientProvider>)clientProvider;
-(void)_invalidateWithTransitionContext:(id)arg1 ;
-(void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dispatchClientMessageWithBlock:(/*^block*/id)arg1 ;
-(FBWindowContextHostManager *)contextHostManager;
-(BOOL)isWaitingForResponse;
@end

