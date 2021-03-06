/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUCompletionQueryDataSource.h>

@class MPMediaPredicate, NSString;

@interface MCDQueryDataSource : MPUCompletionQueryDataSource {

	MPMediaPredicate* _localPredicate;
	NSString* _albumSortPreferenceValue;

}

@property (nonatomic,retain) NSString * albumSortPreferenceValue;              //@synthesize albumSortPreferenceValue=_albumSortPreferenceValue - In the implementation block
-(void)dealloc;
-(void)_userDefaultsDidChange:(id)arg1 ;
-(BOOL)entityIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(id)playbackContextForIndex:(unsigned long long)arg1 ;
-(BOOL)showsIndexBar;
-(id)initWithQuery:(id)arg1 entityType:(long long)arg2 ;
-(void)_predicateBehaviorsChangedNotification:(id)arg1 ;
-(BOOL)_updateQueryPredicatesAndOrdering;
-(BOOL)queryIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(id)_queryForNowPlayingComparisonAtIndex:(unsigned long long)arg1 ;
-(void)setAlbumSortPreferenceValue:(NSString *)arg1 ;
-(NSString *)albumSortPreferenceValue;
@end

