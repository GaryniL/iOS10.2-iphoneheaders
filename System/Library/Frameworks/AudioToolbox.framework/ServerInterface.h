/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ServerInterface
@required
-(void)getClientID:(/*^block*/id)arg1;
-(void)allocateClientResources:(/*^block*/id)arg1;
-(void)releaseClientResources;
-(void)requestChannels:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)loadHapticPreset:(id)arg1 reply:(/*^block*/id)arg2;
-(void)loadHapticSequence:(id)arg1 reply:(/*^block*/id)arg2;
-(void)prepareHapticSequence:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)prewarm:(/*^block*/id)arg1;
-(void)startRunning:(/*^block*/id)arg1;
-(void)setDoneReply:(/*^block*/id)arg1;
-(void)stopRunning;
-(void)stopPrewarm;

@end

