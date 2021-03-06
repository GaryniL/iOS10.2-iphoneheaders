/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFControlItem.h>

@class NSString, HFValueTransformer;

@interface HFPrimaryStateControlItem : HFControlItem {

	NSString* _primaryStateCharacteristicType;
	HFValueTransformer* _valueTransformer;

}

@property (nonatomic,copy,readonly) NSString * primaryStateCharacteristicType;              //@synthesize primaryStateCharacteristicType=_primaryStateCharacteristicType - In the implementation block
@property (nonatomic,readonly) HFValueTransformer * valueTransformer;                       //@synthesize valueTransformer=_valueTransformer - In the implementation block
+(id)powerStateControlItemWithValueSource:(id)arg1 displayResults:(id)arg2 ;
+(Class)valueClass;
-(HFValueTransformer *)valueTransformer;
-(id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3 ;
-(BOOL)canCopyWithCharacteristicTypeSubset:(id)arg1 ;
-(id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 valueTransformer:(id)arg3 displayResults:(id)arg4 ;
-(NSString *)primaryStateCharacteristicType;
-(id)writePrimaryState:(long long)arg1 ;
-(id)togglePrimaryState;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)writeValue:(id)arg1 ;
@end

