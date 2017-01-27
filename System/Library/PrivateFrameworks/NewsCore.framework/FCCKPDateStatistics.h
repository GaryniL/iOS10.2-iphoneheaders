/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPDate;

@interface FCCKPDateStatistics : PBCodable <NSCopying> {

	FCCKPDate* _creation;
	FCCKPDate* _modification;

}

@property (nonatomic,readonly) BOOL hasCreation; 
@property (nonatomic,retain) FCCKPDate * creation;                  //@synthesize creation=_creation - In the implementation block
@property (nonatomic,readonly) BOOL hasModification; 
@property (nonatomic,retain) FCCKPDate * modification;              //@synthesize modification=_modification - In the implementation block
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
-(void)setCreation:(FCCKPDate *)arg1 ;
-(FCCKPDate *)creation;
-(void)setModification:(FCCKPDate *)arg1 ;
-(BOOL)hasCreation;
-(BOOL)hasModification;
-(FCCKPDate *)modification;
@end
