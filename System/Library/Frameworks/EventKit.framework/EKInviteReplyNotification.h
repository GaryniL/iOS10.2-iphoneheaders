/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKCalendar, NSString, NSDate;

@interface EKInviteReplyNotification : EKObject

@property (nonatomic,readonly) EKCalendar * calendar; 
@property (nonatomic,readonly) NSString * calendarName; 
@property (nonatomic,readonly) NSString * shareeDisplayName; 
@property (nonatomic,readonly) NSString * shareeAddress; 
@property (nonatomic,readonly) NSString * shareeFirstName; 
@property (nonatomic,readonly) NSString * shareeLastName; 
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) BOOL alerted; 
-(EKCalendar *)calendar;
-(unsigned long long)status;
-(NSString *)calendarName;
-(NSString *)shareeDisplayName;
-(NSString *)shareeAddress;
-(NSString *)shareeFirstName;
-(NSString *)shareeLastName;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(id)_persistentInviteReplyNotification;
-(void)clearAlertedStatus;
-(NSDate *)creationDate;
-(BOOL)alerted;
@end
