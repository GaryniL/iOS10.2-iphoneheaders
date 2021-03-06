/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPlacesMapLayout.h>

@protocol PXPlacesMapLayout <PXPlacesMapPipelineComponent>
@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource; 
@required
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(id)layoutItemForGeotaggable:(id)arg1;
-(id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;

@end


@protocol PXPlacesGeotaggedItemDataSource, PXPlacesMapPipelineComponentProvider;
@class NSString;

@interface PXPlacesMapLayout : NSObject <PXPlacesMapLayout> {

	id<PXPlacesGeotaggedItemDataSource> _dataSource;
	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource;                                                 //@synthesize dataSource=_dataSource - In the implementation block
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(void)reset;
-(id)initWithDataSource:(id)arg1 ;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(id)layoutItemForGeotaggable:(id)arg1 ;
-(id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2 ;
@end

