/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCommand.h>

@class NSArray, NSString;

@interface FCRefreshNotificationsForChannelsCommand : FCCommand {

	NSArray* _channelIDs;
	NSArray* _paidChannelIDs;
	NSString* _userID;
	NSString* _deviceToken;
	NSString* _storefrontID;

}

@property (nonatomic,copy) NSArray * channelIDs;                  //@synthesize channelIDs=_channelIDs - In the implementation block
@property (nonatomic,copy) NSArray * paidChannelIDs;              //@synthesize paidChannelIDs=_paidChannelIDs - In the implementation block
@property (nonatomic,copy) NSString * userID;                     //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * deviceToken;                //@synthesize deviceToken=_deviceToken - In the implementation block
@property (nonatomic,copy) NSString * storefrontID;               //@synthesize storefrontID=_storefrontID - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(id)initWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 ;
-(NSArray *)channelIDs;
-(NSArray *)paidChannelIDs;
-(NSString *)deviceToken;
-(NSString *)storefrontID;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 ;
-(void)setChannelIDs:(NSArray *)arg1 ;
-(void)setPaidChannelIDs:(NSArray *)arg1 ;
-(void)setDeviceToken:(NSString *)arg1 ;
-(void)setStorefrontID:(NSString *)arg1 ;
@end
