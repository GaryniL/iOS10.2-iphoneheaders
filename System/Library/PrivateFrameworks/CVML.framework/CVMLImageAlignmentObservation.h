/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVML-Structs.h>
#import <CVML/CVMLObservation.h>

@class CVMLImageRegistrationSignature;

@interface CVMLImageAlignmentObservation : CVMLObservation {

	CVMLImageRegistrationSignature* _baseImageSignature;
	CVMLImageRegistrationSignature* _currentImageSignature;
	CGAffineTransform _alignmentTransform;

}

@property (assign) CGAffineTransform alignmentTransform;                                //@synthesize alignmentTransform=_alignmentTransform - In the implementation block
@property (retain) CVMLImageRegistrationSignature * baseImageSignature;                 //@synthesize baseImageSignature=_baseImageSignature - In the implementation block
@property (retain) CVMLImageRegistrationSignature * currentImageSignature;              //@synthesize currentImageSignature=_currentImageSignature - In the implementation block
-(CGAffineTransform)alignmentTransform;
-(void)setAlignmentTransform:(CGAffineTransform)arg1 ;
-(CVMLImageRegistrationSignature *)baseImageSignature;
-(void)setBaseImageSignature:(CVMLImageRegistrationSignature *)arg1 ;
-(CVMLImageRegistrationSignature *)currentImageSignature;
-(void)setCurrentImageSignature:(CVMLImageRegistrationSignature *)arg1 ;
@end

