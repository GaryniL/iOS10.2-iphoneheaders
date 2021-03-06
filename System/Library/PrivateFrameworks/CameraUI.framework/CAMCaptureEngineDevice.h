/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCaptureDeviceInput, AVCaptureDeviceFormat, AVCaptureDevice, CAMCaptureEngine, CAMMemoizationCache, NSString;

@interface CAMCaptureEngineDevice : NSObject {

	AVCaptureDeviceInput* _captureDeviceInput;
	AVCaptureDeviceFormat* _stillImageDeviceFormat;
	AVCaptureDevice* _captureDevice;
	CAMCaptureEngine* __captureEngine;
	CAMMemoizationCache* __videoDeviceFormatForVideoConfiguration;
	CAMMemoizationCache* __videoSessionPresetForVideoConfiguration;
	AVCaptureDeviceFormat* __panoramaDeviceFormat;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _captureEngine;                                    //@synthesize _captureEngine=__captureEngine - In the implementation block
@property (nonatomic,readonly) CAMMemoizationCache * _videoDeviceFormatForVideoConfiguration;               //@synthesize _videoDeviceFormatForVideoConfiguration=__videoDeviceFormatForVideoConfiguration - In the implementation block
@property (nonatomic,readonly) CAMMemoizationCache * _videoSessionPresetForVideoConfiguration;              //@synthesize _videoSessionPresetForVideoConfiguration=__videoSessionPresetForVideoConfiguration - In the implementation block
@property (nonatomic,readonly) AVCaptureDeviceFormat * _panoramaDeviceFormat;                               //@synthesize _panoramaDeviceFormat=__panoramaDeviceFormat - In the implementation block
@property (nonatomic,readonly) AVCaptureDevice * captureDevice;                                             //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) AVCaptureDeviceInput * captureDeviceInput;                                   //@synthesize captureDeviceInput=_captureDeviceInput - In the implementation block
@property (nonatomic,readonly) AVCaptureDeviceFormat * stillImageDeviceFormat;                              //@synthesize stillImageDeviceFormat=_stillImageDeviceFormat - In the implementation block
@property (nonatomic,readonly) NSString * stillImageSessionPreset; 
@property (nonatomic,readonly) AVCaptureDeviceFormat * timelapseDeviceFormat; 
@property (nonatomic,readonly) NSString * timelapseSessionPreset; 
@property (nonatomic,readonly) AVCaptureDeviceFormat * portraitModeDeviceFormat; 
@property (nonatomic,readonly) NSString * portraitModeSessionPreset; 
-(id)init;
-(id)initWithEngine:(id)arg1 captureDevice:(id)arg2 ;
-(AVCaptureDevice *)captureDevice;
-(CAMMemoizationCache *)_videoDeviceFormatForVideoConfiguration;
-(CAMMemoizationCache *)_videoSessionPresetForVideoConfiguration;
-(AVCaptureDeviceFormat *)stillImageDeviceFormat;
-(id)highestQualityDeviceFormatForVideoConfiguration:(long long)arg1 ;
-(CAMCaptureEngine *)_captureEngine;
-(id)panoramaDeviceFormatForConfiguration:(id)arg1 ;
-(AVCaptureDeviceFormat *)timelapseDeviceFormat;
-(AVCaptureDeviceFormat *)portraitModeDeviceFormat;
-(NSString *)stillImageSessionPreset;
-(id)highestQualitySessionPresetForVideoConfiguration:(long long)arg1 ;
-(id)panoramaSessionPresetForConfiguration:(id)arg1 ;
-(NSString *)timelapseSessionPreset;
-(NSString *)portraitModeSessionPreset;
-(AVCaptureDeviceInput *)captureDeviceInput;
-(id)videoDeviceFormatForGraphConfiguration:(id)arg1 ;
-(id)videoDevicePresetForGraphConfiguration:(id)arg1 ;
-(AVCaptureDeviceFormat *)_panoramaDeviceFormat;
@end

