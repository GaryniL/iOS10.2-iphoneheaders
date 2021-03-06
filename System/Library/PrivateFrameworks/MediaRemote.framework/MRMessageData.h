/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, MRProtocolMessage;

@interface MRMessageData : NSObject {

	NSData* _data;
	MRProtocolMessage* _message;
	/*^block*/id _dataBlock;
	long long _readPosition;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) MRProtocolMessage * message; 
@property (assign,nonatomic) long long readPosition;                         //@synthesize readPosition=_readPosition - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) BOOL canPurge; 
-(void)dealloc;
-(NSData *)data;
-(MRProtocolMessage *)message;
-(BOOL)isFinished;
-(id)initWithMessage:(id)arg1 createDataBlock:(/*^block*/id)arg2 ;
-(long long)readPosition;
-(void)setReadPosition:(long long)arg1 ;
-(BOOL)canPurge;
@end

