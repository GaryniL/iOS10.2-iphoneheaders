/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PROPlugInGroup : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)name;
-(id)displayName;
-(CFUUIDRef)uuid;
-(id)plugIns;
-(void)addPlugIn:(id)arg1 ;
-(id)plugInsForProtocols:(id)arg1 ;
-(void)removePlugIn:(id)arg1 ;
-(id)initWithUUID:(CFUUIDRef)arg1 name:(id)arg2 bundle:(id)arg3 ;
@end
