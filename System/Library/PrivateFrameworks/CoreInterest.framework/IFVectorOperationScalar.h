/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IFVectorOperationScalar.h>

@protocol IFVectorOperationScalar <NSObject>
@required
-(double)operate:(id)arg1 v2:(id)arg2;

@end


@class NSString;

@interface IFVectorOperationScalar : NSObject <IFVectorOperationScalar> {

	/*^block*/id _b;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(double)operate:(id)arg1 v2:(id)arg2 ;
@end
