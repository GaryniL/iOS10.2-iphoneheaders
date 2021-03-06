/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSXPCConnection, SSUpdatesDatabase;

@interface SSSoftwareUpdatesStore : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	SSXPCConnection* _connection;
	SSUpdatesDatabase* _database;
	BOOL _didMigration;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	void* _mobileCoreServices;
	BOOL _useLocalRead;
	BOOL _useLocalWrite;

}
+(id)databasePath;
-(id)_copyUpdates;
-(id)_copyUpdatesWithSession:(id)arg1 predicate:(id)arg2 ;
-(void)_readUsingSessionBlock:(/*^block*/id)arg1 ;
-(BOOL)_migrateReadOnlyDatabase;
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)removeUpdateBulletins;
-(void)showApplicationBadgeForPendingUpdates;
-(void)updateItemWithIdentifer:(long long)arg1 downloadPhase:(id)arg2 properties:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)updateWithItemIdentifier:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
@end

