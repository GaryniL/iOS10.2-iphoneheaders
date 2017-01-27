/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface _KSTextReplacementCoreDataStore : NSObject {

	NSObject*<OS_dispatch_queue> _queueMOC;
	NSObject*<OS_dispatch_queue> _queuePSC;
	NSString* _directoryPath;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (nonatomic,retain) NSString * directoryPath;                                               //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
+(id)localCloudEntryFromMocObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(id)initWithDirectoryPath:(id)arg1 ;
-(BOOL)didMakeInitialPull;
-(void)markDeletesForTextReplacementEntries:(id)arg1 ;
-(void)recordTextReplacementEntries:(id)arg1 ;
-(void)deleteTextReplacementsWithPredicate:(id)arg1 ;
-(void)saveCKFetchToken:(id)arg1 ;
-(id)queryEntriesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
-(void)deleteTextReplacementsFromLocalStoreWithNames:(id)arg1 excludeSavesToCloud:(BOOL)arg2 ;
-(id)getCKFetchToken;
-(unsigned long long)countEntriesWithPredicate:(id)arg1 ;
-(void)fetchAndMergeTextReplacementEntry:(id)arg1 context:(id)arg2 ;
-(id)fetchTextReplacementEntry:(id)arg1 context:(id)arg2 ;
-(id)queryManagedObjectsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)getSyncStateEntry;
-(id)fetchTextReplacementWithUniqueName:(id)arg1 context:(id)arg2 ;
-(id)textReplacementEntriesWithLimit:(unsigned long long)arg1 ;
-(NSString *)directoryPath;
-(void)setDirectoryPath:(NSString *)arg1 ;
@end
