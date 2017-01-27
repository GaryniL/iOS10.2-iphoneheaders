/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIPlaceholderProviderFactory.h>

@protocol CNUIPlaceholderProviderFactory <NSObject>
@required
-(id)loadingPlaceholderProvider;
-(id)placeholderProvider;

@end


@protocol CNUIPRLikenessProvider, CNScheduler;
@class NSString;

@interface CNUIPlaceholderProviderFactory : NSObject <CNUIPlaceholderProviderFactory> {

	id<CNUIPRLikenessProvider> _placeholderProvider;
	id<CNUIPRLikenessProvider> _loadingPlaceholderProvider;
	id<CNScheduler> _resourceLock;
	id<CNScheduler> _highPriorityLock;

}

@property (nonatomic,retain) id<CNScheduler> resourceLock;                               //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,retain) id<CNScheduler> highPriorityLock;                           //@synthesize highPriorityLock=_highPriorityLock - In the implementation block
@property (readonly) id<CNUIPRLikenessProvider> placeholderProvider; 
@property (readonly) id<CNUIPRLikenessProvider> loadingPlaceholderProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CNScheduler>)resourceLock;
-(id<CNUIPRLikenessProvider>)loadingPlaceholderProvider;
-(id<CNUIPRLikenessProvider>)placeholderProvider;
-(void)setResourceLock:(id<CNScheduler>)arg1 ;
-(id<CNScheduler>)highPriorityLock;
-(void)setHighPriorityLock:(id<CNScheduler>)arg1 ;
@end
