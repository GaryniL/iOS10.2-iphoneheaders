/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, MCUIGradientLabel, UIImageView, MCActionButton;

@interface MCDetailsHeaderContentView : UIView {

	UILabel* _displayNameLabel;
	UILabel* _organizationNameLabel;
	MCUIGradientLabel* _trustedLabel;
	UIImageView* _checkmarkView;
	MCActionButton* _actionButton;
	int _headerMode;
	BOOL _isNewPayload;
	BOOL _isTrusted;
	BOOL _isSigned;
	BOOL _isExpired;
	BOOL _hidesUntrustedLabel;
	BOOL _useTrustedNomenclature;
	id _headerDelegate;

}
+(void)_releaseGradients;
+(id)_greenGradient;
+(id)_redGradient;
+(id)_grayGradient;
-(void)layoutSubviews;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)_scriptingInfo;
-(void)_actionButtonPressed:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)setOrganizationName:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 ;
-(void)setGradientColor:(int)arg1 ;
-(void)setHidesUntrustedLabel:(BOOL)arg1 ;
-(void)setUseTrustedNomenclature:(BOOL)arg1 ;
-(void)setIsTrusted:(BOOL)arg1 ;
-(void)setIsSigned:(BOOL)arg1 ;
-(void)hideActionButton;
-(void)showActionButton;
-(void)setActionToRemove;
-(id)_displayNameLabel;
-(id)_organizationNameLabel;
-(id)_trustedLabel;
-(id)_stringForSigned:(BOOL)arg1 andTrusted:(BOOL)arg2 ;
-(BOOL)_canFitTrustedStringForWidth:(double)arg1 ;
-(void)setIsExpired:(BOOL)arg1 ;
-(id)_gradientForSigned:(BOOL)arg1 andTrusted:(BOOL)arg2 ;
-(void)setActionToInstall;
@end

