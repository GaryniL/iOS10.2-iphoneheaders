/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController;

@interface SKUIBackdropContentViewController : UIViewController {

	long long _backdropViewPrivateStyle;
	UIViewController* _contentViewController;

}

@property (assign,nonatomic) long long backdropViewPrivateStyle;                    //@synthesize backdropViewPrivateStyle=_backdropViewPrivateStyle - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(void)loadView;
-(UIViewController *)contentViewController;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)setBackdropViewPrivateStyle:(long long)arg1 ;
-(long long)backdropViewPrivateStyle;
@end
