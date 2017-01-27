/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BlockedPlugin : NSObject {

	NSString* _bundleName;
	NSString* _plugName;
	NSString* _plugVersion;

}

@property (readonly) NSString * bundleName;               //@synthesize bundleName=_bundleName - In the implementation block
@property (readonly) NSString * plugName;                 //@synthesize plugName=_plugName - In the implementation block
@property (readonly) NSString * plugVersion;              //@synthesize plugVersion=_plugVersion - In the implementation block
-(NSString *)bundleName;
-(id)init:(id)arg1 plugName:(id)arg2 plugVersion:(id)arg3 ;
-(NSString *)plugName;
-(NSString *)plugVersion;
@end
