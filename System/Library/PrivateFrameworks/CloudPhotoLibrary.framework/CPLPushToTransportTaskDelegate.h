/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLPushToTransportTaskDelegate <CPLEngineSyncTaskDelegate>
@required
-(id)task:(id)arg1 wantsToCheckRecordsExistence:(id)arg2 fetchRecordProperties:(id)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(id)task:(id)arg1 wantsToPushBatch:(id)arg2 progressBlock:(/*^block*/id)arg3 continuationBlock:(/*^block*/id)arg4;

@end

