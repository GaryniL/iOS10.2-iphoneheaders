/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet;

@interface TSTCoordinateArray : NSObject {

	unsigned mOffset;
	unsigned mCount;
	double* mCoordinates;
	double mAverage;
	NSMutableIndexSet* mVisibleIndices;
	BOOL mLayoutDirectionIsLeftToRight;
	double mTableWidth;

}
-(void)hasRightToLeftOrderingWithWidth:(double)arg1 ;
-(id)initWithCount:(unsigned)arg1 atOffset:(unsigned)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

