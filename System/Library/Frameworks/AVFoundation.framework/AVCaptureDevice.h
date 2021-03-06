/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureDeviceInternal, NSString, NSArray, AVCaptureDeviceFormat;

@interface AVCaptureDevice : NSObject {

	AVCaptureDeviceInternal* _internal;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) NSArray * formats; 
@property (nonatomic,retain) AVCaptureDeviceFormat * activeFormat; 
@property (assign,nonatomic) SCD_Struct_AV2 activeVideoMinFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV2 activeVideoMaxFrameDuration; 
+(void)initialize;
+(void)_filterConnectedDevices:(id)arg1 withDeviceTypes:(id)arg2 mediaType:(id)arg3 position:(long long)arg4 ;
+(id)_legacyDevicesWithMediaType:(id)arg1 ;
+(void)_filterConnectedLegacyDevices:(id)arg1 ;
+(id)_devicesWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
+(void)_registerOnceForServerConnectionDiedNotification;
+(id)deviceWithUniqueID:(id)arg1 ;
+(id)_devices;
+(void)_reconnectDevices:(id)arg1 ;
+(long long)authorizationStatusForMediaType:(id)arg1 ;
+(void)requestAccessForMediaType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)devicesWithMediaType:(id)arg1 ;
+(id)defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
+(id)defaultDeviceWithMediaType:(id)arg1 ;
+(id)devices;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setContrast:(float)arg1 ;
-(long long)position;
-(NSString *)localizedName;
-(void)close;
-(float)contrast;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_AV2)arg1 ;
-(BOOL)isActiveVideoMinFrameDurationSet;
-(void)_checkTCCAccess;
-(BOOL)_startUsingDevice:(id*)arg1 ;
-(void)_stopUsingDevice;
-(BOOL)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(NSString *)modelID;
-(BOOL)isSubjectAreaChangeMonitoringEnabled;
-(CGRect)faceRectangle;
-(int)faceRectangleAngle;
-(BOOL)providesStortorgetMetadata;
-(void)setProvidesStortorgetMetadata:(BOOL)arg1 ;
-(long long)deviceSourceOrigin;
-(BOOL)isHighDynamicRangeSceneDetectionEnabled;
-(BOOL)_isHighDynamicRangeScene;
-(void)_setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1 ;
-(void)_setStillImageStabilizationDetectionEnabled:(BOOL)arg1 ;
-(void)setCachesFigCaptureSourceConfigurationChanges:(BOOL)arg1 ;
-(BOOL)cachesFigCaptureSourceConfigurationChanges;
-(void)_setVideoHDREnabled:(BOOL)arg1 ;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1 ;
-(BOOL)isLensStabilizationSupported;
-(BOOL)isMachineReadableCodeDetectionSupported;
-(BOOL)isInUseByAnotherApplication;
-(BOOL)isActiveVideoMaxFrameDurationSet;
-(OpaqueCMClockRef)deviceClock;
-(BOOL)open:(id*)arg1 ;
-(BOOL)_isFlashScene;
-(BOOL)isFlashSceneDetectedForPhotoOutput;
-(void)_setFlashSceneDetectionEnabled:(BOOL)arg1 ;
-(BOOL)isAutoFocusRangeRestrictionSupported;
-(long long)autoFocusRangeRestriction;
-(void)setAutoFocusRangeRestriction:(long long)arg1 ;
-(BOOL)isLockingFocusWithCustomLensPositionSupported;
-(float)lensAperture;
-(SCD_Struct_AV2)exposureDuration;
-(float)ISO;
-(float)ISODigitalThreshold;
-(void)setExposureModeCustomWithDuration:(SCD_Struct_AV2)arg1 ISO:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(float)exposureTargetOffset;
-(long long)whiteBalanceMode;
-(BOOL)isAdjustingWhiteBalance;
-(SCD_Struct_AV42)deviceWhiteBalanceGains;
-(SCD_Struct_AV42)grayWorldDeviceWhiteBalanceGains;
-(float)maxWhiteBalanceGain;
-(BOOL)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
-(void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(SCD_Struct_AV42)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SCD_Struct_AV43)chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV42)arg1 ;
-(SCD_Struct_AV42)deviceWhiteBalanceGainsForChromaticityValues:(SCD_Struct_AV43)arg1 ;
-(SCD_Struct_AV43)temperatureAndTintValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV42)arg1 ;
-(SCD_Struct_AV42)deviceWhiteBalanceGainsForTemperatureAndTintValues:(SCD_Struct_AV43)arg1 ;
-(BOOL)automaticallyAdjustsImageControlMode;
-(long long)imageControlMode;
-(BOOL)automaticallyAdjustsVideoHDREnabled;
-(BOOL)isVideoHDREnabled;
-(BOOL)isWideColorSupported;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(BOOL)isRampingVideoZoom;
-(double)minAvailableVideoZoomFactor;
-(BOOL)isRawStillImageCaptureSupported;
-(BOOL)isLowLightBoostEnabled;
-(BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
-(long long)shallowDepthOfFieldEffectStatus;
-(id)supportedMetadataObjectIdentifiers;
-(BOOL)eyeDetectionEnabled;
-(BOOL)eyeClosedDetectionEnabled;
-(BOOL)smileDetectionEnabled;
-(id)availableBoxedMetadataFormatDescriptions;
-(id)AVVideoSettingsForSessionPreset:(id)arg1 ;
-(SCD_Struct_AV36)maxH264PhotoDimensions;
-(SCD_Struct_AV36)maxH264VideoDimensions;
-(int)minMacroblocksForHighProfileUpTo30fps;
-(int)minMacroblocksForHighProfileAbove30fps;
-(BOOL)usesQuantizationScalingMatrix_H264_Steep_16_48;
-(void)setBravoCameraSelectionBehavior:(id)arg1 ;
-(BOOL)isConnected;
-(NSString *)uniqueID;
-(BOOL)isOpen;
-(BOOL)isVideoStabilizationSupported;
-(BOOL)hasFlash;
-(BOOL)lockForConfiguration:(id*)arg1 ;
-(BOOL)isFlashModeSupported:(long long)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)unlockForConfiguration;
-(BOOL)hasTorch;
-(BOOL)isTorchModeSupported:(long long)arg1 ;
-(void)setTorchMode:(long long)arg1 ;
-(BOOL)isFocusModeSupported:(long long)arg1 ;
-(void)setFocusMode:(long long)arg1 ;
-(void)rampExponentiallyToVideoZoomFactor:(float)arg1 withDuration:(double)arg2 ;
-(void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(AVCaptureDeviceFormat *)activeFormat;
-(long long)flashMode;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(id)bravoCameraSelectionBehavior;
-(void)setAutoShallowDepthOfFieldEffectEnabled:(BOOL)arg1 ;
-(long long)exposureMode;
-(BOOL)isAdjustingExposure;
-(float)exposureTargetBias;
-(SCD_Struct_AV2)activeVideoMaxFrameDuration;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_AV2)arg1 ;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(float)torchLevel;
-(long long)torchMode;
-(BOOL)isFocusPointOfInterestSupported;
-(CGPoint)focusPointOfInterest;
-(long long)focusMode;
-(BOOL)isSmoothAutoFocusEnabled;
-(BOOL)isExposurePointOfInterestSupported;
-(CGPoint)exposurePointOfInterest;
-(BOOL)isTorchActive;
-(BOOL)isFlashActive;
-(BOOL)isTorchAvailable;
-(BOOL)isFlashAvailable;
-(double)videoZoomFactor;
-(void)setActiveFormat:(AVCaptureDeviceFormat *)arg1 ;
-(void)setAutomaticallyAdjustsVideoHDREnabled:(BOOL)arg1 ;
-(void)setVideoHDREnabled:(BOOL)arg1 ;
-(long long)activeColorSpace;
-(void)setActiveColorSpace:(long long)arg1 ;
-(void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1 ;
-(BOOL)isImageControlModeSupported:(long long)arg1 ;
-(void)setImageControlMode:(long long)arg1 ;
-(BOOL)isFaceDetectionSupported;
-(BOOL)isFaceDetectionDuringVideoPreviewSupported;
-(BOOL)isFaceDetectionDrivenImageProcessingEnabled;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1 ;
-(BOOL)hasMediaType:(id)arg1 ;
-(NSArray *)formats;
-(float)lensPosition;
-(void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isSmoothAutoFocusSupported;
-(void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)isAdjustingFocus;
-(BOOL)isHighDynamicRangeScene;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(BOOL)isExposureModeSupported:(long long)arg1 ;
-(void)setExposureMode:(long long)arg1 ;
-(BOOL)isEyeDetectionSupported;
-(BOOL)isEyeClosedDetectionSupported;
-(void)setEyeDetectionEnabled:(BOOL)arg1 ;
-(void)setEyeClosedDetectionEnabled:(BOOL)arg1 ;
-(BOOL)isSmileDetectionSupported;
-(void)setSmileDetectionEnabled:(BOOL)arg1 ;
-(BOOL)isLowLightBoostSupported;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1 ;
-(BOOL)isHighDynamicRangeSceneDetectionSupported;
-(BOOL)isHDRSupported;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(void)setSmoothAutoFocusEnabled:(BOOL)arg1 ;
-(BOOL)isWhiteBalanceModeSupported:(long long)arg1 ;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(BOOL)isAutoShallowDepthOfFieldEffectEnabled;
-(void)setVideoZoomFactor:(double)arg1 ;
-(SCD_Struct_AV2)activeVideoMinFrameDuration;
-(BOOL)isLockedForConfiguration;
-(void)cancelVideoZoomRamp;
-(float)minExposureTargetBias;
-(float)maxExposureTargetBias;
-(void)setExposureTargetBias:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1 ;
-(id)deviceType;
@end

