/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDChangeableInfo <TSDInfo>
@property (nonatomic,readonly) BOOL isUserModifiable; 
@optional
-(void)willChangeProperties:(id)arg1;

@required
-(void)willChangeProperty:(int)arg1;
-(void)beginCollectingChanges;
-(id)endCollectingChanges;
-(BOOL)isUserModifiable;

@end

