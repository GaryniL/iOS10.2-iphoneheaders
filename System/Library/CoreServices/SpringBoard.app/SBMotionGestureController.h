/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, CMGestureManager;

@interface SBMotionGestureController : NSObject {

	NSMutableDictionary* _observersByPriority;
	CMGestureManager* _motionGestureManager;

}
+(id)sharedInstance;
-(void)addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(void)removeGestureObserver:(id)arg1 ;
-(void)addGestureObserver:(id)arg1 ;
-(void)_removeGestureManager;
-(void)_addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2 ;
-(void)_updateGestureManager;
-(void)_removeGestureObserver:(id)arg1 ;
-(void)_enumerateObserversByPriority:(/*^block*/id)arg1 ;
-(id)_highestPriorityObservers;
-(void)_addGestureManager;
-(void)_notifyObserversOfGesture:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)_hasObservers;
-(id)_observersForPriority:(unsigned long long)arg1 ;
@end
