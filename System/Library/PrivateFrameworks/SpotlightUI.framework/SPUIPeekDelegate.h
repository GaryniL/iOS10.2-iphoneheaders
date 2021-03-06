/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class SPUITableViewController, SFSearchResult, NSIndexPath, UIView, UITableViewCell, NSString;

@interface SPUIPeekDelegate : NSObject <UIInteractionProgressObserver, UIViewControllerPreviewingDelegate> {

	BOOL _keyboardShouldReturn;
	BOOL _didPeek;
	BOOL _shouldFadeOutTableView;
	SPUITableViewController* _viewController;
	SFSearchResult* _result;
	NSIndexPath* _indexPath;
	UIView* _hiddenSectionHeader;
	UITableViewCell* _hiddenCell;

}

@property (__weak) SPUITableViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (retain) SFSearchResult * result;                               //@synthesize result=_result - In the implementation block
@property (retain) NSIndexPath * indexPath;                               //@synthesize indexPath=_indexPath - In the implementation block
@property (assign) BOOL keyboardShouldReturn;                             //@synthesize keyboardShouldReturn=_keyboardShouldReturn - In the implementation block
@property (retain) UIView * hiddenSectionHeader;                          //@synthesize hiddenSectionHeader=_hiddenSectionHeader - In the implementation block
@property (retain) UITableViewCell * hiddenCell;                          //@synthesize hiddenCell=_hiddenCell - In the implementation block
@property (assign) BOOL didPeek;                                          //@synthesize didPeek=_didPeek - In the implementation block
@property (assign) BOOL shouldFadeOutTableView;                           //@synthesize shouldFadeOutTableView=_shouldFadeOutTableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSIndexPath *)indexPath;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setViewController:(SPUITableViewController *)arg1 ;
-(SPUITableViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4 ;
-(SFSearchResult *)result;
-(void)setResult:(SFSearchResult *)arg1 ;
-(BOOL)didPeek;
-(void)setHiddenSectionHeader:(UIView *)arg1 ;
-(void)setHiddenCell:(UITableViewCell *)arg1 ;
-(BOOL)keyboardShouldReturn;
-(void)setKeyboardShouldReturn:(BOOL)arg1 ;
-(void)showSectionHeader;
-(BOOL)shouldFadeOutTableView;
-(UITableViewCell *)hiddenCell;
-(void)setDidPeek:(BOOL)arg1 ;
-(void)setShouldFadeOutTableView:(BOOL)arg1 ;
-(void)prepareForPreviewAtIndexPath:(id)arg1 ;
-(void)fillParentViewController:(id)arg1 withChild:(id)arg2 ;
-(UIView *)hiddenSectionHeader;
@end

