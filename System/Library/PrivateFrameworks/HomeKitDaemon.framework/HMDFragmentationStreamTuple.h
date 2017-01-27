/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HAPFragmentationStream, NSString, HMFMessage, NSDate;

@interface HMDFragmentationStreamTuple : NSObject {

	HAPFragmentationStream* _fragmentationStream;
	NSString* _homeUUID;
	HMFMessage* _lastMessage;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) HAPFragmentationStream * fragmentationStream;              //@synthesize fragmentationStream=_fragmentationStream - In the implementation block
@property (nonatomic,readonly) NSString * homeUUID;                                       //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,retain) HMFMessage * lastMessage;                                    //@synthesize lastMessage=_lastMessage - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
+(id)tupleWithFragmentationStreamForHome:(id)arg1 delegate:(id)arg2 ;
-(void)close;
-(NSDate *)expirationDate;
-(HMFMessage *)lastMessage;
-(BOOL)isExpired;
-(NSString *)homeUUID;
-(id)initWithFragmentationStreamForHome:(id)arg1 delegate:(id)arg2 ;
-(HAPFragmentationStream *)fragmentationStream;
-(void)setLastMessage:(HMFMessage *)arg1 ;
@end
