/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardUIServices/FrontBoardUIServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBUISceneClientIdentity : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _applicationBundleID;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;              //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)applicationBundleID;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
@end

