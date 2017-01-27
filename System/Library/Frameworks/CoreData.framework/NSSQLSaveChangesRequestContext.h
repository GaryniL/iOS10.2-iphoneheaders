/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSSQLSavePlan, NSFaultHandler, NSSet, NSMutableDictionary, NSSQLModel, NSSaveChangesRequest;

@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext {

	NSDictionary* _metadataToWrite;
	NSSQLSavePlan* _savePlan;
	NSFaultHandler* _faultHandler;
	NSSet* _objectIDsToPruneTrigger;
	NSMutableDictionary* _originalCachedRows;

}

@property (nonatomic,readonly) NSDictionary * metadataToWrite;                        //@synthesize metadataToWrite=_metadataToWrite - In the implementation block
@property (nonatomic,readonly) NSSQLSavePlan * savePlan;                              //@synthesize savePlan=_savePlan - In the implementation block
@property (nonatomic,readonly) NSSQLModel * model; 
@property (nonatomic,readonly) NSSaveChangesRequest * request; 
@property (nonatomic,readonly) NSFaultHandler * faultHandler;                         //@synthesize faultHandler=_faultHandler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * originalCachedRows;              //@synthesize originalCachedRows=_originalCachedRows - In the implementation block
-(NSFaultHandler *)faultHandler;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(void)executeRequestUsingConnection:(id)arg1 ;
-(void)executePrologue;
-(id)rowCache;
-(void)executeEpilogue;
-(NSSQLSavePlan *)savePlan;
-(BOOL)hasChangesForWriting;
-(NSDictionary *)metadataToWrite;
-(id)originalRowForObjectID:(id)arg1 ;
-(void)setOriginalRow:(id)arg1 forObjectID:(id)arg2 ;
-(NSMutableDictionary *)originalCachedRows;
-(void)dealloc;
-(NSSaveChangesRequest *)request;
-(NSSQLModel *)model;
@end
