/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSTimeZone.h>

@interface __NSPlaceholderTimeZone : NSTimeZone
+(id)immutablePlaceholder;
+(void)initialize;
-(id)__initWithName:(id)arg1 data:(id)arg2 cache:(BOOL)arg3 ;
-(id)__initWithName:(id)arg1 cache:(BOOL)arg2 ;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)name;
-(id)data;
-(id)initWithName:(id)arg1 ;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
@end
