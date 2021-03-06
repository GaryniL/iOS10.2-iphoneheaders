/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHAManagerDelegate, OS_dispatch_queue;
@class PHAMonitoring, PHAAssetResourceDataLoader, NSURL, PHPhotoLibrary, NSObject, PHAJobCoordinator, PHALibraryChangeListener, NSDictionary;

@interface PHAManager : NSObject {

	PHAMonitoring* _monitoring;
	id<PHAManagerDelegate> _delegate;
	PHAAssetResourceDataLoader* _dataLoader;
	NSURL* _libraryURL;
	PHPhotoLibrary* _photoLibrary;
	NSObject*<OS_dispatch_queue> _executiveStateQueue;
	PHAJobCoordinator* _jobCoordinator;
	PHALibraryChangeListener* _changeListener;
	NSDictionary* _photoAnalysisWorkersByType;

}

@property (retain) NSURL * libraryURL;                                            //@synthesize libraryURL=_libraryURL - In the implementation block
@property (retain) PHPhotoLibrary * photoLibrary;                                 //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (retain) NSDictionary * photoAnalysisWorkersByType;                     //@synthesize photoAnalysisWorkersByType=_photoAnalysisWorkersByType - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> executiveStateQueue;              //@synthesize executiveStateQueue=_executiveStateQueue - In the implementation block
@property (retain) PHALibraryChangeListener * changeListener;                     //@synthesize changeListener=_changeListener - In the implementation block
@property (readonly) PHAJobCoordinator * jobCoordinator;                          //@synthesize jobCoordinator=_jobCoordinator - In the implementation block
@property (getter=isQuiescent,readonly) BOOL quiescent; 
@property (getter=isTurboMode,readonly) BOOL turboMode; 
+(void)enumerateWorkerClassesUsingBlock:(/*^block*/id)arg1 ;
+(id)allWorkerClasses;
-(id)init;
-(id)description;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)notifyPhotoLibraryOpenedWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setChangeListener:(PHALibraryChangeListener *)arg1 ;
-(PHALibraryChangeListener *)changeListener;
-(void)shutdown;
-(BOOL)isTurboMode;
-(id)statusAsDictionary;
-(PHAJobCoordinator *)jobCoordinator;
-(void)enumerateWorkersUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isQuiescent;
-(void)checkForQuiescence;
-(id)faceProcessingServiceWorker;
-(id)sceneClassificationServiceWorker;
-(id)graphServiceWorker;
-(id)monitoring;
-(NSObject*<OS_dispatch_queue>)executiveStateQueue;
-(void)setExecutiveStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)backgroundActivityDidBegin;
-(id)initWithPhotoLibraryURL:(id)arg1 executiveStateQueue:(id)arg2 delegate:(id)arg3 ;
-(NSURL *)libraryURL;
-(void)triggerBackgroundActivity;
-(void)stopBackgroundActivity;
-(void)setLibraryURL:(NSURL *)arg1 ;
-(void)setPhotoAnalysisWorkersByType:(NSDictionary *)arg1 ;
-(NSDictionary *)photoAnalysisWorkersByType;
-(id)taxonomyServiceWorker;
@end

