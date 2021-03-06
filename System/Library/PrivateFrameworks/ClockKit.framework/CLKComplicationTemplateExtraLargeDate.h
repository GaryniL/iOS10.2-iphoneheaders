/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKDateTextProvider;

@interface CLKComplicationTemplateExtraLargeDate : CLKComplicationTemplate {

	CLKDateTextProvider* _weekdayTextProvider;
	CLKDateTextProvider* _dayTextProvider;
	unsigned long long _highlightMode;

}

@property (nonatomic,copy) CLKDateTextProvider * weekdayTextProvider;              //@synthesize weekdayTextProvider=_weekdayTextProvider - In the implementation block
@property (nonatomic,copy) CLKDateTextProvider * dayTextProvider;                  //@synthesize dayTextProvider=_dayTextProvider - In the implementation block
@property (assign,nonatomic) unsigned long long highlightMode;                     //@synthesize highlightMode=_highlightMode - In the implementation block
-(unsigned long long)highlightMode;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKDateTextProvider *)weekdayTextProvider;
-(CLKDateTextProvider *)dayTextProvider;
-(void)setWeekdayTextProvider:(CLKDateTextProvider *)arg1 ;
-(void)setDayTextProvider:(CLKDateTextProvider *)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setHighlightLine2:(BOOL)arg1 ;
-(BOOL)highlightLine2;
@end

