/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol VSAuthenticationToken <NSObject>
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * body; 
@required
-(BOOL)isValid;
-(BOOL)isOpaque;
-(NSString *)body;
-(void)setBody:(id)arg1;
-(NSDate *)expirationDate;
-(id)serializedData;
-(id)initWithSerializedData:(id)arg1;

@end

