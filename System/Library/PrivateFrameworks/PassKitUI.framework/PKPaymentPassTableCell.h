/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@protocol PKPaymentPassTableCellDelegate;
@class PKPaymentApplication, UIView, UIActivityIndicatorView, PKPaymentPass, UILabel, UIControl;

@interface PKPaymentPassTableCell : PSTableCell {

	PKPaymentApplication* _paymentApplication;
	long long _settingsContext;
	UIView* _cardSnapshotView;
	UIActivityIndicatorView* _spinner;
	BOOL _showState;
	BOOL _showSubTitle;
	BOOL _showAddButton;
	PKPaymentPass* _pass;
	id<PKPaymentPassTableCellDelegate> _delegate;
	UILabel* _mainLabel;
	UILabel* _subTextLabel;
	UIControl* _actionButton;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                     //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) BOOL showSubTitle;                                        //@synthesize showSubTitle=_showSubTitle - In the implementation block
@property (assign,nonatomic) BOOL showAddButton;                                       //@synthesize showAddButton=_showAddButton - In the implementation block
@property (assign,nonatomic) id<PKPaymentPassTableCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * mainLabel;                                    //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subTextLabel;                                 //@synthesize subTextLabel=_subTextLabel - In the implementation block
@property (nonatomic,readonly) UIControl * actionButton;                               //@synthesize actionButton=_actionButton - In the implementation block
-(void)layoutSubviews;
-(void)setDelegate:(id<PKPaymentPassTableCellDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPaymentPassTableCellDelegate>)delegate;
-(void)tintColorDidChange;
-(void)_addButtonPressed:(id)arg1 ;
-(PKPaymentPass *)pass;
-(UIControl *)actionButton;
-(UILabel *)mainLabel;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)showActivitySpinner:(BOOL)arg1 ;
-(void)setFelicaProperties:(id)arg1 ;
-(id)_stringForPassState:(unsigned long long)arg1 ;
-(void)_verifyButtonPressed:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)disableAddButton;
-(BOOL)showSubTitle;
-(void)setShowSubTitle:(BOOL)arg1 ;
-(BOOL)showAddButton;
-(void)setShowAddButton:(BOOL)arg1 ;
-(UILabel *)subTextLabel;
@end
