/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UpdateAndReportServices : NSObject {

	BOOL _update;
	BOOL _report;
	/*^block*/id _block;

}

@property (readonly) BOOL update;              //@synthesize update=_update - In the implementation block
@property (readonly) BOOL report;              //@synthesize report=_report - In the implementation block
@property (copy) id block;                     //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(BOOL)update;
-(void)setBlock:(id)arg1 ;
-(id)block;
-(id)initWithServices:(BOOL)arg1 needToReport:(BOOL)arg2 service:(/*^block*/id)arg3 ;
-(BOOL)report;
@end
