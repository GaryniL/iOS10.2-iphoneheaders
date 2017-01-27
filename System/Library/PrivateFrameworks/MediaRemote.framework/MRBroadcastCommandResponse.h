/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface MRBroadcastCommandResponse : NSObject <NSSecureCoding> {

	NSArray* _commandHandlerStatuses;
	int _pid;
	NSData* _responseData;
	NSString* _bundleIdentifer;

}

@property (nonatomic,readonly) NSData * responseData;                         //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,readonly) NSArray * commandHandlerStatuses; 
@property (nonatomic,readonly) int pid;                                       //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifer;                    //@synthesize bundleIdentifer=_bundleIdentifer - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)bundleIdentifer;
-(NSArray *)commandHandlerStatuses;
-(id)initWithPID:(int)arg1 bundleIdentifier:(id)arg2 statuses:(id)arg3 ;
-(id)initWithPID:(int)arg1 bundleIdentifier:(id)arg2 responseData:(id)arg3 ;
-(NSData *)responseData;
-(int)pid;
@end
