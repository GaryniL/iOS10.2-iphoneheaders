/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKHourLabelCollectionNode.h>

@class NSArray;

@interface NTKZeusHourLabelCollectionNode : NTKHourLabelCollectionNode {

	unsigned long long _density;
	NSArray* _visibleNodesForCurrentDensity;

}

@property (nonatomic,retain) NSArray * visibleNodesForCurrentDensity;              //@synthesize visibleNodesForCurrentDensity=_visibleNodesForCurrentDensity - In the implementation block
@property (assign,nonatomic) unsigned long long density;                           //@synthesize density=_density - In the implementation block
-(void)setDensity:(unsigned long long)arg1 ;
-(unsigned long long)density;
-(void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3 ;
-(void)createSubNodes;
-(NSArray *)visibleNodesForCurrentDensity;
-(void)_setupPositions;
-(BOOL)_hourNumberAtIndex:(unsigned long long)arg1 isVisibleWithDensity:(unsigned long long)arg2 ;
-(void)setVisibleNodesForCurrentDensity:(NSArray *)arg1 ;
-(id)initWithFont:(long long)arg1 ;
@end

