/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextServiceSession.h>

@protocol _UIHostedTextServiceSessionDelegate;
@interface _UIHostedTextServiceSession : _UITextServiceSession {

	id<_UIHostedTextServiceSessionDelegate> _delegate;

}

@property (assign,nonatomic) id<_UIHostedTextServiceSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
+(id)showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(void)setDelegate:(id<_UIHostedTextServiceSessionDelegate>)arg1 ;
-(id<_UIHostedTextServiceSessionDelegate>)delegate;
-(void)dismissTextServiceAnimated:(BOOL)arg1 ;
-(void)remoteSessionDidDismiss;
@end

