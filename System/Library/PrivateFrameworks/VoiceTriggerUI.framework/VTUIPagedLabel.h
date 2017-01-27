/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKit/UIView.h>

@class UIScrollView, UIView, UILabel;

@interface VTUIPagedLabel : UIView {

	UIScrollView* _scrollView;
	UIView* _instructionContainerLeft;
	UIView* _instructionContainerRight;
	UILabel* _instructionLabelLeft;
	UILabel* _instructionLabelRight;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)clear;
-(void)setupViews;
-(void)slideInText:(id)arg1 afterDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
@end
