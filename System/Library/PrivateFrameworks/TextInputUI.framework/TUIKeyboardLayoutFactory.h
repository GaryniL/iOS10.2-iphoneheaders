/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, TUIKBGraphSerialization;

@interface TUIKeyboardLayoutFactory : NSObject {

	void* _layoutsLibraryHandle;
	NSMutableDictionary* _internalCache;
	TUIKBGraphSerialization* _decoder;

}

@property (nonatomic,readonly) void* layoutsLibraryHandle;              //@synthesize layoutsLibraryHandle=_layoutsLibraryHandle - In the implementation block
@property (retain) NSMutableDictionary * internalCache;                 //@synthesize internalCache=_internalCache - In the implementation block
@property (retain) TUIKBGraphSerialization * decoder;                   //@synthesize decoder=_decoder - In the implementation block
+(id)layoutsFileName;
+(id)sharedKeyboardFactory;
-(void*)layoutsLibraryHandle;
-(NSMutableDictionary *)internalCache;
-(void)setInternalCache:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)keyboardWithName:(id)arg1 inCache:(id)arg2 ;
-(id)keyboardPrefixForWidth:(double)arg1 andEdge:(BOOL)arg2 ;
-(TUIKBGraphSerialization *)decoder;
-(void)setDecoder:(TUIKBGraphSerialization *)arg1 ;
-(void)_createDecoderIfNecessary;
@end

