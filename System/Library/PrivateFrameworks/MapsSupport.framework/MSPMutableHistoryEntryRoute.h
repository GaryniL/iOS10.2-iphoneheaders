/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPMutableHistoryEntry.h>
#import <libobjc.A.dylib/MSPHistoryEntryRoute.h>

@protocol MSPRouteInformationSource;
@class NSString;

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute> {

	BOOL _failed;
	id<MSPRouteInformationSource> _routeInformationSource;

}

@property (nonatomic,copy) id<MSPRouteInformationSource> routeInformationSource;                      //@synthesize routeInformationSource=_routeInformationSource - In the implementation block
@property (assign,getter=isFailed,nonatomic) BOOL failed;                                             //@synthesize failed=_failed - In the implementation block
@property (assign,getter=navigationWasInterrupted,nonatomic) BOOL navigationInterrupted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
-(id)routeHandle;
-(long long)transportType;
-(id)initWithStorage:(id)arg1 ;
-(id)startWaypoint;
-(id)endWaypoint;
-(void)setFailed:(BOOL)arg1 ;
-(id)_routeRequestStorage;
-(void)setNavigationInterrupted:(BOOL)arg1 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1 ;
-(void)setRouteInformationSource:(id<MSPRouteInformationSource>)arg1 ;
-(id<MSPRouteInformationSource>)routeInformationSource;
-(BOOL)isFailed;
-(BOOL)navigationWasInterrupted;
@end

