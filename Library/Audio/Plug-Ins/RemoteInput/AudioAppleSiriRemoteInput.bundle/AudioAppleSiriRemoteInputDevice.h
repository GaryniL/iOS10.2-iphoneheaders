/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Library/Audio/Plug-Ins/RemoteInput/AudioAppleSiriRemoteInput.bundle/AudioAppleSiriRemoteInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioAppleSiriRemoteInput/AVAudioRemoteInputDevice.h>

@class NSArray, AVAudioFormat, NSString, AudioAppleSiriRemoteInputPlugin;

@interface AudioAppleSiriRemoteInputDevice : NSObject <AVAudioRemoteInputDevice> {

	/*^block*/id audioInputBlock;
	NSArray* supportedFormats;
	AVAudioFormat* format;
	AudioAppleSiriRemoteInputPlugin* _plugin;
	NSString* _identifier;
	NSString* _resolvedDeviceIdentifier;
	/*^block*/id _startCompletionBlock;
	/*^block*/id _stopCompletionBlock;

}

@property (nonatomic,retain) NSString * resolvedDeviceIdentifier;                          //@synthesize resolvedDeviceIdentifier=_resolvedDeviceIdentifier - In the implementation block
@property (nonatomic,copy) id startCompletionBlock;                                        //@synthesize startCompletionBlock=_startCompletionBlock - In the implementation block
@property (nonatomic,copy) id stopCompletionBlock;                                         //@synthesize stopCompletionBlock=_stopCompletionBlock - In the implementation block
@property (assign,nonatomic,__weak) AudioAppleSiriRemoteInputPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id audioInputBlock; 
@property (nonatomic,copy) NSArray * supportedFormats; 
@property (nonatomic,retain) AVAudioFormat * format; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
-(void)setStartCompletionBlock:(id)arg1 ;
-(void)setStopCompletionBlock:(id)arg1 ;
-(id)_audioTimeForSpeexFrame:(id)arg1 ;
-(id)_qualityForSpeexFrame:(id)arg1 ;
-(id)_gainForSpeexFrame:(id)arg1 ;
-(void)handleTransportDidStopMsg:(id)arg1 ;
-(id)startCompletionBlock;
-(id)stopCompletionBlock;
-(void)handleAudioFrameMsg:(id)arg1 ;
-(NSString *)resolvedDeviceIdentifier;
-(void)setResolvedDeviceIdentifier:(NSString *)arg1 ;
-(void)handleTransportDidStartMsg:(id)arg1 ;
-(id)_supportedFormats;
-(void)_processAudioSpeexFrame:(id)arg1 ;
-(id)_audioBufferForSpeexFrame:(id)arg1 ;
-(id)audioInputBlock;
-(id)initWithInfo:(id)arg1 ;
-(void)invalidate;
-(NSString *)identifier;
-(AVAudioFormat *)format;
-(AudioAppleSiriRemoteInputPlugin *)plugin;
-(void)setPlugin:(AudioAppleSiriRemoteInputPlugin *)arg1 ;
-(NSArray *)supportedFormats;
-(NSString *)deviceIdentifier;
-(void)setSupportedFormats:(NSArray *)arg1 ;
-(void)setFormat:(AVAudioFormat *)arg1 ;
-(void)stopRecordingWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAudioInputBlock:(id)arg1 ;
-(void)startRecordingWithCompletionBlock:(/*^block*/id)arg1 ;
@end

