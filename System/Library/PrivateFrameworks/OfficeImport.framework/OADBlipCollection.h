/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface OADBlipCollection : NSObject {

	NSMutableArray* mBlips;

}

@property (nonatomic,retain) NSMutableArray * blips; 
-(id)init;
-(void)dealloc;
-(NSMutableArray *)blips;
-(id)blipAtIndex:(int)arg1 ;
-(unsigned)addBlip:(id)arg1 ;
-(unsigned)blipCount;
-(void)setBlips:(NSMutableArray *)arg1 ;
@end

