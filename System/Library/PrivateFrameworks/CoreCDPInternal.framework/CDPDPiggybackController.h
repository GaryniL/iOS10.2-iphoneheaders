/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPContext, KCJoiningRequestCircleSession, KCJoiningRequestAccountCircleDelegate;

@interface CDPDPiggybackController : NSObject {

	CDPContext* _context;
	KCJoiningRequestCircleSession* _circleSession;
	KCJoiningRequestAccountCircleDelegate* _circleDelegate;

}
-(id)initWithContext:(id)arg1 ;
-(void)resumePiggybackingSession:(/*^block*/id)arg1 ;
-(id)_createCircleSession:(id*)arg1 ;
-(void)_processReply:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendInitiatingMessage:(/*^block*/id)arg1 ;
-(id)_replyContextWithPakeData:(id)arg1 ;
-(void)_replyToAcceptorWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

