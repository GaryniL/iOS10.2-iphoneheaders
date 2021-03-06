/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ISBiometricAuthenticationContext;

@interface ISProtocolDataProvider : ISDataProvider <NSCopying> {

	BOOL _shouldPostFooterSectionChanged;
	BOOL _shouldProcessAccount;
	BOOL _shouldProcessAuthenticationDialogs;
	BOOL _shouldProcessDialogs;
	BOOL _shouldProcessProtocol;
	BOOL _shouldProcessTouchIDDialogs;
	BOOL _shouldTriggerDownloads;
	ISBiometricAuthenticationContext* _biometricAuthenticationContext;

}

@property (assign) BOOL shouldPostFooterSectionChanged;                  //@synthesize shouldPostFooterSectionChanged=_shouldPostFooterSectionChanged - In the implementation block
@property (assign) BOOL shouldProcessAccount;                            //@synthesize shouldProcessAccount=_shouldProcessAccount - In the implementation block
@property (assign) BOOL shouldProcessAuthenticationDialogs;              //@synthesize shouldProcessAuthenticationDialogs=_shouldProcessAuthenticationDialogs - In the implementation block
@property (assign) BOOL shouldProcessDialogs;                            //@synthesize shouldProcessDialogs=_shouldProcessDialogs - In the implementation block
@property (assign) BOOL shouldProcessProtocol;                           //@synthesize shouldProcessProtocol=_shouldProcessProtocol - In the implementation block
@property (readonly) BOOL shouldProcessTouchIDDialogs; 
@property (assign) BOOL shouldTriggerDownloads;                          //@synthesize shouldTriggerDownloads=_shouldTriggerDownloads - In the implementation block
-(BOOL)shouldProcessProtocol;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)processDialogFromDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)processDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setShouldProcessAccount:(BOOL)arg1 ;
-(BOOL)_shouldFailWithTokenErrorForDialog:(id)arg1 dictionary:(id)arg2 error:(id*)arg3 ;
-(id)_touchIDDialogForResponse:(id)arg1 ;
-(void)_performActionsForResponse:(id)arg1 ;
-(BOOL)_processFailureTypeFromDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldTriggerDownloads;
-(void)_checkDownloadQueues;
-(void)_refreshSubscriptionStatus;
-(void)_selectFooterSection:(id)arg1 ;
-(BOOL)shouldProcessAccount;
-(void)_checkInAppPurchaseQueueForAction:(id)arg1 ;
-(BOOL)shouldPostFooterSectionChanged;
-(void)setShouldTriggerDownloads:(BOOL)arg1 ;
-(void)_presentDialog:(id)arg1 ;
-(void)setShouldPostFooterSectionChanged:(BOOL)arg1 ;
-(BOOL)shouldProcessAuthenticationDialogs;
-(BOOL)shouldProcessTouchIDDialogs;
-(BOOL)shouldProcessDialogs;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(void)setShouldProcessDialogs:(BOOL)arg1 ;
-(void)setShouldProcessAuthenticationDialogs:(BOOL)arg1 ;
-(void)setShouldProcessProtocol:(BOOL)arg1 ;
@end

