/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSMetricsEventFieldProvider.h>

@class SKUICountdown, SKUIItem, NSNumber, NSString, NSURL, NSDictionary;

@interface SKUILink : NSObject <SSMetricsEventFieldProvider> {

	SKUICountdown* _countdown;
	SKUIItem* _item;
	NSNumber* _itemIdentifier;
	NSString* _target;
	NSString* _title;
	NSURL* _url;

}

@property (getter=isActionable,nonatomic,readonly) BOOL actionable; 
@property (nonatomic,readonly) SKUIItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSNumber * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * linkDictionary; 
@property (nonatomic,readonly) NSString * targetString;                          //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                      //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SKUIItem *)item;
-(NSString *)title;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 ;
-(void)_setItem:(id)arg1 ;
-(NSNumber *)itemIdentifier;
-(id)valueForMetricsField:(id)arg1 ;
-(BOOL)isActionable;
-(NSDictionary *)linkDictionary;
-(NSString *)targetString;
-(id)initWithComponentContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 targetString:(id)arg3 ;
-(id)initWithLinkDictionary:(id)arg1 ;
@end
