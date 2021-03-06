/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBCategory : PBCodable <NSCopying> {

	NSMutableArray* _categoryHierarchys;
	NSMutableArray* _curatedTagIds;
	NSString* _entityId;
	NSString* _name;
	NSMutableArray* _recommendedChannels;
	NSMutableArray* _recommendedTopics;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityId; 
@property (nonatomic,retain) NSString * entityId;                               //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,retain) NSMutableArray * recommendedTopics;                //@synthesize recommendedTopics=_recommendedTopics - In the implementation block
@property (nonatomic,retain) NSMutableArray * recommendedChannels;              //@synthesize recommendedChannels=_recommendedChannels - In the implementation block
@property (nonatomic,retain) NSMutableArray * categoryHierarchys;               //@synthesize categoryHierarchys=_categoryHierarchys - In the implementation block
@property (nonatomic,retain) NSMutableArray * curatedTagIds;                    //@synthesize curatedTagIds=_curatedTagIds - In the implementation block
+(Class)recommendedTopicsType;
+(Class)recommendedChannelsType;
+(Class)categoryHierarchyType;
+(Class)curatedTagIdsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(NSString *)entityId;
-(unsigned long long)categoryHierarchysCount;
-(NSMutableArray *)categoryHierarchys;
-(NSMutableArray *)curatedTagIds;
-(NSMutableArray *)recommendedTopics;
-(NSMutableArray *)recommendedChannels;
-(void)addRecommendedTopics:(id)arg1 ;
-(void)addRecommendedChannels:(id)arg1 ;
-(void)addCategoryHierarchy:(id)arg1 ;
-(void)addCuratedTagIds:(id)arg1 ;
-(void)setEntityId:(NSString *)arg1 ;
-(BOOL)hasEntityId;
-(void)clearRecommendedTopics;
-(unsigned long long)recommendedTopicsCount;
-(id)recommendedTopicsAtIndex:(unsigned long long)arg1 ;
-(void)clearRecommendedChannels;
-(unsigned long long)recommendedChannelsCount;
-(id)recommendedChannelsAtIndex:(unsigned long long)arg1 ;
-(void)clearCategoryHierarchys;
-(id)categoryHierarchyAtIndex:(unsigned long long)arg1 ;
-(void)clearCuratedTagIds;
-(unsigned long long)curatedTagIdsCount;
-(id)curatedTagIdsAtIndex:(unsigned long long)arg1 ;
-(void)setRecommendedTopics:(NSMutableArray *)arg1 ;
-(void)setRecommendedChannels:(NSMutableArray *)arg1 ;
-(void)setCategoryHierarchys:(NSMutableArray *)arg1 ;
-(void)setCuratedTagIds:(NSMutableArray *)arg1 ;
@end

