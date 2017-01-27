/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCSubscriptionListObserving.h>

@class FCSubscriptionList, FCTagController, FCThreadSafeMutableDictionary, FCThreadSafeMutableSet, NSHashTable, FCNotificationController, FCPurchaseController, FCAppConfiguration, NSString;

@interface FCSubscriptionController : NSObject <FCSubscriptionListObserving> {

	FCSubscriptionList* _subscriptionList;
	FCTagController* _tagController;
	FCThreadSafeMutableDictionary* _subscribedTagsByTagID;
	FCThreadSafeMutableSet* _newlyAddedSubscriptions;
	NSHashTable* _observers;
	FCNotificationController* _notificationController;
	FCPurchaseController* _purchaseController;
	long long _notificationEnabledChannelsRefreshFrequency;
	FCAppConfiguration* _appConfiguration;

}

@property (nonatomic,retain) FCSubscriptionList * subscriptionList;                              //@synthesize subscriptionList=_subscriptionList - In the implementation block
@property (nonatomic,retain) FCTagController * tagController;                                    //@synthesize tagController=_tagController - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableDictionary * subscribedTagsByTagID;              //@synthesize subscribedTagsByTagID=_subscribedTagsByTagID - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableSet * newlyAddedSubscriptions;                   //@synthesize newlyAddedSubscriptions=_newlyAddedSubscriptions - In the implementation block
@property (nonatomic,copy) NSHashTable * observers;                                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) FCNotificationController * notificationController;                  //@synthesize notificationController=_notificationController - In the implementation block
@property (nonatomic,retain) FCPurchaseController * purchaseController;                          //@synthesize purchaseController=_purchaseController - In the implementation block
@property (assign,nonatomic) long long notificationEnabledChannelsRefreshFrequency;              //@synthesize notificationEnabledChannelsRefreshFrequency=_notificationEnabledChannelsRefreshFrequency - In the implementation block
@property (nonatomic,retain) FCAppConfiguration * appConfiguration;                              //@synthesize appConfiguration=_appConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(FCAppConfiguration *)appConfiguration;
-(FCTagController *)tagController;
-(BOOL)addSubscriptionToTag:(id)arg1 error:(id*)arg2 ;
-(FCPurchaseController *)purchaseController;
-(FCSubscriptionList *)subscriptionList;
-(id)mutedSubscribedTagIDs;
-(id)subscribedTags;
-(void)fetchSubscribedTagsWithCallbackQueue:(id)arg1 preferCache:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)newlySubscribedTagsInDateRange:(id)arg1 ;
-(void)removeSubscriptionToTag:(id)arg1 ;
-(BOOL)hasSubscriptionToTag:(id)arg1 ;
-(BOOL)hasNotificationsEnabledForTag:(id)arg1 ;
-(BOOL)setNotificationsEnabled:(BOOL)arg1 forTag:(id)arg2 error:(id*)arg3 ;
-(id)subscribedTagIDs;
-(long long)notificationEnabledChannelsRefreshFrequency;
-(void)_fetchMissingTagsWithCompletion:(/*^block*/id)arg1 ;
-(void)_purchaseListDidChange;
-(void)_refreshChannelsWithNotificationsEnabled;
-(FCThreadSafeMutableDictionary *)subscribedTagsByTagID;
-(BOOL)canAddSubscription;
-(BOOL)addSubscriptionToTag:(id)arg1 notificationsEnabled:(BOOL)arg2 error:(id*)arg3 ;
-(void)_integrateTags:(id)arg1 ;
-(FCThreadSafeMutableSet *)newlyAddedSubscriptions;
-(FCNotificationController *)notificationController;
-(id)subscribedTagIDsWithNotificationsEnabled;
-(void)_notifyOfTagsWithNotificationSupport:(id)arg1 ;
-(void)_fetchTagsForIDs:(id)arg1 maxCachedAge:(double)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)pendingSubscriptionForPollingURL:(id)arg1 ;
-(void)addPendingSubscription:(id)arg1 ;
-(void)removePendingSubscription:(id)arg1 ;
-(void)modifyPendingSubscription:(id)arg1 ;
-(void)_handleTagSubscriptionsAdded:(id)arg1 tagSubscriptionsChanged:(id)arg2 tagSubscriptionsRemoved:(id)arg3 ;
-(void)_handleMutedSubscriptionsAdded:(id)arg1 mutedSubscriptionsChanged:(id)arg2 mutedSubscriptionsRemoved:(id)arg3 ;
-(id)subscriptions;
-(void)_notifyOfTagsAdded:(id)arg1 tagsChanged:(id)arg2 tagsRemoved:(id)arg3 ;
-(void)_notifyOfMutedSubscriptionsAdded:(id)arg1 mutedSubscriptionsChanged:(id)arg2 mutedSubscriptionsRemoved:(id)arg3 ;
-(void)subscriptionList:(id)arg1 didAddSubscriptions:(id)arg2 changeSubscriptions:(id)arg3 removeSubscriptions:(id)arg4 ;
-(id)initWithSubscriptionList:(id)arg1 tagController:(id)arg2 notificationController:(id)arg3 purchaseController:(id)arg4 appConfiguration:(id)arg5 ;
-(id)subscribedTagForTagID:(id)arg1 ;
-(BOOL)hasSubscriptionToTagID:(id)arg1 ;
-(id)subscriptionForTag:(id)arg1 ;
-(void)refreshSubscriptionTags;
-(id)pendingSubscriptions;
-(void)setSubscriptionList:(FCSubscriptionList *)arg1 ;
-(void)setTagController:(FCTagController *)arg1 ;
-(void)setSubscribedTagsByTagID:(FCThreadSafeMutableDictionary *)arg1 ;
-(void)setNewlyAddedSubscriptions:(FCThreadSafeMutableSet *)arg1 ;
-(void)setNotificationController:(FCNotificationController *)arg1 ;
-(void)setPurchaseController:(FCPurchaseController *)arg1 ;
-(void)setNotificationEnabledChannelsRefreshFrequency:(long long)arg1 ;
-(void)setAppConfiguration:(FCAppConfiguration *)arg1 ;
@end
