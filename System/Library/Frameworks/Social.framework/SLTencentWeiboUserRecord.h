/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLMicroBlogUserRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface SLTencentWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {

	NSString* _openid;
	NSURL* _objectID;

}

@property (nonatomic,retain) NSURL * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSString * openid;               //@synthesize openid=_openid - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)userRecordWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setValuesWithUserDictionary:(id)arg1 ;
-(void)setOpenid:(NSString *)arg1 ;
-(NSString *)openid;
-(NSURL *)objectID;
-(void)setObjectID:(NSURL *)arg1 ;
@end
