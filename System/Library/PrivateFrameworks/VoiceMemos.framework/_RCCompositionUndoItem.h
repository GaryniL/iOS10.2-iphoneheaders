/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RCComposition, NSString;

@interface _RCCompositionUndoItem : NSObject {

	RCComposition* _composition;
	NSString* _reasonAccessTokenName;

}

@property (nonatomic,copy) RCComposition * composition;                     //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) NSString * reasonAccessTokenName;              //@synthesize reasonAccessTokenName=_reasonAccessTokenName - In the implementation block
-(RCComposition *)composition;
-(void)setComposition:(RCComposition *)arg1 ;
-(NSString *)reasonAccessTokenName;
-(void)setReasonAccessTokenName:(NSString *)arg1 ;
@end
