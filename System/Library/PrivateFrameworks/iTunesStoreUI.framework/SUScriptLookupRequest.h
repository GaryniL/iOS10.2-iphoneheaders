/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSLookupRequest, NSString;

@interface SUScriptLookupRequest : SUScriptObject {

	SSLookupRequest* _request;

}

@property (retain) id authenticatesIfNeeded; 
@property (copy) NSString * keyProfile; 
@property (assign) long long localizationStyle; 
@property (readonly) long long localizationStyleDevice; 
@property (readonly) long long localizationStyleServer; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)attributeKeys;
-(void)setLocalizationStyle:(long long)arg1 ;
-(id)valueForRequestParameter:(id)arg1 ;
-(long long)localizationStyle;
-(void)startWithLookupFunction:(id)arg1 ;
-(id)authenticatesIfNeeded;
-(void)setAuthenticatesIfNeeded:(id)arg1 ;
-(long long)localizationStyleDevice;
-(long long)localizationStyleServer;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setKeyProfile:(NSString *)arg1 ;
-(NSString *)keyProfile;
@end

