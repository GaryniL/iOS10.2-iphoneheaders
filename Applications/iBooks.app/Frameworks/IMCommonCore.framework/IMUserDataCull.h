/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMUserDataCull : NSObject
+(unsigned long long)maxDeletedAge;
+(BOOL)isTimestampTrustworthy:(unsigned long long)arg1 ;
+(BOOL)isTimestamp:(unsigned long long)arg1 newerThanMaxAgeFromRightNow:(unsigned long long)arg2 ;
+(BOOL)isTimestampNewerThanMaxDeletedAge:(unsigned long long)arg1 ;
@end

