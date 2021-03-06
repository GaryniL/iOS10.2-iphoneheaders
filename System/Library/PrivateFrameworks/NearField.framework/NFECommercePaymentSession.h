/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFECommercePaymentSessionCallbacks.h>

@class NSDictionary, NSString;

@interface NFECommercePaymentSession : NFSession <NFECommercePaymentSessionCallbacks> {

	NSDictionary* _appletsById;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)appletWithIdentifier:(id)arg1 ;
-(id)allApplets;
-(id)performECommercePayment:(id)arg1 request:(id)arg2 ;
-(void)didStartSession:(id)arg1 ;
@end

