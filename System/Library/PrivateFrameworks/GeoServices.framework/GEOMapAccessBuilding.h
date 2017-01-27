/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapBuilding.h>

@class NSArray, NSString;

@interface GEOMapAccessBuilding : NSObject <GEOMapBuilding> {

	SCD_Struct_GE104* _buildingFeature;
	NSArray* _sections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * sections;                  //@synthesize sections=_sections - In the implementation block
-(void)dealloc;
-(NSArray *)sections;
-(id)initWithBuildingFeature:(SCD_Struct_GE104*)arg1 ;
@end
