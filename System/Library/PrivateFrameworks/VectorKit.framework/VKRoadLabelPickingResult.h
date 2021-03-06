/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKLabelFeatureMarker, NSString;

@interface VKRoadLabelPickingResult : NSObject {

	VKLabelFeatureMarker* _labelFeatureMarker;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) VKLabelFeatureMarker * labelFeatureMarker;              //@synthesize labelFeatureMarker=_labelFeatureMarker - In the implementation block
@property (nonatomic,readonly) float closestApproach; 
@property (nonatomic,readonly) CGVector direction; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(CGVector)direction;
-(id)initWithLabelFeatureMarkerPtr:(const shared_ptr<md::LabelFeatureMarker>Ref)arg1 ;
-(float)closestApproach;
-(VKLabelFeatureMarker *)labelFeatureMarker;
@end

