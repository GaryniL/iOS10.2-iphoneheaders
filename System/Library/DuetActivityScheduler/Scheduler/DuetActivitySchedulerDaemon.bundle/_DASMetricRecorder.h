/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DASMetricRecorder : NSObject
+(id)metricQueue;
+(void)incrementOccurrencesForKey:(id)arg1 byCount:(long long)arg2 ;
+(void)recordOccurrenceForKey:(id)arg1 ;
+(void)recordPredictionAccuracyForActivityLevel:(long long)arg1 atDate:(id)arg2 ;
+(void)updateAverageForKey:(id)arg1 withNumerator:(double)arg2 withDenominator:(double)arg3 ;
@end

