/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PEXAutocompleteContext : NSObject {

	NSString* _namePrefix;
	NSArray* _recipients;

}

@property (nonatomic,retain) NSString * namePrefix;              //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,retain) NSArray * recipients;               //@synthesize recipients=_recipients - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setNamePrefix:(NSString *)arg1 ;
-(NSString *)namePrefix;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(BOOL)isEqualToAutocompleteContext:(id)arg1 ;
@end

