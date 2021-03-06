/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTNotifier.h>

@interface RTReachabilityManager : RTNotifier {

	SCNetworkReachabilityRef _reachabilityRef;
	long long _currentReachability;

}

@property (assign,nonatomic) SCNetworkReachabilityRef reachabilityRef;              //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (nonatomic,readonly) long long currentReachability;                       //@synthesize currentReachability=_currentReachability - In the implementation block
+(id)sharedInstance;
+(long long)_processReachabilityChange:(unsigned)arg1 ;
+(id)reachabilityToString:(long long)arg1 ;
-(id)init;
-(id)description;
-(void)shutdown;
-(void)setCurrentReachability:(long long)arg1 ;
-(long long)currentReachability;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)_startMonitoringReachability;
-(void)_stopMonitoringReachability;
-(BOOL)_getCurrentReachability:(unsigned*)arg1 ;
-(id)currentReachabilityString;
-(void)_fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)processReachabilityChange:(unsigned)arg1 ;
-(void)setReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(SCNetworkReachabilityRef)reachabilityRef;
@end

