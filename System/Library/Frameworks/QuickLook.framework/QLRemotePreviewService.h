/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLRemotePreviewService <NSObject>
@required
-(void)previewWillAppear:(BOOL)arg1;
-(void)previewDidAppear:(BOOL)arg1;
-(void)previewWillDisappear:(BOOL)arg1;
-(void)previewDidDisappear:(BOOL)arg1;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2;
-(void)previewWillFinishAppearing;
-(void)loadPreviewFromPreviewItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getPrinterProxyWithCompletionHandler:(/*^block*/id)arg1;

@end
