/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CPDistributedMessagingCenter, NSString, NSData, NSThread, NSDictionary, NSError;

@interface CPDistributedMessagingAsyncOperation : NSOperation {

	CPDistributedMessagingCenter* _center;
	NSString* _name;
	NSData* _userInfoData;
	NSString* _oolKey;
	NSData* _oolData;
	id _target;
	SEL _selector;
	void* _context;
	BOOL _makeServer;
	NSThread* _calloutThread;
	NSDictionary* _reply;
	NSError* _error;

}
-(id)initWithCenter:(id)arg1 messageName:(id)arg2 userInfoData:(id)arg3 oolKey:(id)arg4 oolData:(id)arg5 target:(id)arg6 selector:(SEL)arg7 context:(void*)arg8 makeServer:(BOOL)arg9 ;
-(void)_releaseSendingData;
-(void)_performCallout;
-(void)dealloc;
-(void)main;
@end
