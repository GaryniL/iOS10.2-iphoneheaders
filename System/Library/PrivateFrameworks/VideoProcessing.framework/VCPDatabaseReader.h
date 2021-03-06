/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject;

@interface VCPDatabaseReader : NSObject {

	NSObject*<OS_dispatch_queue> _sqlSerialQueue;
	sqlite3Ref _database;

}
-(id)init;
-(void)dealloc;
-(void)closeDatabase;
-(int)openDatabase;
-(int)executeDatabaseBlock:(/*^block*/id)arg1 ;
-(int)queryHeaderForAsset:(id)arg1 analysis:(id*)arg2 assetId:(long long*)arg3 ;
-(int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2 ;
-(int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3 ;
-(BOOL)isAssetBlacklisted:(id)arg1 blacklistDate:(id*)arg2 ;
-(id)queryAnalysisForAsset:(id)arg1 ;
-(id)queryAnalysisPropertiesForAsset:(id)arg1 ;
-(id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2 ;
-(id)queryAssetsAnalyzedSince:(id)arg1 ;
@end

