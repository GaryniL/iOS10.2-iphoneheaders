/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridCameraCellLayoutOptions : HUGridCellLayoutOptions {

	double _headerViewHeight;
	double _cameraViewAspectRatio;
	double _headerHorizontalInnerMargins;

}

@property (assign,nonatomic) double headerViewHeight;                          //@synthesize headerViewHeight=_headerViewHeight - In the implementation block
@property (assign,nonatomic) double cameraViewAspectRatio;                     //@synthesize cameraViewAspectRatio=_cameraViewAspectRatio - In the implementation block
@property (assign,nonatomic) double headerHorizontalInnerMargins;              //@synthesize headerHorizontalInnerMargins=_headerHorizontalInnerMargins - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHeaderViewHeight:(double)arg1 ;
-(double)headerViewHeight;
-(double)headerHorizontalInnerMargins;
-(double)cameraViewAspectRatio;
-(void)setCameraViewAspectRatio:(double)arg1 ;
-(void)setHeaderHorizontalInnerMargins:(double)arg1 ;
@end

