/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionRecorder.h>

@protocol CNUIDefaultUserActionRecorderEventFactory;
@class CRRecentContactsLibrary, NSString;

@interface CNUIDefaultUserActionRecorder : NSObject <CNUIUserActionRecorder> {

	CRRecentContactsLibrary* _library;
	id<CNUIDefaultUserActionRecorderEventFactory> _eventFactory;

}

@property (nonatomic,readonly) CRRecentContactsLibrary * library;                                       //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) id<CNUIDefaultUserActionRecorderEventFactory> eventFactory;              //@synthesize eventFactory=_eventFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CRRecentContactsLibrary *)library;
-(void)recordUserAction:(id)arg1 ;
-(id)initWithRecentsLibrary:(id)arg1 eventFactory:(id)arg2 ;
-(id<CNUIDefaultUserActionRecorderEventFactory>)eventFactory;
@end
