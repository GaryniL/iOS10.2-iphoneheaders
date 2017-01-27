/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {

	SCDynamicStoreRef _dynamicStore;
	CFRunLoopSourceRef _dynamicStoreSource;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)registerForEthernetAdapterNotifications;
-(id)ethernetNetworkInterfaces;
-(BOOL)hasEthernetNetworkInterfaces;
-(void)ethernetDynamicStoreDidChange;
@end
