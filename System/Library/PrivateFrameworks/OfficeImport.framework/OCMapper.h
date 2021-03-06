/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {

	OCCancel* mCancel;
	OITSUTemporaryDirectory* mTemporaryDirectoryObject;

}
+(id)mapperForCurrentThread;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(BOOL)isCancelled;
-(void)teardown;
-(void)setup;
-(void)quit;
-(id)temporaryDirectoryPath;
@end

