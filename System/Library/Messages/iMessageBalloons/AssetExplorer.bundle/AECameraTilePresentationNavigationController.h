/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <UIKit/UINavigationController.h>

@protocol AECameraTilePresentationDelegate;
@interface AECameraTilePresentationNavigationController : UINavigationController {

	id<AECameraTilePresentationDelegate> _presentationDelegate;

}

@property (assign,nonatomic,__weak) id<AECameraTilePresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<AECameraTilePresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<AECameraTilePresentationDelegate>)arg1 ;
@end

