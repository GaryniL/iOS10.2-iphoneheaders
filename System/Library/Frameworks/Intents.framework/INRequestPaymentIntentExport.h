/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INPerson, INCurrencyAmount, NSString;


@protocol INRequestPaymentIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * payer; 
@property (nonatomic,copy) INCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSString * note; 
@required
-(id)init;
-(void)setNote:(id)arg1;
-(INPerson *)payer;
-(INCurrencyAmount *)currencyAmount;
-(void)setPayer:(id)arg1;
-(void)setCurrencyAmount:(id)arg1;
-(NSString *)note;

@end
