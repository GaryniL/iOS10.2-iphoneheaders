/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class PLManagedObjectContext, NSArray;

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration> {

	PLManagedObjectContext* _managedObjectContext;
	NSArray* _assetObjectIDs;

}
+(id)enumeratorWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PL24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)enumerateDictionariesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithAssetObjectIDs:(id)arg1 managedObjectContext:(id)arg2 ;
-(unsigned long long)getPTPdInfo:(id*)arg1 count:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3 ;
-(void)enumerateDictionariesWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
@end

