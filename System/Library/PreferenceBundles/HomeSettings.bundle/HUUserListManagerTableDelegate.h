/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUUserListManagerTableDelegate <NSObject>
@optional
-(void)managerDidRemoveUser:(id)arg1 error:(id)arg2;
-(void)managerDidCancelInvite:(id)arg1 error:(id)arg2;
-(void)managerDidUpdateUserList;

@required
-(void)managerDidSendInvitations:(id)arg1;
-(void)managerDidDismissWithError:(id)arg1;

@end

