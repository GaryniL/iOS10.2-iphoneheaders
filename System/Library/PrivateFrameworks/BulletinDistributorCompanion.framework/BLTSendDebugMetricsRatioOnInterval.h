/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BLTDebugMetricsRatioOnInterval.h>

@class NSMutableDictionary, NSDictionary;

@interface BLTSendDebugMetricsRatioOnInterval : BLTDebugMetricsRatioOnInterval {

	NSMutableDictionary* _sendAttemptToID;
	NSMutableDictionary* _failureIDSIDs;

}

@property (nonatomic,readonly) NSDictionary * failureIDSIDs; 
-(id)markSendAttempt;
-(void)markSendFailureForToken:(id)arg1 identifier:(id)arg2 fileName:(id)arg3 syncStatus:(id)arg4 ;
-(id)initWithInterval:(id)arg1 ;
-(void)_purgeOldData;
-(void)_writeToPrefs;
-(NSDictionary *)failureIDSIDs;
@end

