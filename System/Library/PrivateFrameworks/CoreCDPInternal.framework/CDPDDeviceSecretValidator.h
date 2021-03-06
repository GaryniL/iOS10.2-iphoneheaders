/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPRemoteDeviceSecretValidatorProtocol.h>

@protocol CDPDDeviceSecretValidatorDelegate;
@class NSMutableDictionary, NSMutableSet, CDPContext, CDPDevice;

@interface CDPDDeviceSecretValidator : NSObject <CDPRemoteDeviceSecretValidatorProtocol> {

	BOOL _isAttemptingRecovery;
	unsigned long long _failedAttempts;
	NSMutableDictionary* _failedSecrets;
	NSMutableSet* _failedSingleICSCs;
	NSMutableDictionary* _recoveryErrors;
	BOOL _depletedRemainingAttempts;
	CDPContext* _context;
	CDPDevice* _currentDevice;
	BOOL _isUsingMultipleICSC;
	unsigned long long supportedEscapeOfferMask;
	/*^block*/id _validSecretHandler;
	id<CDPDDeviceSecretValidatorDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isUsingMultipleICSC;                                           //@synthesize isUsingMultipleICSC=_isUsingMultipleICSC - In the implementation block
@property (nonatomic,copy) id validSecretHandler;                                                //@synthesize validSecretHandler=_validSecretHandler - In the implementation block
@property (assign,nonatomic,__weak) id<CDPDDeviceSecretValidatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long supportedEscapeOfferMask; 
-(id)init;
-(void)setDelegate:(id<CDPDDeviceSecretValidatorDelegate>)arg1 ;
-(id<CDPDDeviceSecretValidatorDelegate>)delegate;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(void)setIsUsingMultipleICSC:(BOOL)arg1 ;
-(void)setValidSecretHandler:(id)arg1 ;
-(void)setSupportedEscapeOfferMask:(unsigned long long)arg1 ;
-(unsigned long long)supportedEscapeOfferMask;
-(void)resetAccountCDPState;
-(void)cancelValidationWithError:(id)arg1 ;
-(void)cancelApproveFromAnotherDevice;
-(unsigned long long)failedAttempts;
-(BOOL)isAttemptingRecovery;
-(id)validSecretHandler;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isFailedSecret:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)isUsingMultipleICSC;
-(void)_handleMultiCSCRecoveryResults:(id)arg1 type:(unsigned long long)arg2 secret:(id)arg3 device:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_handleMultiCSCRecoveryFailureForDevice:(id)arg1 recoveryError:(id)arg2 secret:(id)arg3 ;
-(void)_handleRecoveryFailureForFinalDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_attemptToRecoverDevice:(id)arg1 withSecret:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performSingleiCSCRecoveryWithSecret:(id)arg1 type:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleDelegateValidationError:(id)arg1 ;
-(BOOL)_isInvalidICSCError:(id)arg1 ;
-(id)_failedSecretsForDevice:(id)arg1 ;
-(id)_failedSingleICSCs;
@end

