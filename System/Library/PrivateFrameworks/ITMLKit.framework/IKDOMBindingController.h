/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/IKJSDataItemObserver.h>

@protocol IKDOMBindingControllerDelegate;
@class NSDictionary, NSMutableArray, IKAppContext, IKDOMElement, IKDataBinding, IKJSDataItem, NSString;

@interface IKDOMBindingController : NSObject <IKJSDataItemObserver> {

	NSDictionary* _bindingKeysByPathString;
	struct {
		BOOL hasDidLoadBinding;
		BOOL hasShouldResolveData;
		BOOL hasDoKeysAffectingChildren;
		BOOL hasDoKeysAffectingSubtree;
		BOOL hasAdditionalKeysToResolve;
		BOOL hasApplyValueForKey;
		BOOL hasDidResolveKeys;
	}  _delegateFlags;
	NSMutableArray* _scheduledUpdaters;
	BOOL _shouldResolveData;
	IKAppContext* _appContext;
	IKDOMElement* _domElement;
	IKDOMBindingController* _parent;
	IKDataBinding* _binding;
	id<IKDOMBindingControllerDelegate> _delegate;
	IKJSDataItem* _dataItem;

}

@property (nonatomic,__weak,readonly) IKAppContext * appContext;                              //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMElement * domElement;                              //@synthesize domElement=_domElement - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMBindingController * parent;                        //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) IKDataBinding * binding;                                       //@synthesize binding=_binding - In the implementation block
@property (assign,nonatomic,__weak) id<IKDOMBindingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) IKJSDataItem * dataItem;                                //@synthesize dataItem=_dataItem - In the implementation block
@property (nonatomic,readonly) BOOL shouldResolveData;                                        //@synthesize shouldResolveData=_shouldResolveData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedBindingForDOMElement:(id)arg1 ;
-(void)setDelegate:(id<IKDOMBindingControllerDelegate>)arg1 ;
-(id<IKDOMBindingControllerDelegate>)delegate;
-(void)teardown;
-(IKJSDataItem *)dataItem;
-(IKDOMElement *)domElement;
-(IKDataBinding *)binding;
-(void)scheduleUpdateUsingPreUpdate:(/*^block*/id)arg1 update:(/*^block*/id)arg2 ;
-(void)dataItem:(id)arg1 didChangePropertyPathWithString:(id)arg2 ;
-(BOOL)shouldResolveData;
-(void)_resolve;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 delegate:(id)arg3 ;
-(IKAppContext *)appContext;
-(IKDOMBindingController *)parent;
@end

