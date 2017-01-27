/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CrashReporterSupport/AppleErrorReport.h>

@class NSDictionary, NSString;

@interface GPUEventReport : AppleErrorReport {

	NSDictionary* _event;
	NSString* _tailspinPath;

}
-(id)reportNamePrefix;
-(id)appleCareDetails;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)problemType;
@end
