/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@protocol HFIconDescriptor;
@interface HFServiceIconItem : HFItem {

	id<HFIconDescriptor> _iconDescriptor;

}

@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor;              //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithIconDescriptor:(id)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
@end

