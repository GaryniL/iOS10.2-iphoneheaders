/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface GEOURLRouteHandle : PBCodable <NSCopying> {

	NSData* _directionsResponseID;
	NSData* _routeID;
	NSData* _transitData;
	NSData* _zilchPoints;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;               //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                            //@synthesize routeID=_routeID - In the implementation block
@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                        //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitData; 
@property (nonatomic,retain) NSData * transitData;                        //@synthesize transitData=_transitData - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDirectionsResponseID;
-(BOOL)hasRouteID;
-(BOOL)hasZilchPoints;
-(BOOL)hasTransitData;
-(NSData *)directionsResponseID;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(NSData *)zilchPoints;
-(void)setZilchPoints:(NSData *)arg1 ;
-(NSData *)transitData;
-(void)setTransitData:(NSData *)arg1 ;
@end

