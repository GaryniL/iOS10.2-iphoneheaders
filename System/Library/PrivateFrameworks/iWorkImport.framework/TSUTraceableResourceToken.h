/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSUTraceableResourceToken.h>
@class NSString, NSArray, NSObject;


@protocol TSUTraceableResourceToken <NSObject>
@property (nonatomic,readonly) NSString * intent; 
@property (nonatomic,readonly) double timeout; 
@property (nonatomic,readonly) NSArray * acquireCallStack; 
@property (nonatomic,readonly) NSArray * relinquishCallStack; 
@property (nonatomic,readonly) NSObject * context; 
@required
-(NSArray *)acquireCallStack;
-(NSArray *)relinquishCallStack;
-(void)pauseTimeout;
-(void)resumeTimeout;
-(NSObject *)context;
-(NSString *)intent;
-(double)timeout;

@end


@class NSString, NSArray, NSObject;

@interface TSUTraceableResourceToken : NSObject <TSUTraceableResourceToken> {

	Ai _timeoutPauseCount;
	NSArray* _acquireCallStack;
	NSArray* _copiedAcquireCallStack;
	NSArray* _relinquishCallStack;
	NSArray* _copiedRelinquishCallStack;
	NSString* _intent;
	double _timeout;
	NSObject* _context;

}

@property (nonatomic,readonly) BOOL isTimeoutPaused; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * intent;                          //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) NSArray * acquireCallStack; 
@property (nonatomic,readonly) NSArray * relinquishCallStack; 
@property (nonatomic,readonly) NSObject * context;                         //@synthesize context=_context - In the implementation block
+(id)callStackDescriptionWithAction:(id)arg1 intent:(id)arg2 callStackSymbols:(id)arg3 index:(id)arg4 indentLevel:(unsigned long long)arg5 ;
-(id)initWithIntent:(id)arg1 timeout:(double)arg2 context:(id)arg3 acquireCallStack:(id)arg4 ;
-(void)setRelinquishCallStackIfNeeded:(id)arg1 ;
-(BOOL)isTimeoutPaused;
-(id)acquireCallStackDescriptionWithIndex:(id)arg1 indentLevel:(unsigned long long)arg2 ;
-(NSArray *)acquireCallStack;
-(NSArray *)relinquishCallStack;
-(void)pauseTimeout;
-(void)resumeTimeout;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSObject *)context;
-(NSString *)intent;
-(double)timeout;
@end
