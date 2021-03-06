/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Media/Media-Structs.h>
#import <Media/MPAssistantPlaybackQueue.h>

@class NSArray;

@interface MPAssistantStoreTracklistPlaybackQueue : MPAssistantPlaybackQueue {

	NSArray* _storeItemIDs;
	long long _shuffleType;

}

@property (nonatomic,readonly) NSArray * storeItemIDs;              //@synthesize storeItemIDs=_storeItemIDs - In the implementation block
@property (assign,nonatomic) long long shuffleType;                 //@synthesize shuffleType=_shuffleType - In the implementation block
+(id)storeTracklistQueueWithContextID:(id)arg1 storeItemIDs:(id)arg2 ;
-(id)initWithContextID:(id)arg1 storeItemIDs:(id)arg2 ;
-(NSArray *)storeItemIDs;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(long long)shuffleType;
-(void)setShuffleType:(long long)arg1 ;
@end

