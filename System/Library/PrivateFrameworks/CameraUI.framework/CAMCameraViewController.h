/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CAMCaptureResultDelegate.h>
#import <libobjc.A.dylib/CAMPersistenceResultDelegate.h>
#import <libobjc.A.dylib/CAMViewfinderReviewButtonSource.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CAMCameraConfigurationDelegate, CAMCameraCaptureDelegate, OS_dispatch_queue, CAMCameraViewControllerPresentationDelegate;
@class CUCaptureController, CAMTimelapseController, CAMPersistenceController, CAMMotionController, CAMLocationController, CAMPowerController, CAMBurstController, CAMKeepAliveController, CAMProtectionController, CAMRemoteShutterController, CAMNebulaDaemonProxyManager, CAMIrisVideoController, CAMReviewButton, NSObject, NSMutableDictionary, CAMThumbnailGenerator, CAMViewfinderViewController, NSString;

@interface CAMCameraViewController : UIViewController <CAMCaptureResultDelegate, CAMPersistenceResultDelegate, CAMViewfinderReviewButtonSource, NSCoding, NSSecureCoding> {

	BOOL _automaticallyManagesCameraSession;
	id<CAMCameraConfigurationDelegate> _configurationDelegate;
	id<CAMCameraCaptureDelegate> _captureDelegate;
	CUCaptureController* _captureController;
	CAMTimelapseController* _timelapseController;
	CAMPersistenceController* _persistenceController;
	CAMMotionController* _motionController;
	CAMLocationController* _locationController;
	CAMPowerController* _powerController;
	CAMBurstController* _burstController;
	CAMKeepAliveController* _keepAliveController;
	CAMProtectionController* _protectionController;
	CAMRemoteShutterController* _remoteShutterController;
	CAMNebulaDaemonProxyManager* _nebulaDaemonProxyManager;
	CAMIrisVideoController* _irisVideoController;
	CAMReviewButton* __reviewButton;
	NSObject*<OS_dispatch_queue> __resultProcessingQueue;
	NSMutableDictionary* __resultQueuePendingLivePhotoProperties;
	CAMThumbnailGenerator* __resultQueueThumbnailGenerator;
	NSMutableDictionary* __resultQueuePendingPortraitPhotoProperties;
	CAMViewfinderViewController* _viewfinderViewController;
	id<CAMCameraViewControllerPresentationDelegate> _presentationDelegate;

}

@property (nonatomic,readonly) CUCaptureController * captureController;                                                    //@synthesize captureController=_captureController - In the implementation block
@property (nonatomic,readonly) CAMTimelapseController * timelapseController;                                               //@synthesize timelapseController=_timelapseController - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * persistenceController;                                           //@synthesize persistenceController=_persistenceController - In the implementation block
@property (nonatomic,readonly) CAMMotionController * motionController;                                                     //@synthesize motionController=_motionController - In the implementation block
@property (nonatomic,readonly) CAMLocationController * locationController;                                                 //@synthesize locationController=_locationController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * powerController;                                                       //@synthesize powerController=_powerController - In the implementation block
@property (nonatomic,readonly) CAMBurstController * burstController;                                                       //@synthesize burstController=_burstController - In the implementation block
@property (nonatomic,readonly) CAMKeepAliveController * keepAliveController;                                               //@synthesize keepAliveController=_keepAliveController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * protectionController;                                             //@synthesize protectionController=_protectionController - In the implementation block
@property (nonatomic,readonly) CAMRemoteShutterController * remoteShutterController;                                       //@synthesize remoteShutterController=_remoteShutterController - In the implementation block
@property (nonatomic,readonly) CAMNebulaDaemonProxyManager * nebulaDaemonProxyManager;                                     //@synthesize nebulaDaemonProxyManager=_nebulaDaemonProxyManager - In the implementation block
@property (nonatomic,readonly) CAMIrisVideoController * irisVideoController;                                               //@synthesize irisVideoController=_irisVideoController - In the implementation block
@property (nonatomic,readonly) CAMReviewButton * _reviewButton;                                                            //@synthesize _reviewButton=__reviewButton - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _resultProcessingQueue;                                        //@synthesize _resultProcessingQueue=__resultProcessingQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _resultQueuePendingLivePhotoProperties;                               //@synthesize _resultQueuePendingLivePhotoProperties=__resultQueuePendingLivePhotoProperties - In the implementation block
@property (nonatomic,readonly) CAMThumbnailGenerator * _resultQueueThumbnailGenerator;                                     //@synthesize _resultQueueThumbnailGenerator=__resultQueueThumbnailGenerator - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _resultQueuePendingPortraitPhotoProperties;                           //@synthesize _resultQueuePendingPortraitPhotoProperties=__resultQueuePendingPortraitPhotoProperties - In the implementation block
@property (nonatomic,readonly) CAMViewfinderViewController * viewfinderViewController;                                     //@synthesize viewfinderViewController=_viewfinderViewController - In the implementation block
@property (assign,getter=isDisablingMultipleCaptureFeatures,nonatomic) BOOL disablingMultipleCaptureFeatures; 
@property (assign,getter=isDisablingAdditionalCaptures,nonatomic) BOOL disablingAdditionalCaptures; 
@property (assign,nonatomic) unsigned long long persistenceBehavior; 
@property (assign,nonatomic) BOOL automaticallyAdjustsApplicationIdleTimer; 
@property (assign,nonatomic) BOOL automaticallyManagesCameraSession;                                                       //@synthesize automaticallyManagesCameraSession=_automaticallyManagesCameraSession - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraViewControllerPresentationDelegate> presentationDelegate;                  //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,getter=isPerformingTileTransition,nonatomic) BOOL performingTileTransition; 
@property (assign,nonatomic,__weak) id<CAMCameraConfigurationDelegate> configurationDelegate;                              //@synthesize configurationDelegate=_configurationDelegate - In the implementation block
@property (nonatomic,readonly) long long captureMode; 
@property (nonatomic,readonly) long long captureDevice; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) long long torchMode; 
@property (assign,setter=setHDRMode:,nonatomic) long long hdrMode; 
@property (assign,nonatomic) long long timerDuration; 
@property (assign,nonatomic) long long livePhotoMode; 
@property (assign,nonatomic,__weak) id<CAMCameraCaptureDelegate> captureDelegate;                                          //@synthesize captureDelegate=_captureDelegate - In the implementation block
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)isEmulatingImagePicker;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)preferredStatusBarUpdateAnimation;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarHidden;
-(id<CAMCameraViewControllerPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<CAMCameraViewControllerPresentationDelegate>)arg1 ;
-(BOOL)isRecording;
-(BOOL)stopRecording;
-(void)setFlashMode:(long long)arg1 ;
-(void)setTorchMode:(long long)arg1 ;
-(BOOL)startRecording;
-(CUCaptureController *)captureController;
-(CAMViewfinderViewController *)viewfinderViewController;
-(id)reviewButton;
-(CAMReviewButton *)_reviewButton;
-(long long)flashMode;
-(long long)hdrMode;
-(long long)captureDevice;
-(void)setHDRMode:(long long)arg1 ;
-(long long)torchMode;
-(long long)timerDuration;
-(void)setConfigurationDelegate:(id<CAMCameraConfigurationDelegate>)arg1 ;
-(BOOL)isDisablingAdditionalCaptures;
-(void)setPerformingTileTransition:(BOOL)arg1 ;
-(BOOL)isPerformingTileTransition;
-(unsigned long long)persistenceBehavior;
-(BOOL)isDisablingMultipleCaptureFeatures;
-(BOOL)automaticallyAdjustsApplicationIdleTimer;
-(long long)captureMode;
-(void)suspendCameraSession;
-(void)resumeCameraSession;
-(void)setTimerDuration:(long long)arg1 ;
-(long long)livePhotoMode;
-(void)setLivePhotoMode:(long long)arg1 ;
-(BOOL)capturePhoto;
-(void)setDisablingAdditionalCaptures:(BOOL)arg1 ;
-(void)setAutomaticallyAdjustsApplicationIdleTimer:(BOOL)arg1 ;
-(void)setPersistenceBehavior:(unsigned long long)arg1 ;
-(void)setDisablingMultipleCaptureFeatures:(BOOL)arg1 ;
-(id)initWithCustomLaunchOptions:(id)arg1 usingEmulationMode:(long long)arg2 ;
-(void)setCaptureDelegate:(id<CAMCameraCaptureDelegate>)arg1 ;
-(void)configureForCaptureMode:(long long)arg1 captureDevice:(long long)arg2 ;
-(void)handleReviewButtonReleased:(id)arg1 ;
-(void)persistenceController:(id)arg1 didCompleteAllLocalPersistenceForRequest:(id)arg2 ;
-(void)persistenceController:(id)arg1 didGenerateStillImageLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4 ;
-(void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4 ;
-(void)captureController:(id)arg1 didGenerateStillImageCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(id<CAMCameraConfigurationDelegate>)configurationDelegate;
-(CAMTimelapseController *)timelapseController;
-(CAMPersistenceController *)persistenceController;
-(CAMMotionController *)motionController;
-(CAMLocationController *)locationController;
-(CAMPowerController *)powerController;
-(CAMBurstController *)burstController;
-(CAMKeepAliveController *)keepAliveController;
-(CAMProtectionController *)protectionController;
-(CAMRemoteShutterController *)remoteShutterController;
-(CAMNebulaDaemonProxyManager *)nebulaDaemonProxyManager;
-(CAMIrisVideoController *)irisVideoController;
-(void)_commonCAMCameraViewControllerInitializationWithLaunchOptions:(id)arg1 usingEmulationMode:(long long)arg2 initialLayoutStyle:(long long)arg3 privateOptions:(long long)arg4 ;
-(BOOL)automaticallyManagesCameraSession;
-(unsigned long long)_capturePersistenceBehaviorForViewfinderPersistenceBehavior:(unsigned long long)arg1 ;
-(unsigned long long)_viewfinderPersistenceBehaviorForCapturePersistenceBehavior:(unsigned long long)arg1 ;
-(CAMThumbnailGenerator *)_resultQueueThumbnailGenerator;
-(id<CAMCameraCaptureDelegate>)captureDelegate;
-(NSObject*<OS_dispatch_queue>)_resultProcessingQueue;
-(NSMutableDictionary *)_resultQueuePendingLivePhotoProperties;
-(void)_notifyCaptureDelegateOfCompletedCaptureOfPhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3 ;
-(NSMutableDictionary *)_resultQueuePendingPortraitPhotoProperties;
-(id)_resultQueueSafeImageFromSurface:(void*)arg1 imageOrientation:(long long)arg2 ;
-(id)_clientPropertiesForVideoURL:(id)arg1 duration:(SCD_Struct_CA2)arg2 size:(CGSize)arg3 creationDate:(id)arg4 captureOrientation:(long long)arg5 previewSurface:(void*)arg6 previewOrientation:(long long)arg7 adjustments:(id)arg8 uniqueIdentifier:(id)arg9 forLivePhoto:(BOOL)arg10 savedToPhotoLibrary:(BOOL)arg11 ;
-(id)_previewImageFromVideoURL:(id)arg1 ;
-(id)_clientPropertiesForStillImageWithURL:(id)arg1 metadata:(id)arg2 creationDate:(id)arg3 captureOrientation:(long long)arg4 fullsizeSurface:(void*)arg5 fullsizeSize:(unsigned long long)arg6 previewSurface:(void*)arg7 previewOrientation:(long long)arg8 uniqueIdentifier:(id)arg9 forOriginal:(BOOL)arg10 livePhoto:(BOOL)arg11 savedToPhotoLibrary:(BOOL)arg12 ;
-(void)_resultQueueUpdateSingleCapturePortraitPhotoForPersistenceUUID:(id)arg1 properties:(id)arg2 captureError:(id)arg3 ;
-(id)_behaviorDefinedDestinationURLForRequest:(id)arg1 withLocalDestinationURL:(id)arg2 linkedDestinationURL:(id)arg3 ;
-(BOOL)_couldProvidePendingLivePhotoUpdateForPairingIdentifier:(id)arg1 withProperties:(id)arg2 ;
-(BOOL)_resultQueueUpdatePendingLivePhotoForPairingIdentifier:(id)arg1 withProperties:(id)arg2 ;
-(id)_resultQueueProcessLivePhotoForPairingIdentifier:(id)arg1 combinedProperties:(out id*)arg2 error:(id*)arg3 ;
-(void)_notifyCaptureDelegateOfCompletedCaptureOfLivePhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3 ;
-(id)_clientPropertiesForLivePhotoVideoURL:(id)arg1 duration:(SCD_Struct_CA2)arg2 uniqueIdentifier:(id)arg3 ;
-(void)_resultQueueHandleFallbackPhotoForPairingIdentifierIfNecessary:(id)arg1 ;
-(void)_resultQueueProcessSingleCapturePortraitResultForPersistenceUUID:(id)arg1 ;
-(id)initWithInitialLayoutStyle:(long long)arg1 privateOptions:(long long)arg2 ;
-(void)setAutomaticallyManagesCameraSession:(BOOL)arg1 ;
@end

