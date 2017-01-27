/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRTextEditingAttributesProtobuf, NSData;

@interface _MRKeyboardMessageProtobuf : PBCodable <NSCopying> {

	_MRTextEditingAttributesProtobuf* _attributes;
	NSData* _encryptedTextCyphertext;
	int _state;
	SCD_Struct_MR3 _has;

}

@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasAttributes; 
@property (nonatomic,retain) _MRTextEditingAttributesProtobuf * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedTextCyphertext; 
@property (nonatomic,retain) NSData * encryptedTextCyphertext;                           //@synthesize encryptedTextCyphertext=_encryptedTextCyphertext - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_MRTextEditingAttributesProtobuf *)attributes;
-(void)setAttributes:(_MRTextEditingAttributesProtobuf *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAttributes;
-(void)setEncryptedTextCyphertext:(NSData *)arg1 ;
-(BOOL)hasEncryptedTextCyphertext;
-(NSData *)encryptedTextCyphertext;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
@end
