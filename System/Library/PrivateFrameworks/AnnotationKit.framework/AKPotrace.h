/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKPotrace : NSObject {

	CGPathRef _cachedPath;
	potrace_bitmap_s* _potraceBitmap;
	potrace_param_s* _potraceParameters;

}

@property (assign) int turdsize; 
@property (assign) int turnpolicy; 
@property (assign) double alphamax; 
@property (assign) int opticurve; 
@property (assign) double opttolerance; 
+(CGPathRef)newCGPathFromPotracePath:(potrace_path_s*)arg1 ;
-(void)dealloc;
-(CGPathRef)CGPath;
-(void)_clearPathIfNecessary;
-(void)_generatePath;
-(id)initWithCGImage:(CGImageRef)arg1 flipped:(BOOL)arg2 ;
-(int)turdsize;
-(int)turnpolicy;
-(double)alphamax;
-(int)opticurve;
-(double)opttolerance;
-(void)setTurdsize:(int)arg1 ;
-(void)setTurnpolicy:(int)arg1 ;
-(void)setAlphamax:(double)arg1 ;
-(void)setOpticurve:(int)arg1 ;
-(void)setOpttolerance:(double)arg1 ;
@end
