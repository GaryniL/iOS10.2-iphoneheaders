/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TPBottomSingleButtonBar.h>

@class TPButton;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar {

	TPButton* _button2;

}
-(void)layoutSubviews;
-(void)setButton:(id)arg1 andStyle:(BOOL)arg2 ;
-(void)_layoutButtons;
-(double)_buttonWidth;
-(void)setButton2:(id)arg1 andStyle:(BOOL)arg2 ;
-(id)button2;
@end
