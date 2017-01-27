/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class NSString, NSNumber;

@interface CFDDDataDetectorResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * dataDetectorType; 
@property (nonatomic,retain) NSNumber * length; 
@property (nonatomic,retain) NSNumber * location; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataDetectorResult;
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)dataDetectorResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)length;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setLength:(NSNumber *)arg1 ;
-(NSNumber *)location;
-(void)setLocation:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)dataDetectorType;
-(void)setDataDetectorType:(NSString *)arg1 ;
@end
