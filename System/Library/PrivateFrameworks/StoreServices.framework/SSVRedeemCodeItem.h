/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface SSVRedeemCodeItem : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * redeemCodeDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier; 
-(NSDictionary *)redeemCodeDictionary;
-(id)initWithLookupItem:(id)arg1 ;
-(long long)itemIdentifier;
-(id)initWithRedeemCodeDictionary:(id)arg1 ;
@end
