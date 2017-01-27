/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>
#import <DuetKnowledgeMonitor/DKPeriodType.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>

@class NSDate, _DKEventStream, _DKObject, NSTimeZone, NSString;

@interface _DKEvent : _DKObject <DKPeriodType, _DKHasComparableValue, _DKHasPrimaryValue> {

	NSDate* _startDate;
	NSDate* _endDate;
	_DKEventStream* _stream;
	_DKObject* _value;
	NSTimeZone* _timeZone;
	double _confidence;

}

@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (readonly) double duration; 
@property (retain) _DKEventStream * stream;                         //@synthesize stream=_stream - In the implementation block
@property (retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSTimeZone * timeZone;                           //@synthesize timeZone=_timeZone - In the implementation block
@property (retain) _DKObject * value;                               //@synthesize value=_value - In the implementation block
@property (assign) double confidence;                               //@synthesize confidence=_confidence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_acceptableLaunchReason:(id)arg1 ;
+(long long)deviceTypeFromBluetoothDeviceType:(id)arg1 ;
+(long long)sceneTypeForActionSetIdentifier:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(double)arg5 metadata:(id)arg6 ;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)eventValueFromManagedObject:(id)arg1 streamName:(id)arg2 readMetadata:(BOOL)arg3 cache:(id)arg4 ;
+(id)eventStreamFromManagedObject:(id)arg1 forValue:(id)arg2 cache:(id)arg3 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 categoryIntegerValue:(long long)arg4 metadata:(id)arg5 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 quantityDoubleValue:(double)arg4 metadata:(id)arg5 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 identifierStringValue:(id)arg4 metadata:(id)arg5 ;
+(id)entityName;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 metadata:(id)arg5 ;
-(id)convertToAppLaunchEvent;
-(id)convertToAudioEvent;
-(id)convertToBluetoothEvent;
-(id)convertToDeviceFirstWakeupEvent;
-(id)convertToStarkEvent;
-(id)convertToNowPlayingEvent;
-(id)convertToHomeKitSceneEvent;
-(id)convertToHomeKitAccessoryEvent;
-(id)convertToHomeKitRoomViewEvent;
-(id)convertToMicroLocationEventUsingCache:(id)arg1 ;
-(id)convertToUserActivityLocationEvent;
-(double)duration;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)integerValue;
-(double)doubleValue;
-(BOOL)boolValue;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(_DKObject *)value;
-(void)setValue:(_DKObject *)arg1 ;
-(id)stringValue;
-(NSTimeZone *)timeZone;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(id)primaryValue;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)initWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(double)arg5 metadata:(id)arg6 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(long long)compareValue:(id)arg1 ;
-(_DKEventStream *)stream;
-(void)setStream:(_DKEventStream *)arg1 ;
@end
