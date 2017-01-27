/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGPictureInPictureViewController <NSObject>
@property (nonatomic,readonly) BOOL shouldShowAlternateActionButtonImage; 
@property (nonatomic,readonly) BOOL shouldShowLoadingIndicator; 
@optional
-(void)willAnimatePictureInPictureStart;
-(void)didAnimatePictureInPictureStart;
-(void)willAnimatePictureInPictureStop;
-(void)didAnimatePictureInPictureStop;
-(void)viewWillResize;
-(void)viewDidResize;
-(void)actionButtonTapped;
-(BOOL)shouldShowAlternateActionButtonImage;
-(BOOL)shouldShowLoadingIndicator;

@end
