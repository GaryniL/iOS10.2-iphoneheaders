/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_PASDeviceStateProtocol.h>

@class NSString;

@interface _PASDeviceState : NSObject <_PASDeviceStateProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)runBlockWhenDeviceIsClassCUnlocked:(/*^block*/id)arg1 ;
+(BOOL)isDeviceFormattedForProtection;
+(void)blockUntilFirstUnlock;
+(BOOL)isClassCLocked;
+(int)lockState;
+(id)registerForLockStateChangeNotifications:(/*^block*/id)arg1 ;
+(id)currentOsBuild;
+(void)unregisterForLockStateChangeNotifications:(id)arg1 ;
+(BOOL)isUnlocked;
+(BOOL)isConstrainedDevice;
@end

