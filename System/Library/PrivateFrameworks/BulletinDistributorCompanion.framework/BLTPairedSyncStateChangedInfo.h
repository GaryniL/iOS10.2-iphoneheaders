/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BLTPairedSyncStateChangedInfo : NSObject {

	unsigned long long _oldState;
	unsigned long long _newState;

}

@property (assign,nonatomic) unsigned long long oldState;              //@synthesize oldState=_oldState - In the implementation block
@property (assign,nonatomic) unsigned long long newState;              //@synthesize newState=_newState - In the implementation block
-(unsigned long long)oldState;
-(void)setOldState:(unsigned long long)arg1 ;
-(unsigned long long)newState;
-(void)setNewState:(unsigned long long)arg1 ;
@end
