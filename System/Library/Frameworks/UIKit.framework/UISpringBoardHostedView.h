/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString, UIWindow;

@interface UISpringBoardHostedView : UIView {

	NSString* _remoteViewIdentifier;
	UIWindow* _remoteWindow;
	BOOL _remoteViewOpaque;

}
-(void)dealloc;
-(void)unregister;
-(void)setRemoteViewOpaque:(BOOL)arg1 ;
-(void)registerWithIdentifier:(id)arg1 andController:(id)arg2 ;
-(id)remoteViewIdentifier;
@end

