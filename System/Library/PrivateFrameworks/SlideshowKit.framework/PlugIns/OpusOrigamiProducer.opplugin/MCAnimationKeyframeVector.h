/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCAnimationKeyframe.h>

@interface MCAnimationKeyframeVector : MCAnimationKeyframe {

	SCD_Struct_MC14 mVector;

}

@property (assign,nonatomic) SCD_Struct_MC14 vector; 
+(id)keyframeWithVector:(SCD_Struct_MC14)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
+(id)keyframeWithVector:(SCD_Struct_MC14)arg1 atTime:(double)arg2 ;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(SCD_Struct_MC14)vector;
-(id)imprint;
-(void)setVector:(SCD_Struct_MC14)arg1 ;
@end

