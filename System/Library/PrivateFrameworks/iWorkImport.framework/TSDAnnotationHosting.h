/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSKAnnotationAuthor, NSDate, TSPObject, NSString, TSDCommentStorage;


@protocol TSDAnnotationHosting <NSObject,TSKAnnotation>
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) TSPObject * hostingModel; 
@property (nonatomic,readonly) NSString * changeTrackingTitleString; 
@property (nonatomic,readonly) NSString * changeTrackingContentString; 
@property (nonatomic,readonly) NSString * changeTrackingContentFormatString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
@optional
-(BOOL)wantsAnnotationPopover;
-(NSString *)changeTrackingTitleString;
-(NSString *)changeTrackingContentString;
-(NSString *)changeTrackingContentFormatString;
-(TSDCommentStorage *)storage;
-(void)setStorage:(id)arg1;

@required
-(void)commentWillBeAddedToDocumentRoot;
-(TSPObject *)hostingModel;
-(NSDate *)date;
-(TSKAnnotationAuthor *)author;
-(void)setAuthor:(id)arg1;

@end
