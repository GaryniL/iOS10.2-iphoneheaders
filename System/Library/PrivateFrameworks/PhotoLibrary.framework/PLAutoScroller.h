/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class UIScrollView, NSTimer;

@interface PLAutoScroller : NSObject {

	UIScrollView* _targetScrollView;
	CGPoint _targetPoint;
	double _thresholdDistance;
	NSTimer* _autoscrollTimer;

}

@property (assign,nonatomic) CGPoint targetPoint;              //@synthesize targetPoint=_targetPoint - In the implementation block
@property (readonly) double thresholdDistance;                 //@synthesize thresholdDistance=_thresholdDistance - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_stopAutoscrollTimer;
-(CGPoint)targetPoint;
-(void)setTargetPoint:(CGPoint)arg1 ;
-(void)_updateAutoscrollTimer:(id)arg1 ;
-(id)initWithTargetScrollView:(id)arg1 thresholdDistance:(double)arg2 ;
-(double)thresholdDistance;
-(void)stopAndInvalidate;
@end
