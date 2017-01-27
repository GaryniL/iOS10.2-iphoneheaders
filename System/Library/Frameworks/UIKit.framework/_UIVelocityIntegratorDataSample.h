/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDate;

@interface _UIVelocityIntegratorDataSample : NSObject {

	NSDate* _time;
	CGVector _translation;
	CGPoint _point;

}

@property (nonatomic,retain) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) CGVector translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint point;                     //@synthesize point=_point - In the implementation block
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(NSDate *)time;
-(CGVector)translation;
-(void)setTime:(NSDate *)arg1 ;
-(BOOL)isSampleDistinctEnoughFromTouchLocation:(CGPoint)arg1 ;
-(void)updateTimeToNow;
-(void)setTranslation:(CGVector)arg1 ;
@end
