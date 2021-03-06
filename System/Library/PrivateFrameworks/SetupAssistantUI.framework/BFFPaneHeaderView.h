/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIButton, UIView, UIImage, UILabel, UIColor;

@interface BFFPaneHeaderView : UIView {

	UIImageView* _iconView;
	UIButton* _linkButton;
	/*^block*/id _linkHandler;
	UIView* _bottomLine;
	BOOL _textLabelAlignedByLastBaseline;
	UIImage* _icon;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UILabel* _subLabel;
	double _flexibleHeight;

}

@property (nonatomic,retain) UIImage * icon;                                                                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                                    //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailTextLabel;                                                              //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subLabel;                                                                     //@synthesize subLabel=_subLabel - In the implementation block
@property (assign,nonatomic) double flexibleHeight;                                                                    //@synthesize flexibleHeight=_flexibleHeight - In the implementation block
@property (nonatomic,retain) UIColor * bottomLineColor; 
@property (assign,getter=isTextLabelAlignedByLastBaseline,nonatomic) BOOL textLabelAlignedByLastBaseline;              //@synthesize textLabelAlignedByLastBaseline=_textLabelAlignedByLastBaseline - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(UIImage *)icon;
-(void)setLinkText:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_linkButtonPressed;
-(double)_labelsAndLinksBaselineOffsetForView:(id)arg1 ;
-(BOOL)isTextLabelAlignedByLastBaseline;
-(UIColor *)bottomLineColor;
-(void)setBottomLineColor:(UIColor *)arg1 ;
-(double)flexibleHeight;
-(void)setFlexibleHeight:(double)arg1 ;
-(void)setTextLabelAlignedByLastBaseline:(BOOL)arg1 ;
-(double)heightForWidth:(double)arg1 inView:(id)arg2 ;
-(UILabel *)subLabel;
@end

