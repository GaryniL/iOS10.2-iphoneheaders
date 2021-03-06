/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTrafficIncidentAlertUpdaterDelegate <NSObject>
@required
-(void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2;
-(void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2;
-(void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2;
-(double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(id)arg1;
-(double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg1;
-(double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg1;

@end

