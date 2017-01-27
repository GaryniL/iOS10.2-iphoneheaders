/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMLockFile, NSArray, NSString;

@interface BCLockout : NSObject {

	IMLockFile* _lockFile;
	BOOL _isExclusive;
	NSArray* _startNotifications;
	NSArray* _endNotifications;

}

@property (nonatomic,retain) NSString * path; 
@property (nonatomic,retain) NSArray * startNotifications;              //@synthesize startNotifications=_startNotifications - In the implementation block
@property (nonatomic,retain) NSArray * endNotifications;                //@synthesize endNotifications=_endNotifications - In the implementation block
-(BOOL)lock:(BOOL)arg1 ;
-(void)_sendNotfications:(id)arg1 isLock:(BOOL)arg2 ;
-(NSArray *)startNotifications;
-(void)setEndNotifications:(NSArray *)arg1 ;
-(void)setStartNotifications:(NSArray *)arg1 ;
-(NSArray *)endNotifications;
-(void)dealloc;
-(NSString *)path;
-(void)unlock;
-(void)setPath:(NSString *)arg1 ;
@end
