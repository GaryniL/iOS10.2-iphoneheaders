/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OITSUFlushableObject.h>

@interface OITSUFlushableCachedImage : OITSUFlushableObject {

	CGImageRef _image;
	id _delegate;
	SEL _delegateCreateImageSelector;

}
-(void)dealloc;
-(void)unload;
-(id)initWithDelegate:(id)arg1 createImageSelector:(SEL)arg2 ;
-(BOOL)hasFlushableContent;
-(CGImageRef)newImage;
@end

