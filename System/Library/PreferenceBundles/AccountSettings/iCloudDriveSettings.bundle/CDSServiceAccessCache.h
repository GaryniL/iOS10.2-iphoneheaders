/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/iCloudDriveSettings.bundle/iCloudDriveSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iCloudDriveSettings/iCloudDriveSettings-Structs.h>
@class NSMutableDictionary;

@interface CDSServiceAccessCache : NSObject {

	NSMutableDictionary* _accessInfoByBundleID;

}
-(CFBundleRef)bundleForBundleID:(id)arg1 ;
-(void)setAccessGranted:(BOOL)arg1 forBundleID:(id)arg2 ;
-(id)serviceNamesForBundleID:(id)arg1 ;
-(BOOL)isAccessGrantedForBundleID:(id)arg1 ;
-(id)servicesForBundleID:(id)arg1 ;
-(id)allBundleIDs;
-(void)addAccessInfo:(id)arg1 forServiceName:(id)arg2 ;
@end
