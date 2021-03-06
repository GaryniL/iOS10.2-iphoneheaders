/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, SFResultSection;

@interface SFSectionRankingFeedback : SFFeedback <NSCopying> {

	NSArray* _results;
	SFResultSection* _section;
	unsigned long long _localSectionPosition;
	double _personalizationScore;

}

@property (nonatomic,copy) NSArray * results;                                      //@synthesize results=_results - In the implementation block
@property (nonatomic,copy) SFResultSection * section;                              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) unsigned long long localSectionPosition;              //@synthesize localSectionPosition=_localSectionPosition - In the implementation block
@property (assign,nonatomic) double personalizationScore;                          //@synthesize personalizationScore=_personalizationScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SFResultSection *)section;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(void)setSection:(SFResultSection *)arg1 ;
-(id)initWithResults:(id)arg1 section:(id)arg2 localSectionPosition:(unsigned long long)arg3 personalizationScore:(double)arg4 ;
-(unsigned long long)localSectionPosition;
-(void)setLocalSectionPosition:(unsigned long long)arg1 ;
-(void)setPersonalizationScore:(double)arg1 ;
-(double)personalizationScore;
@end

