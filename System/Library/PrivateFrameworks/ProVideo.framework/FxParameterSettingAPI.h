/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FxParameterSettingAPI
@required
-(BOOL)setFloatValue:(double)arg1 toParm:(unsigned)arg2 atTime:(double)arg3;
-(BOOL)setIntValue:(int)arg1 toParm:(unsigned)arg2 atTime:(double)arg3;
-(BOOL)setBoolValue:(BOOL)arg1 toParm:(unsigned)arg2 atTime:(double)arg3;
-(BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned)arg4 atTime:(double)arg5;
-(BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned)arg5 atTime:(double)arg6;
-(BOOL)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned)arg3 atTime:(double)arg4;
-(BOOL)setCustomParameterValue:(id)arg1 toParm:(unsigned)arg2;
-(BOOL)setParameterFlags:(unsigned)arg1 toParm:(unsigned)arg2;

@end

