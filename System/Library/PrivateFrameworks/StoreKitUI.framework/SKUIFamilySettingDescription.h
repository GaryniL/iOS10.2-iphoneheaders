/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUISettingDescription.h>

@class SKUISettingsFamilyViewStateCoordinator;

@interface SKUIFamilySettingDescription : SKUISettingDescription {

	SKUISettingsFamilyViewStateCoordinator* _viewStateCoordinator;
	long long _viewState;

}

@property (nonatomic,readonly) long long viewState;              //@synthesize viewState=_viewState - In the implementation block
+(Class)_viewClassForSettingDescription:(id)arg1 ;
-(long long)viewState;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)handleSelectionOnCompletion:(/*^block*/id)arg1 ;
-(BOOL)_initiallyHidden;
-(void)_updateViewState;
-(void)_updateWithViewState:(long long)arg1 ;
@end

