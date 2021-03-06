/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPlaceDataProxy.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, GEOPlaceDataCacheRegister, GEOPhoneNumberMUIDMapper, NSMutableSet, NSMutableArray, NSMutableOrderedSet, NSString;

@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy> {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSMapTable* _pendingRequests;
	GEOPlaceDataCacheRegister* _cacheRegister;
	GEOPhoneNumberMUIDMapper* _phoneNumberMapper;
	NSMutableSet* _requestsInProgress;
	NSMutableArray* _requestHandlersPending;
	NSMutableOrderedSet* _placeHashes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)clearCache;
-(void)cancelRequest:(id)arg1 ;
-(void)requestMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 options:(unsigned long long)arg5 auditToken:(id)arg6 requesterHandler:(/*^block*/id)arg7 ;
-(void)requestComponentsFromNetwork:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 requesterHandler:(/*^block*/id)arg6 ;
-(void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 auditToken:(id)arg4 requesterHandler:(/*^block*/id)arg5 ;
-(void)fetchAllCacheEntriesWithRequesterHandler:(/*^block*/id)arg1 ;
-(void)trackPlaceData:(id)arg1 ;
-(void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 networkActivity:(/*^block*/id)arg5 requesterHandler:(/*^block*/id)arg6 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(void)shrinkBySize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)applyRAPUpdatedMapItems:(id)arg1 ;
-(void)startRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 finished:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)_requestMUIDsFromNetwork:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 auditToken:(id)arg5 finished:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(long long)_invalidationStateForPlace:(id)arg1 ;
-(void)_trackPlaceData:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)_populateKey:(GEOTileKey*)arg1 request:(id)arg2 ;
-(id)_cachedPlacedForRequest:(id)arg1 ;
-(void)_cachePlaceData:(id)arg1 forKey:(GEOTileKey)arg2 shouldOptimizeWritesToDisk:(BOOL)arg3 ;
-(void)_resetPhoneNumberMapper;
-(void)_callHistoryRecentsClearedObserver:(id)arg1 ;
-(void)_privacyAndLocationSettingsResetObserver:(id)arg1 ;
@end

