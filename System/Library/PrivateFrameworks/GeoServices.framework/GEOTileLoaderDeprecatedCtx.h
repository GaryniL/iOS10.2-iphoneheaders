/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList;

@interface GEOTileLoaderDeprecatedCtx : NSObject {

	CFRunLoopRef _runloop;
	GEOTileKeyList* _originalList;
	GEOTileKeyList* _submittedList;
	GEOTileKeyList* _satisfiedList;
	GEOTileKeyList* _notLoaded;
	/*^block*/id _callback;
	/*^block*/id _progress;
	/*^block*/id _error;
	/*^block*/id _finished;

}

@property (nonatomic,copy) id progress;                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id finished;                  //@synthesize finished=_finished - In the implementation block
@property (nonatomic,readonly) id callback;              //@synthesize callback=_callback - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)setProgress:(id)arg1 ;
-(id)progress;
-(id)callback;
-(id)initWithList:(id)arg1 ;
-(void)breakCycle;
-(void)success:(const GEOTileKey*)arg1 tile:(id)arg2 info:(id)arg3 ;
-(void)failure:(const GEOTileKey*)arg1 error:(id)arg2 info:(id)arg3 ;
-(void)setFinished:(id)arg1 ;
-(id)error;
-(void)setError:(id)arg1 ;
-(id)finished;
@end
