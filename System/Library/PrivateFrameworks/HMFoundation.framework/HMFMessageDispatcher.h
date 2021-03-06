/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageTransportDelegate.h>

@protocol OS_dispatch_queue;
@class HMFMessageTransport, NSObject, NSMutableDictionary, NSString;

@interface HMFMessageDispatcher : NSObject <HMFMessageTransportDelegate> {

	BOOL _remoteSource;
	HMFMessageTransport* _transport;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _notificationHandlers;

}

@property (nonatomic,readonly) HMFMessageTransport * transport;                       //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationHandlers;              //@synthesize notificationHandlers=_notificationHandlers - In the implementation block
@property (assign,getter=isRemoteSource,nonatomic) BOOL remoteSource;                 //@synthesize remoteSource=_remoteSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)notificationHandlers;
-(void)setNotificationHandlers:(NSMutableDictionary *)arg1 ;
-(void)deregisterReceiver:(id)arg1 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)isRemoteSource;
-(void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(id)initWithTransport:(id)arg1 ;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMFMessageTransport *)transport;
-(void)dispatchMessage:(id)arg1 target:(id)arg2 ;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)deregisterForMessage:(id)arg1 receiver:(id)arg2 ;
-(void)dispatchMessage:(id)arg1 ;
-(void)setRemoteSource:(BOOL)arg1 ;
-(void)_deregisterForMessage:(id)arg1 receiver:(id)arg2 token:(id)arg3 ;
-(void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

