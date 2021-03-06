/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFActivityAdvertiserDelegate <NSObject>
@optional
-(void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(void)activityAdvertiser:(id)arg1 didSendPayloadForActivityIdentifier:(id)arg2 toDevice:(id)arg3 error:(id)arg4;
-(void)activityAdvertiser:(id)arg1 pairedDevicesChangedNotification:(id)arg2;

@required
-(void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 command:(id)arg3 requestedByDevice:(id)arg4 withCompletionHandler:(/*^block*/id)arg5;

@end

