/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol _CNAvatarViewDelegate;
@class NSArray;

@interface _CNAvatarView : UIView {

	id<_CNAvatarViewDelegate> _delegate;
	NSArray* _likenessProviders;
	NSArray* _likenessViews;
	NSArray* _subviewsConstraints;

}

@property (nonatomic,copy) NSArray * likenessViews;                                  //@synthesize likenessViews=_likenessViews - In the implementation block
@property (nonatomic,copy) NSArray * subviewsConstraints;                            //@synthesize subviewsConstraints=_subviewsConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<_CNAvatarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * likenessProviders;                            //@synthesize likenessProviders=_likenessProviders - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setDelegate:(id<_CNAvatarViewDelegate>)arg1 ;
-(id<_CNAvatarViewDelegate>)delegate;
-(void)updateConstraints;
-(NSArray *)likenessViews;
-(NSArray *)likenessProviders;
-(void)setLikenessViews:(NSArray *)arg1 ;
-(void)setLikenessProviders:(NSArray *)arg1 ;
-(void)setupSubviews;
-(NSArray *)subviewsConstraints;
-(void)setSubviewsConstraints:(NSArray *)arg1 ;
@end
