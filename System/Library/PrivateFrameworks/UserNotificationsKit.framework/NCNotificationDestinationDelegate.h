/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationDestinationDelegate <NCNotificationSectionSettingsProvider>
@required
-(void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;
-(void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;

@end

