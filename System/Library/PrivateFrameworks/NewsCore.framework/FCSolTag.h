/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCSolTagID, NSMutableSet, FCSolConfiguration;

@interface FCSolTag : NSObject {

	FCSolTagID* _tagId;
	NSMutableSet* _articles;
	NSMutableSet* _solos;
	double _score;
	FCSolConfiguration* _config;

}

@property (nonatomic,retain) FCSolTagID * tagId;                       //@synthesize tagId=_tagId - In the implementation block
@property (nonatomic,retain) NSMutableSet * articles;                  //@synthesize articles=_articles - In the implementation block
@property (nonatomic,retain) NSMutableSet * solos;                     //@synthesize solos=_solos - In the implementation block
@property (assign,nonatomic) double score;                             //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) FCSolConfiguration * config;              //@synthesize config=_config - In the implementation block
-(FCSolConfiguration *)config;
-(void)setConfig:(FCSolConfiguration *)arg1 ;
-(void)setScore:(double)arg1 ;
-(double)score;
-(id)initWithTagId:(id)arg1 articles:(id)arg2 ;
-(NSMutableSet *)articles;
-(FCSolTagID *)tagId;
-(void)setSolos:(NSMutableSet *)arg1 ;
-(NSMutableSet *)solos;
-(void)setArticles:(NSMutableSet *)arg1 ;
-(void)setTagId:(FCSolTagID *)arg1 ;
@end

