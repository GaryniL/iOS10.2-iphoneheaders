/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLCameraEffectsRendererDelegate <NSObject>
@required
-(void)cameraEffectsRendererDidStartPreview:(id)arg1;
-(void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(BOOL)arg2;
-(void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(BOOL)arg2;
-(void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(BOOL)arg2;
-(void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(BOOL)arg2 animated:(BOOL)arg3;
-(void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(BOOL)arg2;

@end
