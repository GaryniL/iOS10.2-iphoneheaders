/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, WBSSQLiteDatabase, NSObject, NSMutableDictionary;

@interface SFBrowserStateSQLiteStore : NSObject {

	NSURL* _databaseURL;
	WBSSQLiteDatabase* _database;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSMutableDictionary* _tabUUIDStrings;
	NSMutableDictionary* _browserWindowDatabaseIDs;

}
-(id)init;
-(void)dealloc;
-(void)closeDatabase;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)_closeDatabase;
-(BOOL)_isDatabaseOpen;
-(int)_schemaVersion;
-(int)_createFreshDatabaseSchema;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(int)_migrateToSchemaVersion_2;
-(BOOL)_checkDatabaseIntegrity;
-(void)_openDatabaseAndCheckIntegrity:(BOOL)arg1 ;
-(void)_migrateFromLegacyPlistIfNeeded;
-(void)_migrateFromLegacyPlistWithPath:(id)arg1 ;
-(void)_updateBrowserWindowStateWithDictionary:(id)arg1 ;
-(BOOL)_updateTabStateWithData:(id)arg1 ;
-(void)_insertTabStateWithData:(id)arg1 ;
-(void)_readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cacheUUIDForTabStateData:(id)arg1 ;
-(void)_setDatabaseID:(long long)arg1 browserWindow:(id)arg2 ;
-(long long)_saveBrowserWindowStateWithData:(id)arg1 ;
-(long long)_databaseIDForBrowserWindow:(id)arg1 ;
-(BOOL)_isTabStateCached:(id)arg1 ;
-(long long)_saveBrowserWindowStateWithDictionary:(id)arg1 ;
-(void)_updateOrInsertTabStateWithData:(id)arg1 ;
-(id)_tabUUIDsInWindow:(id)arg1 ;
-(id)_sqliteStatementForTabDeleting;
-(void)_updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2 ;
-(id)_readSavedSessionStateDataForTabWithUUID:(id)arg1 ;
-(void)_vacuum;
-(id)browserWindowUUIDs;
-(void)saveTabStateWithDictionary:(id)arg1 ;
-(void)readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)tabStatesWithBrowserWindowUUID:(id)arg1 ;
-(void)updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2 ;
-(void)updateBrowserWindowStateWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)readSavedSessionStateDataForTabWithUUID:(id)arg1 ;
-(BOOL)deleteTabStateWithBrowserWindowUUID:(id)arg1 andRemoveWindow:(BOOL)arg2 ;
-(void)updateTabWithTabStateData:(id)arg1 ;
-(void)removeTabWithTabData:(id)arg1 ;
-(BOOL)deleteAllSavedStates;
-(void)checkPointWriteAheadLog;
-(void)setSecureDeleteEnabled:(BOOL)arg1 ;
@end
