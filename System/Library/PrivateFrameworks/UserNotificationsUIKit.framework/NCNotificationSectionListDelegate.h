/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationSectionListDelegate <NSObject>
@required
-(void)notificationSectionListNeedsReload:(id)arg1;
-(void)notificationSectionList:(id)arg1 didInsertNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
-(void)notificationSectionList:(id)arg1 didInsertSectionAtIndex:(unsigned long long)arg2;
-(void)notificationSectionList:(id)arg1 didReplaceNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
-(void)notificationSectionList:(id)arg1 didRemoveSectionAtIndex:(unsigned long long)arg2;
-(void)notificationSectionList:(id)arg1 didRemoveNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
-(void)notificationSectionList:(id)arg1 didRemoveSectionsAtIndices:(id)arg2;
-(void)notificationSectionList:(id)arg1 requestsReloadAtIndices:(id)arg2;

@end

