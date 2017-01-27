/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKOverlayPainter.h>
#import <libobjc.A.dylib/VKPolylineGroupOverlayObserver.h>

@class VKPolylineOverlay, NSMapTable, VKPolylineOverlayPainter, NSString;

@interface VKPolylineGroupOverlayPainter : VKOverlayPainter <VKPolylineGroupOverlayObserver> {

	VKPolylineOverlay* _selectedPolyline;
	NSMapTable* _polylinesToPainters;
	BOOL _showTraffic;

}

@property (nonatomic,readonly) VKPolylineOverlayPainter * selectedPolylinePainter; 
@property (assign,nonatomic) BOOL showTraffic;                                                  //@synthesize showTraffic=_showTraffic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)flush;
-(void)stylesheetDidChange;
-(void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2 ;
-(void)setContainerModel:(id)arg1 ;
-(void)layoutWithContext:(LayoutContext*)arg1 tiles:(id)arg2 keysInView:(id)arg3 ;
-(void)gglLayoutWithContext:(LayoutContext*)arg1 overlayMaskCommandBuffer:(CommandBuffer*)arg2 traveledStrokeCommandBuffer:(CommandBuffer*)arg3 strokeCommandBuffer:(CommandBuffer*)arg4 traveledFillCommandBuffer:(CommandBuffer*)arg5 fillCommandBuffer:(CommandBuffer*)arg6 tiles:(id)arg7 ;
-(BOOL)showTraffic;
-(void)setShowTraffic:(BOOL)arg1 ;
-(VKPolylineOverlayPainter *)selectedPolylinePainter;
-(void)_addPainterForOverlay:(id)arg1 ;
-(void)setApplicationState:(unsigned char)arg1 ;
-(id)initWithOverlay:(id)arg1 ;
@end
