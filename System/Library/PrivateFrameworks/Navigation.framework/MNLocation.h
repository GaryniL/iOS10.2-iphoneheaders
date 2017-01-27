/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <CoreLocation/CLLocation.h>

@class GEORouteMatch, GEORoadMatch, CLLocation, GEONavigationMatchInfo, NSString, NSDate;

@interface MNLocation : CLLocation {

	unsigned long long _state;
	GEORouteMatch* _routeMatch;
	GEORoadMatch* _roadMatch;
	CLLocation* _rawLocation;
	CLLocationCoordinate2D _rawShiftedCoordinate;
	GEONavigationMatchInfo* _detailedMatchInfo;
	NSString* _roadName;
	NSString* _shieldText;
	long long _shieldType;
	unsigned _roadLineType;
	unsigned long long _speedLimit;
	BOOL _speedLimitIsMPH;
	BOOL _isDirectional;
	BOOL _locationUnreliable;
	NSDate* _expirationDate;
	NSDate* _originalDate;
	int _rampType;

}

@property (nonatomic,readonly) int _nav_source; 
@property (assign,nonatomic) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) GEORoadMatch * roadMatch;                                 //@synthesize roadMatch=_roadMatch - In the implementation block
@property (nonatomic,retain) CLLocation * rawLocation;                                 //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                               //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,retain) GEONavigationMatchInfo * detailedMatchInfo;               //@synthesize detailedMatchInfo=_detailedMatchInfo - In the implementation block
@property (nonatomic,retain) NSString * roadName;                                      //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,retain) NSString * shieldText;                                    //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) long long shieldType;                                     //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) unsigned roadLineType;                                    //@synthesize roadLineType=_roadLineType - In the implementation block
@property (assign,nonatomic) int rampType;                                             //@synthesize rampType=_rampType - In the implementation block
@property (assign,nonatomic) unsigned long long speedLimit;                            //@synthesize speedLimit=_speedLimit - In the implementation block
@property (assign,nonatomic) BOOL speedLimitIsMPH;                                     //@synthesize speedLimitIsMPH=_speedLimitIsMPH - In the implementation block
@property (assign,nonatomic) BOOL isDirectional;                                       //@synthesize isDirectional=_isDirectional - In the implementation block
@property (assign,nonatomic) BOOL locationUnreliable;                                  //@synthesize locationUnreliable=_locationUnreliable - In the implementation block
@property (nonatomic,readonly) unsigned long long stepIndex; 
@property (nonatomic,readonly) BOOL isProjected; 
@property (nonatomic,retain) NSDate * expirationDate;                                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDate * originalDate;                                    //@synthesize originalDate=_originalDate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D rawShiftedCoordinate;              //@synthesize rawShiftedCoordinate=_rawShiftedCoordinate - In the implementation block
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(GEORouteMatch *)routeMatch;
-(BOOL)locationUnreliable;
-(NSString *)shieldText;
-(void)setShieldText:(NSString *)arg1 ;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(void)setShieldType:(long long)arg1 ;
-(long long)shieldType;
-(NSString *)roadName;
-(int)rampType;
-(unsigned long long)speedLimit;
-(BOOL)speedLimitIsMPH;
-(unsigned long long)stepIndex;
-(GEONavigationMatchInfo *)detailedMatchInfo;
-(void)setDetailedMatchInfo:(GEONavigationMatchInfo *)arg1 ;
-(void)setSpeedLimit:(unsigned long long)arg1 ;
-(void)setRoadName:(NSString *)arg1 ;
-(id)initWithRawLocation:(id)arg1 ;
-(GEORoadMatch *)roadMatch;
-(CLLocation *)rawLocation;
-(void)setOriginalDate:(NSDate *)arg1 ;
-(NSDate *)originalDate;
-(void)setRampType:(int)arg1 ;
-(id)_navigation_routeMatch;
-(BOOL)_navigation_hasValidCourse;
-(id)initWithClientLocation:(SCD_Struct_MN16)arg1 ;
-(id)matchInfo;
-(BOOL)_navigation_isStale;
-(CLLocationCoordinate2D)_navigation_rawShiftedCoordinate;
-(id)_navigation_detailedMatchInfo;
-(int)_nav_source;
-(void)setRoadLineType:(unsigned)arg1 ;
-(void)setSpeedLimitIsMPH:(BOOL)arg1 ;
-(unsigned)roadLineType;
-(id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(BOOL)arg3 ;
-(id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(BOOL)arg3 ;
-(id)initWithRawLocation:(id)arg1 useMatchLocation:(BOOL)arg2 ;
-(id)initWithLocationDetails:(id)arg1 route:(id)arg2 ;
-(id)initWithLocationDetails:(id)arg1 ;
-(id)propagatedLocationForTimeInterval:(double)arg1 shouldProjectAlongRoute:(BOOL)arg2 ;
-(BOOL)isProjected;
-(void)setRawShiftedCoordinate:(CLLocationCoordinate2D)arg1 ;
-(SCD_Struct_MN11*)_roadFeature;
-(void)setRoadMatch:(GEORoadMatch *)arg1 ;
-(void)setRawLocation:(CLLocation *)arg1 ;
-(BOOL)isDirectional;
-(void)setIsDirectional:(BOOL)arg1 ;
-(CLLocationCoordinate2D)rawShiftedCoordinate;
@end
