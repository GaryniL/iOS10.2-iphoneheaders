/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface HDSQLiteDatabaseIndexSchema : NSObject {

	BOOL _isUnique;
	NSString* _name;
	NSArray* _columns;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * columns;              //@synthesize columns=_columns - In the implementation block
@property (assign,nonatomic) BOOL isUnique;                  //@synthesize isUnique=_isUnique - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(void)setIsUnique:(BOOL)arg1 ;
-(BOOL)isUnique;
@end

