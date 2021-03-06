/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/MPUTransportButton.h>

@class MPUTransportButtonEventHandler, UIVisualEffectView, MPUTransportButton, UIImage, NSString;

@interface MPUControlCenterTransportButton : UIControl <MPUTransportButton> {

	UIVisualEffectView* _visualEffectView;
	MPUTransportButton* _button;
	UIImage* _transportButtonImage;

}

@property (nonatomic,retain) UIImage * transportButtonImage;                                              //@synthesize transportButtonImage=_transportButtonImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPUTransportButtonEventHandler * transportButtonEventHandler; 
@property (assign,nonatomic) BOOL adjustsImageWhenHighlighted; 
@property (assign,nonatomic) long long transportButtonImageViewContentMode; 
+(id)transportButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)sizeToFit;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)adjustsImageWhenHighlighted;
-(void)applyTransportButtonLayoutAttributes:(SCD_Struct_MP1)arg1 ;
-(BOOL)wantsCustomHighlightAppearance;
-(MPUTransportButtonEventHandler *)transportButtonEventHandler;
-(void)setTransportButtonImageViewContentMode:(long long)arg1 ;
-(void)_updateEffectForStateChange:(unsigned long long)arg1 ;
-(void)_tapReceived:(id)arg1 ;
-(void)_longPressBeginReceived:(id)arg1 ;
-(void)_longPressEndReceived:(id)arg1 ;
-(void)_touchActivateReceived:(id)arg1 ;
-(void)_touchDeactivateReceived:(id)arg1 ;
-(void)setTransportButtonImage:(UIImage *)arg1 ;
-(long long)transportButtonImageViewContentMode;
-(UIImage *)transportButtonImage;
@end

