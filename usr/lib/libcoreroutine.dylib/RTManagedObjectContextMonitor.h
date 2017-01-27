/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTManagedObjectContextMonitorChangeProtocol;
@class NSPredicate, NSEntityDescription, NSManagedObjectContext;

@interface RTManagedObjectContextMonitor : NSObject {

	id<RTManagedObjectContextMonitorChangeProtocol> _delegate;
	NSPredicate* _userMatchPredicate;
	NSEntityDescription* _entityDescription;
	NSPredicate* _entityDescriptionPredicate;
	NSManagedObjectContext* _managedObjectContext;
	long long _changeType;

}

@property (nonatomic,retain) NSPredicate * userMatchPredicate;                                             //@synthesize userMatchPredicate=_userMatchPredicate - In the implementation block
@property (nonatomic,retain) NSEntityDescription * entityDescription;                                      //@synthesize entityDescription=_entityDescription - In the implementation block
@property (nonatomic,retain) NSPredicate * entityDescriptionPredicate;                                     //@synthesize entityDescriptionPredicate=_entityDescriptionPredicate - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                                //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (assign,nonatomic) long long changeType;                                                         //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic,__weak) id<RTManagedObjectContextMonitorChangeProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSEntityDescription *)entityDescription;
-(void)setDelegate:(id<RTManagedObjectContextMonitorChangeProtocol>)arg1 ;
-(void)dealloc;
-(id<RTManagedObjectContextMonitorChangeProtocol>)delegate;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setChangeType:(long long)arg1 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)filterPredicate;
-(long long)changeType;
-(void)onContextNotification:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 entityDescription:(id)arg2 predicate:(id)arg3 changeType:(long long)arg4 fireFrequency:(long long)arg5 ;
-(NSPredicate *)userMatchPredicate;
-(void)setUserMatchPredicate:(NSPredicate *)arg1 ;
-(void)setEntityDescription:(NSEntityDescription *)arg1 ;
-(NSPredicate *)entityDescriptionPredicate;
-(void)setEntityDescriptionPredicate:(NSPredicate *)arg1 ;
@end
