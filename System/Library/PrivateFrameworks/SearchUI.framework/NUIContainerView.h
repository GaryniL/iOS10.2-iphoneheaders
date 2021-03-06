/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UIMultilineTextContentSizing.h>

@class UIView, NSString;

@interface NUIContainerView : UIView <_UIMultilineTextContentSizing> {

	double _preferredMaxLayoutWidth;
	struct {
		unsigned determiningPreferredMaxLayoutWidth : 1;
		unsigned inSecondConstraintsPass : 1;
	}  _containerViewFlags;
	BOOL _baselineRelativeArrangement;
	BOOL _layoutMarginsRelativeArrangement;
	UIView* _arrangedSubview;
	long long _horizontalAlignment;
	long long _verticalAlignment;

}

@property (nonatomic,retain) UIView * arrangedSubview;                                                                     //@synthesize arrangedSubview=_arrangedSubview - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;                                                                //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                                                                  //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement;                        //@synthesize baselineRelativeArrangement=_baselineRelativeArrangement - In the implementation block
@property (assign,getter=isLayoutMarginsRelativeArrangement,nonatomic) BOOL layoutMarginsRelativeArrangement;              //@synthesize layoutMarginsRelativeArrangement=_layoutMarginsRelativeArrangement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)updateConstraints;
-(id)viewForLastBaselineLayout;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_setInSecondConstraintsPass:(BOOL)arg1 ;
-(void)_resetToBeginningOfDoublePass;
-(long long)horizontalAlignment;
-(long long)verticalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(BOOL)isBaselineRelativeArrangement;
-(void)setLayoutMarginsRelativeArrangement:(BOOL)arg1 ;
-(BOOL)isLayoutMarginsRelativeArrangement;
-(id)viewForFirstBaselineLayout;
-(id)initWithArrangedSubview:(id)arg1 ;
-(void)setArrangedSubview:(UIView *)arg1 ;
-(void)_positionSizeOfRect:(CGRect*)arg1 horizontallyInBounds:(CGRect)arg2 ;
-(void)_positionSizeOfRect:(CGRect*)arg1 verticallyInBounds:(CGRect)arg2 ;
-(UIView *)arrangedSubview;
@end

