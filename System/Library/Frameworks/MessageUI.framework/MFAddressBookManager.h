/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@interface MFAddressBookManager : NSObject {

	void* _addressBook;
	os_unfair_lock_s _lock;
	CFDictionaryRef _clients;

}
+(BOOL)isAuthorizedToUseAddressBook;
+(id)sharedManager;
-(void)_applicationResumed:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)_handleAddressBookChangeNotification;
-(id)_clientWeakReferences;
-(void)_handleAddressBookPrefsChangeNotification;
-(void*)addressBook;
@end

