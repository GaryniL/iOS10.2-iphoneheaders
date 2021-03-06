/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSNumber;

@interface HDObserverQueryServer : HDQueryServer {

	BOOL _deliverOnUnlock;
	NSNumber* _anchor;

}

@property (nonatomic,readonly) BOOL deliverOnUnlock;              //@synthesize deliverOnUnlock=_deliverOnUnlock - In the implementation block
@property (nonatomic,readonly) NSNumber * anchor;                 //@synthesize anchor=_anchor - In the implementation block
-(NSNumber *)anchor;
-(void)_queue_start;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(BOOL)_shouldListenForUpdates;
-(void)_queue_stop;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(void)_deliverDataWasUpdatedWithAnchor:(id)arg1 ;
-(BOOL)deliverOnUnlock;
@end

