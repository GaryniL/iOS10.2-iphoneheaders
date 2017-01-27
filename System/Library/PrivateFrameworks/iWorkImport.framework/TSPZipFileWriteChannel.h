/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUStreamWriteChannel.h>

@protocol OS_dispatch_queue;
@class TSUZipFileWriter, NSObject, NSString;

@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel> {

	TSUZipFileWriter* _archiveWriter;
	NSObject*<OS_dispatch_queue> _writerQueue;
	BOOL _isClosed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithArchiveWriter:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(void)close;
@end
