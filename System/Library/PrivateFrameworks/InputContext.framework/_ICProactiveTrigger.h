/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString, NSDictionary;

@interface _ICProactiveTrigger : NSObject {

	unsigned char _triggerSourceType;
	NSSet* _recipients;
	NSString* _currentAppID;
	NSString* _localeIdentifier;
	NSDictionary* _attributedString;
	NSDictionary* _attributes;

}

@property (nonatomic,retain) NSDictionary * attributes;                       //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) unsigned char triggerSourceType;               //@synthesize triggerSourceType=_triggerSourceType - In the implementation block
@property (nonatomic,readonly) NSSet * recipients;                            //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentAppID;                  //@synthesize currentAppID=_currentAppID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localeIdentifier;              //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributedString;               //@synthesize attributedString=_attributedString - In the implementation block
-(id)description;
-(NSString *)localeIdentifier;
-(NSDictionary *)attributedString;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)initWithSource:(unsigned char)arg1 attributes:(id)arg2 ;
-(unsigned char)triggerSourceType;
-(NSSet *)recipients;
-(id)initWithInputContex:(id)arg1 attributes:(id)arg2 ;
-(BOOL)isEqualToProactiveTrigger:(id)arg1 ;
-(NSString *)currentAppID;
@end
