/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASerializable.h>

@class PASymbol, PASymbolOwner, NSString, NSUUID;

@interface PASymbolHandle : NSObject <PASerializable> {

	PASymbol* _symbol;
	PASymbolOwner* _owner;
	unsigned long long _symbolOwnerStartAddressInTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL hasSymbolOwner; 
@property (readonly) NSUUID * symbolOwnerUUID; 
@property (readonly) BOOL hasSymbolOwnerStartAddressInTask; 
@property (readonly) unsigned long long symbolOwnerStartAddressInTask;              //@synthesize symbolOwnerStartAddressInTask=_symbolOwnerStartAddressInTask - In the implementation block
@property (readonly) NSString * symbolOwnerName; 
@property (retain) NSString * symbolOwnerPath; 
@property (readonly) unsigned long long symbolOwnerTextSegmentLength; 
@property (readonly) BOOL symbolOwnerIsTextExecSegment; 
@property (readonly) NSString * symbolOwnerBundleIdentifier; 
@property (readonly) NSString * symbolOwnerBundleVersion; 
@property (readonly) NSString * symbolOwnerBundleShortVersion; 
@property (readonly) NSString * symbolOwnerBinaryVersion; 
@property (readonly) BOOL hasSymbol; 
@property (readonly) NSString * symbolName; 
@property (readonly) unsigned long long symbolStartAddressInTask; 
@property (readonly) unsigned long long symbolLength; 
+(id)getEmptySymbolHandle;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(NSString *)debugDescription;
-(id)_initAsEmptyHandle;
-(unsigned long long)symbolStartAddressInTask;
-(unsigned long long)symbolLength;
-(id)_sourceInformationForAddress:(unsigned long long)arg1 ;
-(BOOL)hasSourceInformationForAddress:(unsigned long long)arg1 ;
-(id)debugDescriptionForAddress:(unsigned long long)arg1 ;
-(unsigned long long)symbolOwnerStartAddressInTask;
-(NSString *)symbolName;
-(NSString *)symbolOwnerName;
-(NSUUID *)symbolOwnerUUID;
-(id)sourceFileNameForAddress:(unsigned long long)arg1 ;
-(unsigned)sourceLineNumberForAddress:(unsigned long long)arg1 ;
-(unsigned)sourceColumnNumberForAddress:(unsigned long long)arg1 ;
-(BOOL)hasSymbolOwner;
-(BOOL)hasSymbolOwnerStartAddressInTask;
-(NSString *)symbolOwnerPath;
-(void)setSymbolOwnerPath:(NSString *)arg1 ;
-(unsigned long long)symbolOwnerTextSegmentLength;
-(BOOL)symbolOwnerIsTextExecSegment;
-(NSString *)symbolOwnerBundleIdentifier;
-(NSString *)symbolOwnerBundleVersion;
-(NSString *)symbolOwnerBundleShortVersion;
-(NSString *)symbolOwnerBinaryVersion;
-(BOOL)hasSymbol;
-(unsigned long long)sourceStartAddressInTaskForAddress:(unsigned long long)arg1 ;
-(unsigned long long)sourceLengthForAddress:(unsigned long long)arg1 ;
-(long long)compareInfoRichnessToSymbolHandle:(id)arg1 forAddress:(unsigned long long)arg2 ;
-(id)initWithSymbol:(id)arg1 andSymbolOwnerStartAddress:(unsigned long long)arg2 andSymbolOwner:(id)arg3 ;
-(BOOL)addToPersistentCache;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
@end

