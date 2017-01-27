/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol ServerInterface;
@class NSXPCConnection, NSArray, NSString;

@interface HapticClient : NSObject <NSXPCListenerDelegate> {

	NSXPCConnection* _connection;
	unique_ptr<ClientSyncCaller, std::__1::default_delete<ClientSyncCaller> >* _syncCaller;
	HapticSharedMemory* _sharedBuffer;
	unsigned long long _uniqueID;
	BOOL _prewarmed;
	BOOL _running;
	BOOL _connected;
	int _serverProcessID;
	id<ServerInterface> _serverDelegate;
	unsigned long long _clientID;
	NSArray* _channelKeys;

}

@property (retain) id<ServerInterface> serverDelegate;              //@synthesize serverDelegate=_serverDelegate - In the implementation block
@property (assign) BOOL connected;                                  //@synthesize connected=_connected - In the implementation block
@property (readonly) unsigned long long clientID;                   //@synthesize clientID=_clientID - In the implementation block
@property (readonly) NSArray * channelKeys;                         //@synthesize channelKeys=_channelKeys - In the implementation block
@property (readonly) BOOL prewarmed;                                //@synthesize prewarmed=_prewarmed - In the implementation block
@property (readonly) BOOL running;                                  //@synthesize running=_running - In the implementation block
@property (assign) int serverProcessID;                             //@synthesize serverProcessID=_serverProcessID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)loadHapticSequence:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)prewarm:(/*^block*/id)arg1 ;
-(void)startRunning:(/*^block*/id)arg1 ;
-(BOOL)setChannelEventBehavior:(unsigned long long)arg1 channel:(unsigned long long)arg2 ;
-(BOOL)startEventAndReturnToken:(unsigned long long)arg1 type:(unsigned long long)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 eventToken:(unsigned long long*)arg5 ;
-(BOOL)sendEvents:(id)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)stopEventWithToken:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 ;
-(BOOL)clearEventsFromTime:(double)arg1 channel:(unsigned long long)arg2 ;
-(BOOL)setParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 channel:(unsigned long long)arg4 ;
-(NSArray *)channelKeys;
-(void)allocateResources:(/*^block*/id)arg1 ;
-(BOOL)loadHapticPreset:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)enableSequenceLooping:(unsigned long long)arg1 enable:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)startHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 withOffset:(double)arg3 ;
-(BOOL)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)detachHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(void)doInit;
-(BOOL)setupConnectionAndReturnError:(id*)arg1 ;
-(void)destroySharedMemory;
-(id<ServerInterface>)serverDelegate;
-(int)setupSharedMemory:(id)arg1 size:(unsigned)arg2 ;
-(int)serverProcessID;
-(void)handleHapticServerCrash;
-(void)setServerDelegate:(id<ServerInterface>)arg1 ;
-(void)setServerProcessID:(int)arg1 ;
-(void)setChannelKeys:(NSArray *)arg1 ;
-(BOOL)prewarmed;
-(void)dealloc;
-(id)initAndReturnError:(id*)arg1 ;
-(BOOL)setNumberOfChannels:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)stopRunning;
-(void)stopPrewarm;
-(void)disconnect;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(BOOL)finish:(/*^block*/id)arg1 ;
-(void)releaseResources;
-(BOOL)running;
-(unsigned long long)clientID;
-(void)handleConnectionError;
@end
