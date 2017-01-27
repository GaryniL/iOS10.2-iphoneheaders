/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SearchUICardViewController, NSURL, SFCardSection;

@interface SearchUICardSectionView : UIView {

	BOOL _hideSeparatorBelow;
	BOOL _fullWidthSeparator;
	SearchUICardViewController* _controller;
	NSURL* _url;
	SFCardSection* _section;

}

@property (__weak) SearchUICardViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (retain) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) SFCardSection * section;                    //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL hideSeparatorBelow;                    //@synthesize hideSeparatorBelow=_hideSeparatorBelow - In the implementation block
@property (assign,nonatomic) BOOL fullWidthSeparator;                    //@synthesize fullWidthSeparator=_fullWidthSeparator - In the implementation block
+(Class)classForSection:(id)arg1 ;
-(SFCardSection *)section;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(SearchUICardViewController *)controller;
-(void)setController:(SearchUICardViewController *)arg1 ;
-(void)setSection:(SFCardSection *)arg1 ;
-(id)initWithCardSection:(id)arg1 controller:(id)arg2 ;
-(BOOL)hideSeparatorBelow;
-(BOOL)fullWidthSeparator;
-(double)separatorLeftInset;
-(void)setHideSeparatorBelow:(BOOL)arg1 ;
-(void)setFullWidthSeparator:(BOOL)arg1 ;
@end
