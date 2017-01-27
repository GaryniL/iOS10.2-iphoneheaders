/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface ICDebugTimer : NSObject {

	double _elapsedTime;
	NSDate* _startingDate;

}

@property (retain) NSDate * startingDate;              //@synthesize startingDate=_startingDate - In the implementation block
@property (assign) double elapsedTime;                 //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(id)debugTimerForClass:(Class)arg1 ;
+(void)enableTimersForClass:(Class)arg1 ;
-(void)stop;
-(void)start;
-(void)resume;
-(void)pause;
-(double)elapsedTime;
-(NSDate *)startingDate;
-(void)setElapsedTime:(double)arg1 ;
-(void)setStartingDate:(NSDate *)arg1 ;
@end
