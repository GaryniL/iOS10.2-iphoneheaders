/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBWriter.h>

@interface GEONavdCacheDBWriter : GEODBWriter {

	sqlite3_stmtRef _sqlInsertCache;
	sqlite3_stmtRef _sqlDeleteRowForRowID;
	sqlite3_stmtRef _sqlUpdateCache;
	sqlite3_stmtRef _sqlDeleteAllRows;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)_openIfNecessary;
-(void)performStatementPreparationTasks;
-(void)performTableCreationTasks;
-(void)_createCacheTable;
-(long long)_insertWithKey:(id)arg1 value:(id)arg2 ;
-(void)_deleteRowsWithRowIDs:(id)arg1 ;
-(BOOL)_updateRowId:(long long)arg1 withKey:(id)arg2 value:(id)arg3 ;
-(void)_deleteAllRows;
@end

