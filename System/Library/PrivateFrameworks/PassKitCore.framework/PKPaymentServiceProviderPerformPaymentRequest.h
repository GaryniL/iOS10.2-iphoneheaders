/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKSecureElementCertificateSet, PKPaymentPass, PKServiceProviderOrder, NSData;

@interface PKPaymentServiceProviderPerformPaymentRequest : PKPaymentWebServiceRequest {

	PKSecureElementCertificateSet* _certificates;
	PKPaymentPass* _pass;
	PKServiceProviderOrder* _serviceProviderOrder;
	NSData* _nonce;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                       //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKServiceProviderOrder * serviceProviderOrder;              //@synthesize serviceProviderOrder=_serviceProviderOrder - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                               //@synthesize nonce=_nonce - In the implementation block
-(PKServiceProviderOrder *)serviceProviderOrder;
-(void)setServiceProviderOrder:(PKServiceProviderOrder *)arg1 ;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 webService:(id)arg4 completion:(/*^block*/id)arg5 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
@end

