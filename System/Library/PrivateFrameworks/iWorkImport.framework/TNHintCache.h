/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TNPageController, TSDDrawableInfo, TNPageCoordinateDictionary;

@interface TNHintCache : NSObject {

	TNPageController* mPageController;
	TSDDrawableInfo* mInfo;
	TSCERangeCoordinate mPageRange;
	BOOL mIsMaxColumnValid;
	BOOL mIsMaxRowValid;
	TNPageCoordinateDictionary* mHintCacheEntryDictionary;

}

@property (retain) TSDDrawableInfo * info; 
@property (readonly) TNPageController * pageController; 
-(id)p_hintCacheEntryAtCoordinate:(TSUCellCoord)arg1 ;
-(id)initWithInfo:(id)arg1 pageController:(id)arg2 ;
-(TSCERangeCoordinate)pageRangeWithUpperBound:(TSUCellCoord)arg1 ;
-(id)layoutAtCoordinate:(TSUCellCoord)arg1 parentLayout:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(TSDDrawableInfo *)info;
-(TNPageController *)pageController;
-(void)setInfo:(TSDDrawableInfo *)arg1 ;
@end
