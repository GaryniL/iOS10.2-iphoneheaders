/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class NSUUID;

@interface CXSetGroupCallAction : CXCallAction {

	NSUUID* _callUUIDToGroupWith;

}

@property (nonatomic,retain) NSUUID * callUUIDToGroupWith;              //@synthesize callUUIDToGroupWith=_callUUIDToGroupWith - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)customDescription;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(NSUUID *)callUUIDToGroupWith;
-(void)setCallUUIDToGroupWith:(NSUUID *)arg1 ;
-(id)initWithCallUUID:(id)arg1 callUUIDToGroupWith:(id)arg2 ;
@end

