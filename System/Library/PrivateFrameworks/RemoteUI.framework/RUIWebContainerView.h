/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol RUIWebContainerViewDelegate;
@class UIWebView, NSString;

@interface RUIWebContainerView : UIView <UIWebViewDelegate> {

	BOOL _highlighted;
	BOOL _reallyHighlighted;
	UIWebView* _webView;
	id<RUIWebContainerViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIWebView * webView;                                        //@synthesize webView=_webView - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic,__weak) id<RUIWebContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)setDelegate:(id<RUIWebContainerViewDelegate>)arg1 ;
-(id<RUIWebContainerViewDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(UIWebView *)webView;
-(void)setUserStyleSheet:(id)arg1 ;
-(BOOL)uiWebView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)initWithContent:(id)arg1 baseURL:(id)arg2 ;
-(void)_setHighlightedNow;
-(double)heightForWidth:(double)arg1 ;
@end

