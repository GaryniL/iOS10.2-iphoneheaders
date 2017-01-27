/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentCheckMerchantRequest : PKPaymentWebServiceRequest {

	NSString* _merchantIdentifier;
	NSString* _domainName;

}

@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * domainName;                      //@synthesize domainName=_domainName - In the implementation block
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(id)initWithMerchantIdentifier:(id)arg1 domainName:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 ;
-(void)setDomainName:(NSString *)arg1 ;
-(NSString *)domainName;
@end
