/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBLockStateAggregator : NSObject {

	unsigned long long _lockState;

}
+(id)sharedInstance;
-(id)_descriptionForLockState:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)hasAnyLockState;
-(unsigned long long)lockState;
-(void)_updateLockState;
@end

