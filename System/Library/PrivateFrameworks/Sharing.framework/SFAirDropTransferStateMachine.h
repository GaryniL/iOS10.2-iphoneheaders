/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFStateMachine.h>

@interface SFAirDropTransferStateMachine : SFStateMachine {

	BOOL _restoring;

}

@property (assign,nonatomic) BOOL restoring;              //@synthesize restoring=_restoring - In the implementation block
-(id)init;
-(void)setRestoring:(BOOL)arg1 ;
-(BOOL)restoring;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
@end

