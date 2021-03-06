/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCServerZone.h>

@class NSString, BRCSharedClientZone;

@interface BRCSharedServerZone : BRCServerZone {

	NSString* _ownerName;
	NSString* _mangledID;

}

@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCSharedClientZone * clientZone; 
@property (nonatomic,readonly) NSString * mangledID;                          //@synthesize mangledID=_mangledID - In the implementation block
-(BOOL)isSharedZone;
-(id)asSharedZone;
-(NSString *)mangledID;
-(BRCSharedClientZone *)clientZone;
-(BOOL)isPrivateZone;
-(id)initWithZoneName:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 plist:(id)arg4 session:(id)arg5 ;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(id)ownerName;
@end

