/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LifetimeServoAFLUTColumn;

@interface LifetimeServoAFLUT : NSObject {

	int _columnCount;
	int _minVoltage;
	int _maxVoltage;
	LifetimeServoAFLUTColumn* _afLUTColumns[26];

}
-(id)initWithAFTableColumns:(id)arg1 ;
-(float)accelerationFactor:(int)arg1 voltage:(int)arg2 ;
@end

