/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>
#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@class FBSDisplayLayoutMonitor, NSString;

@interface PLRenderingAgent : PLAgent <FBSDisplayLayoutObserver> {

	FBSDisplayLayoutMonitor* _mainDisplayMonitor;

}

@property (retain) FBSDisplayLayoutMonitor * mainDisplayMonitor;              //@synthesize mainDisplayMonitor=_mainDisplayMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventBackwardDefinitionFrameCount;
-(id)init;
-(void)dealloc;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)log;
-(void)initOperatorDependancies;
-(FBSDisplayLayoutMonitor *)mainDisplayMonitor;
-(void)setMainDisplayMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(void)logEventForwardFrameCount:(id)arg1 ;
@end

