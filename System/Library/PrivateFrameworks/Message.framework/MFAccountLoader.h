/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFAccountLoader : NSObject
+(Class)accountClassForPersistentAccount:(id)arg1 error:(id*)arg2 ;
+(id)_accountClassStringWithPersistentAccount:(id)arg1 error:(id*)arg2 ;
+(Class)_accountClassForString:(id)arg1 error:(id*)arg2 ;
+(BOOL)loadBundleForAccountClassString:(id)arg1 error:(id*)arg2 ;
+(id)_bundlePathForAccountClassString:(id)arg1 ;
+(id)accountWithPersistentAccount:(id)arg1 error:(id*)arg2 ;
+(id)accountWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2 ;
@end
