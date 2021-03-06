/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableIndexSet;

@interface TSTConcurrentMutableIndexSet : NSObject {

	opaque_pthread_rwlock_t mRWLock;
	NSMutableIndexSet* mMutableIndexSet;

}
-(id)init;
-(void)dealloc;
-(void)addIndex:(unsigned long long)arg1 ;
-(void)removeAllIndexes;
-(void)enumerateIndexesUsingBlock:(/*^block*/id)arg1 ;
@end

