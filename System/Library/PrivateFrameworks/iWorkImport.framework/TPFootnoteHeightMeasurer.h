/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSWPFootnoteHeightMeasurer.h>

@class TPFootnoteContainerLayout, TSDLayoutController, TSULRUCache, NSString;

@interface TPFootnoteHeightMeasurer : NSObject <TSWPFootnoteHeightMeasurer> {

	TPFootnoteContainerLayout* _footnoteContainerLayout;
	TSDLayoutController* _layoutController;
	TSULRUCache* _footnoteLayoutCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAllFootnoteReferenceStorages;
-(double)footnoteHeight;
-(void)removeFootnoteReferenceStorage:(id)arg1 ;
-(void)addFootnoteReferenceStorage:(id)arg1 ;
-(id)initWithFootnoteMarkProvider:(id)arg1 maxFootnoteWidth:(double)arg2 maxFootnoteHeight:(double)arg3 footnoteSpacing:(double)arg4 ;
-(void)setContainerWidth:(double)arg1 ;
-(void)setFootnoteSpacing:(long long)arg1 ;
-(void)p_clearFootnoteLayoutCache;
-(void)dealloc;
@end
