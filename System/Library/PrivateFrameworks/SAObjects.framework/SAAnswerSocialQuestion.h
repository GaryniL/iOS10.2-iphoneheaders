/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAnswerAbstractSocialPost.h>

@class NSArray;

@interface SAAnswerSocialQuestion : SAAnswerAbstractSocialPost

@property (nonatomic,copy) NSArray * socialAnswers; 
+(id)socialQuestion;
+(id)socialQuestionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)socialAnswers;
-(void)setSocialAnswers:(NSArray *)arg1 ;
@end

