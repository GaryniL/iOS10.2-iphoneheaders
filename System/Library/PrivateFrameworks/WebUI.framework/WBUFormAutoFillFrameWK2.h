/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <libobjc.A.dylib/WBSFormAutoFillFrame.h>

@class WKWebProcessPlugInFrame, NSString;

@interface WBUFormAutoFillFrameWK2 : NSObject <WBSFormAutoFillFrame> {

	WKWebProcessPlugInFrame* _plugInFrame;

}

@property (nonatomic,readonly) WKWebProcessPlugInFrame * plugInFrame;              //@synthesize plugInFrame=_plugInFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoFillFrameWithWebProcessPlugInFrame:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)containsAnyFormElements;
-(id)committedURL;
-(void)enumerateChildFramesUsingBlock:(/*^block*/id)arg1 ;
-(OpaqueJSContextRef)jsContextForMetadataControllerScriptWorld;
-(OpaqueFormAutoFillFrameRef)frameRef;
-(id)pageMainFrame;
-(OpaqueJSValueRef)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1 ;
-(id)initWithWebProcessPlugInFrame:(id)arg1 ;
-(id)_pageContoller;
-(id)_formMetadataController;
-(WKWebProcessPlugInFrame *)plugInFrame;
@end
