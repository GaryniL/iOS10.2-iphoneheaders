/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNNavigationServiceReconnectorDelegate;
@class MNRoutePlanningDetails;

@interface MNNavigationServiceReconnector : NSObject {

	id<MNNavigationServiceReconnectorDelegate> _delegate;
	MNRoutePlanningDetails* _routePlanningDetails;

}

@property (assign,nonatomic,__weak) id<MNNavigationServiceReconnectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MNNavigationServiceReconnectorDelegate>)arg1 ;
-(id<MNNavigationServiceReconnectorDelegate>)delegate;
-(id)initWithRoutePlanningDetails:(id)arg1 ;
-(BOOL)isReconnecting;
-(void)finishReconnecting;
-(BOOL)reconnect;
-(BOOL)_isValidRoutePlanningDetails:(id)arg1 ;
@end
