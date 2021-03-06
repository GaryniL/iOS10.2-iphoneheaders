/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLKDictionaryResponseProcessor : NSObject {

	NSString* _dictionaryKeyPath;
	Class _objectClass;

}

@property (nonatomic,copy) NSString * dictionaryKeyPath;              //@synthesize dictionaryKeyPath=_dictionaryKeyPath - In the implementation block
@property (nonatomic,retain) Class objectClass;                       //@synthesize objectClass=_objectClass - In the implementation block
-(void)setObjectClass:(Class)arg1 ;
-(Class)objectClass;
-(void)setDictionaryKeyPath:(NSString *)arg1 ;
-(id)processResponseData:(id)arg1 error:(id*)arg2 ;
-(NSString *)dictionaryKeyPath;
@end

