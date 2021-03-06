/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIViewController.h>

@class ADInterstitialAd, ADCountdownButton;

@interface ADInterstitialAdPresentationViewController : UIViewController {

	ADInterstitialAd* _interstitialAd;
	ADCountdownButton* _closeButton;

}

@property (nonatomic,__weak,readonly) ADInterstitialAd * interstitialAd; 
@property (nonatomic,retain) ADCountdownButton * closeButton;                         //@synthesize closeButton=_closeButton - In the implementation block
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(BOOL)wantsFullScreenLayout;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(ADCountdownButton *)closeButton;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(ADInterstitialAd *)interstitialAd;
-(void)setCloseButton:(ADCountdownButton *)arg1 ;
@end

