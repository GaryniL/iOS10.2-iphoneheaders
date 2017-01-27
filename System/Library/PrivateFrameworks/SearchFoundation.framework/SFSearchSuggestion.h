/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFSearchSuggestion : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _suggestion;
	NSString* _query;
	double _score;
	unsigned long long _type;

}

@property (nonatomic,copy) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * suggestion;                  //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy) NSString * query;                       //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) double score;                         //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)query;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(void)setScore:(double)arg1 ;
-(double)score;
-(id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 type:(unsigned long long)arg5 ;
-(id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 type:(unsigned long long)arg4 ;
-(void)setSuggestion:(NSString *)arg1 ;
-(NSString *)suggestion;
@end
