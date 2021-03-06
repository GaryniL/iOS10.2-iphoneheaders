/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEODownloadMetadata, GEOResources;

@interface GEOResourceManifestDownload : PBCodable <NSCopying> {

	GEODownloadMetadata* _metadata;
	GEOResources* _resources;

}

@property (nonatomic,readonly) BOOL hasResources; 
@property (nonatomic,retain) GEOResources * resources;                    //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) GEODownloadMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
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
-(GEOResources *)resources;
-(void)setResources:(GEOResources *)arg1 ;
-(GEODownloadMetadata *)metadata;
-(void)setMetadata:(GEODownloadMetadata *)arg1 ;
-(BOOL)hasResources;
-(id)initWithResourceManifestData:(id)arg1 ;
@end

