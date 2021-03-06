/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSMutableURLRequest, NSURLRequest, __NSCFURLSession, NSMutableArray;

@interface CONNECTION_SessionTask : NSObject {

	CFURLRequestRef _originalRequest;
	CFURLRequestRef _currentRequest;
	CFDictionaryRef _connectionProperties;
	CFDictionaryRef _socketProperties;
	NSMutableURLRequest* _nsCurrentRequest;
	NSURLRequest* _nsOriginalRequest;
	__NSCFURLSession* _session;
	BOOL _is_cellular;
	Class _my_protocolForTask;
	PerformanceTimingRef __performanceTiming;
	BOOL __shouldSkipPreferredClientCertificateLookup;
	CFDictionaryRef __atsContext;
	NSMutableArray* _transactionMetrics;

}
-(void)updateCurrentRequest:(id)arg1 ;
-(const XCookieStorage*)_createXCookieStorage;
-(const XCredentialStorage*)_createXCredentialStorage;
-(const XURLCache*)_createXURLCache;
-(id)initWithRequest:(CFURLRequestRef)arg1 mutableCurrent:(CFURLRequestRef)arg2 connProps:(CFDictionaryRef)arg3 sockProps:(CFDictionaryRef)arg4 session:(id)arg5 ;
-(CFURLRequestRef)_currentCFURLRequest;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(id)_protocolForTask;
-(void)set_protocolForTask:(id)arg1 ;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(CFURLRef)currentRequest_URL;
-(CFDictionaryRef)_copySocketStreamProperties;
-(id)countOfBytesExpectedToReceive;
-(id)_priorityValue;
-(long long)_bytesPerSecondLimit;
-(id)_storagePartitionIdentifier;
-(void)set_trailers:(id)arg1 ;
-(id)_backgroundTaskTimingData;
-(CFDictionaryRef)_dependencyInfo;
-(CFDictionaryRef)_copyATSState;
-(CFURLRequestRef)_copyCurrentCFURLRequest;
-(CFURLRequestRef)_copyOriginalCFURLRequest;
-(PerformanceTimingRef)_performanceTiming;
-(void)_setSocketProperties:(CFDictionaryRef)arg1 connectionProperties:(CFDictionaryRef)arg2 ;
-(int)_cachePolicy;
-(double)_timeoutInterval;
-(CFDictionaryRef)_proxySettings;
-(CFDictionaryRef)_sslSettings;
-(unsigned char)_shouldPipelineHTTP;
-(unsigned char)_shouldUsePipelineHeuristics;
-(unsigned char)_shouldSkipPipelineProbe;
-(long long)_requestPriority;
-(unsigned long long)_allowedProtocolTypes;
-(id)_prohibitAuthUI;
-(unsigned char)_strictContentLength;
-(id)_connectionPropertyDuet;
-(long long)_suspensionThreshhold;
-(unsigned char)_preventsIdleSystemSleep;
-(id)_expectedWorkload;
-(id)_timeWindowDelay;
-(id)_timeWindowDuration;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(void)_setConnectionIsCellular:(BOOL)arg1 ;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(void)_getAuthenticationHeadersForResponse:(CFURLResponseRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CFSetRef)_getAuthenticatorStatusCodes;
-(BOOL)_cacheOnly;
-(const _CFDictionary*)_DuetActivityProperties;
-(CFURLRef)currentRequest_mainDocumentURL;
-(int)_cookieAcceptPolicy;
-(id)_boundInterfaceIdentifier;
-(id)_disallowCellular;
-(id)_networkServiceType;
-(void)_initializeTimingDataWithSessionConfiguration:(id)arg1 ;
-(void)_prepareNewTimingDataContainer;
-(id)_transactionMetrics;
-(id)_cfHSTS;
-(id)_cfCache;
-(id)_cfCreds;
-(id)_cfCookies;
-(id)_shouldHandleCookies;
-(id)_contentDispositionFallbackArray;
-(id)_allowsCellular;
-(id)_trailers;
-(void)_processConnectionProperties;
-(id)countOfBytesExpectedToSend;
-(void)dealloc;
-(id)state;
-(float)priority;
-(id)startTime;
-(id)originalRequest;
-(id)taskIdentifier;
-(id)workQueue;
-(id)session;
-(id)error;
-(id)currentRequest;
-(id)countOfBytesSent;
-(id)countOfBytesReceived;
@end

