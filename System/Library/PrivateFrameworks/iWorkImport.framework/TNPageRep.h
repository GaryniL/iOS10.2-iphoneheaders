/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPageRep.h>

@interface TNPageRep : TSWPPageRep {

	CGRect _shadowPathRect;
	CGPathRef _shadowPath;

}
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)p_headerFooterIsVisibleAndInteractive:(int)arg1 ;
-(int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(CGPoint)arg2 ;
-(id)p_repForHeaderLayout:(id)arg1 ;
-(id)p_childRepForInfo:(id)arg1 ;
-(void)dealloc;
-(BOOL)isOpaque;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
