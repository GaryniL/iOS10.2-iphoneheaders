/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Reminders.siriUIBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKSource, NSMutableArray;

@interface RemindersCalendarSourceInfo : NSObject {

	EKSource* _source;
	NSMutableArray* _array;

}

@property (readonly) NSMutableArray * calendarArray;              //@synthesize array=_array - In the implementation block
+(id)sortedGroupsOfCalendarsInEventStore:(id)arg1 includingInvitations:(BOOL)arg2 ;
-(id)title;
-(id)source;
-(int)sortOrder;
-(id)initWithSource:(id)arg1 ;
-(BOOL)canAddList;
-(BOOL)_isNonEmpty;
-(BOOL)canDeleteList;
-(BOOL)shouldShowWhenEditingLists;
-(BOOL)shouldShowWhenViewingLists;
-(NSMutableArray *)calendarArray;
@end
