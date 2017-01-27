/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationMatchInfo;

@interface CLLocationInternal : NSObject {

	SCD_Struct_CL2 fLocation;
	CLLocationMatchInfo* fMatchInfo;
	double fTrustedTimestamp;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL12)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 ;
-(id)initWithClientLocation:(SCD_Struct_CL12)arg1 ;
@end
