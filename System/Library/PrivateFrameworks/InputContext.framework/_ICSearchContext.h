/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _ICSearchContext : NSObject {

	NSString* _locale;
	NSArray* _recipients;
	NSString* _applicationBundleIdentifier;

}

@property (nonatomic,readonly) NSString * locale;                                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                                //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
-(NSString *)locale;
-(NSArray *)recipients;
-(NSString *)applicationBundleIdentifier;
-(id)initWithLocale:(id)arg1 recipients:(id)arg2 applicationBundleIdentifier:(id)arg3 ;
@end

