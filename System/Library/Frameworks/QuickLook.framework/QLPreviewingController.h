/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewingController <NSObject>
@optional
-(id)printer;
-(void)previewWillAppear:(BOOL)arg1;
-(void)previewDidAppear:(BOOL)arg1;
-(void)previewWillDisappear:(BOOL)arg1;
-(void)previewDidDisappear:(BOOL)arg1;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(BOOL)canShowToolBar;
-(void)previewIsAppearingWithProgress:(double)arg1;
-(void)previewWillFinishAppearing;
-(BOOL)canSwipeToDismiss;
-(BOOL)canRotate;

@required
-(void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
