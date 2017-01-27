/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCPlayerItemContainer.h>

@class MPQueueFeeder;

@interface MPCMediaPlayerLegacyItemContainer : MPCPlayerItemContainer {

	MPQueueFeeder* _queueFeeder;

}

@property (nonatomic,readonly) MPQueueFeeder * queueFeeder;              //@synthesize queueFeeder=_queueFeeder - In the implementation block
-(id)initWithQueueFeeder:(id)arg1 ;
-(MPQueueFeeder *)queueFeeder;
-(id)modelPlayEventRepresentation;
@end
