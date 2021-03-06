/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerRoutineDelegate.h>
#import <libobjc.A.dylib/_CLMicroLocationDelegate.h>

@protocol OS_dispatch_source;
@class CLLocationManager, CLLocationManagerRoutine, CLLocation, NSMutableArray, NSObject, RTPowerAssertion, RTPersistenceManager, RTAuthorizationManager, RTPurgeManager, NSString;

@interface RTLocationManager : RTNotifier <CLLocationManagerDelegate, CLLocationManagerRoutineDelegate, _CLMicroLocationDelegate> {

	int _currentCountrySupportsCoreRoutineToken;
	int _userOptedIntoGEOAddressCorrectionToken;
	BOOL _updating;
	BOOL _leechingLocations;
	BOOL _monitoringLocations;
	BOOL _currentCountrySupportsCoreRoutine;
	BOOL _userOptedIntoGEOAddressCorrection;
	BOOL _persistingLocations;
	BOOL _persistLocationsPending;
	BOOL _monitoringMicroLocations;
	BOOL _monitoringPredictedApplications;
	BOOL _enabled;
	BOOL _supported;
	CLLocationManager* _locationManager;
	CLLocationManagerRoutine* _locationManagerRoutine;
	CLLocation* _lastLocation;
	NSMutableArray* _rawLocations;
	NSMutableArray* _averagedLocations;
	NSMutableArray* _currentLocationHandlers;
	NSObject*<OS_dispatch_source> _stopUpdatingLocationTimer;
	NSObject*<OS_dispatch_source> _persistLocationsTimer;
	RTPowerAssertion* _powerAssertion;
	RTPersistenceManager* _persistenceManager;
	RTAuthorizationManager* _authorizationManager;
	RTPurgeManager* _purgeManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CLLocationManager * locationManager;                                  //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) CLLocationManagerRoutine * locationManagerRoutine;                    //@synthesize locationManagerRoutine=_locationManagerRoutine - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocation;                                            //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * rawLocations;                                        //@synthesize rawLocations=_rawLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * averagedLocations;                                   //@synthesize averagedLocations=_averagedLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentLocationHandlers;                             //@synthesize currentLocationHandlers=_currentLocationHandlers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> stopUpdatingLocationTimer;              //@synthesize stopUpdatingLocationTimer=_stopUpdatingLocationTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> persistLocationsTimer;                  //@synthesize persistLocationsTimer=_persistLocationsTimer - In the implementation block
@property (assign,nonatomic) BOOL updating;                                                        //@synthesize updating=_updating - In the implementation block
@property (assign,nonatomic) BOOL leechingLocations;                                               //@synthesize leechingLocations=_leechingLocations - In the implementation block
@property (assign,nonatomic) BOOL monitoringLocations;                                             //@synthesize monitoringLocations=_monitoringLocations - In the implementation block
@property (assign,nonatomic) BOOL currentCountrySupportsCoreRoutine;                               //@synthesize currentCountrySupportsCoreRoutine=_currentCountrySupportsCoreRoutine - In the implementation block
@property (assign,nonatomic) BOOL userOptedIntoGEOAddressCorrection;                               //@synthesize userOptedIntoGEOAddressCorrection=_userOptedIntoGEOAddressCorrection - In the implementation block
@property (assign,nonatomic) BOOL persistingLocations;                                             //@synthesize persistingLocations=_persistingLocations - In the implementation block
@property (assign,nonatomic) BOOL persistLocationsPending;                                         //@synthesize persistLocationsPending=_persistLocationsPending - In the implementation block
@property (assign,nonatomic) BOOL monitoringMicroLocations;                                        //@synthesize monitoringMicroLocations=_monitoringMicroLocations - In the implementation block
@property (assign,nonatomic) BOOL monitoringPredictedApplications;                                 //@synthesize monitoringPredictedApplications=_monitoringPredictedApplications - In the implementation block
@property (nonatomic,retain) RTPowerAssertion * powerAssertion;                                    //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL supported;                                                       //@synthesize supported=_supported - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                            //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                        //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTPurgeManager * purgeManager;                                        //@synthesize purgeManager=_purgeManager - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)enabled;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)clear;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)setUpdating:(BOOL)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastLocation;
-(void)shutdown;
-(RTAuthorizationManager *)authorizationManager;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(RTPowerAssertion *)powerAssertion;
-(void)setPowerAssertion:(RTPowerAssertion *)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)requestCurrentMicroLocation;
-(BOOL)supported;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)onRoutineEnabled:(id)arg1 ;
-(void)injectLocations:(id)arg1 ;
-(void)fetchStoredLocationsFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)onPurgeNotification:(id)arg1 ;
-(void)fetchStoredLocationsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(RTPurgeManager *)purgeManager;
-(void)fetchCachedLocationWithHandler:(/*^block*/id)arg1 ;
-(void)setPurgeManager:(RTPurgeManager *)arg1 ;
-(void)stopUpdatingMicroLocation;
-(void)startUpdatingMicroLocation;
-(id)initWithPersistenceManager:(id)arg1 authorizationManager:(id)arg2 purgeManager:(id)arg3 ;
-(void)onStopUpdatingLocationTimerExpiry;
-(void)_persistLocations;
-(BOOL)currentCountrySupportsCoreRoutine;
-(void)setCurrentCountrySupportsCoreRoutine:(BOOL)arg1 ;
-(void)shouldLeechLocations;
-(BOOL)userOptedIntoGEOAddressCorrection;
-(void)setUserOptedIntoGEOAddressCorrection:(BOOL)arg1 ;
-(BOOL)updating;
-(void)shouldMonitorLocations;
-(NSMutableArray *)currentLocationHandlers;
-(void)setLeechingLocations:(BOOL)arg1 ;
-(CLLocationManagerRoutine *)locationManagerRoutine;
-(void)shouldPersistLocations;
-(void)setMonitoringLocations:(BOOL)arg1 ;
-(void)setMonitoringMicroLocations:(BOOL)arg1 ;
-(BOOL)monitoringPredictedApplications;
-(void)setMonitoringPredictedApplications:(BOOL)arg1 ;
-(void)setPersistingLocations:(BOOL)arg1 ;
-(BOOL)leechingLocations;
-(NSObject*<OS_dispatch_source>)persistLocationsTimer;
-(void)setRawLocations:(NSMutableArray *)arg1 ;
-(void)setAveragedLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)rawLocations;
-(NSMutableArray *)averagedLocations;
-(BOOL)persistingLocations;
-(void)_fetchStoredLocationsInManagedObjectContext:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_persistLocationsAndSaveWithManagedObjectContext:(id)arg1 ;
-(id)fetchLocationsUsingContext:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4 ;
-(void)_fetchStoredLocationsFromDate:(id)arg1 toDate:(id)arg2 managedObjectContext:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_clearUsingManagedObjectContext:(id)arg1 ;
-(void)_clearStoredLocationsPredating:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)averageLocations:(id)arg1 atInterval:(double)arg2 ;
-(void)_averageLocations;
-(BOOL)persistLocationsPending;
-(void)setPersistLocationsPending:(BOOL)arg1 ;
-(BOOL)_persistLocations:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)shouldMonitorMicroLocations;
-(void)shouldMonitorPredictedApplications;
-(void)clearStoredLocationsPredating:(id)arg1 ;
-(BOOL)monitoringMicroLocations;
-(void)locationManager:(id)arg1 didUpdatePredictedApplications:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateMicroLocations:(id)arg2 ;
-(void)setLocationManagerRoutine:(CLLocationManagerRoutine *)arg1 ;
-(void)setCurrentLocationHandlers:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)stopUpdatingLocationTimer;
-(void)setStopUpdatingLocationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setPersistLocationsTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)monitoringLocations;
@end

