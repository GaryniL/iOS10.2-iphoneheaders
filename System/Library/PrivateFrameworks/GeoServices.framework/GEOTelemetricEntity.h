/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTelemetricEntity : PBCodable <NSCopying> {

	unsigned long long _eventValue;
	NSString* _eventDetail;
	int _eventKey;
	SCD_Struct_GE45 _has;

}

@property (assign,nonatomic) BOOL hasEventKey; 
@property (assign,nonatomic) int eventKey;                               //@synthesize eventKey=_eventKey - In the implementation block
@property (assign,nonatomic) BOOL hasEventValue; 
@property (assign,nonatomic) unsigned long long eventValue;              //@synthesize eventValue=_eventValue - In the implementation block
@property (nonatomic,readonly) BOOL hasEventDetail; 
@property (nonatomic,retain) NSString * eventDetail;                     //@synthesize eventDetail=_eventDetail - In the implementation block
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
-(int)eventKey;
-(void)setEventKey:(int)arg1 ;
-(void)setHasEventKey:(BOOL)arg1 ;
-(BOOL)hasEventKey;
-(id)eventKeyAsString:(int)arg1 ;
-(int)StringAsEventKey:(id)arg1 ;
-(void)setEventValue:(unsigned long long)arg1 ;
-(void)setHasEventValue:(BOOL)arg1 ;
-(BOOL)hasEventValue;
-(BOOL)hasEventDetail;
-(unsigned long long)eventValue;
-(NSString *)eventDetail;
-(void)setEventDetail:(NSString *)arg1 ;
@end

