/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIBannerItem.h>

@class NSDate;

@interface BannerItem : SBUIBannerItem {

	NSDate* _sortDate;

}
-(BOOL)matchingGuidanceInfo:(id)arg1 ;
-(void)updateFromGuidanceChange:(id)arg1 ;
-(id)init;
-(id)description;
-(id)sortDate;
@end
