/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIColor, UIViewController;


@protocol EKEventDetailAttendeesList <NSObject>
@property (nonatomic,retain) NSArray * accepted; 
@property (nonatomic,retain) NSArray * maybe; 
@property (nonatomic,retain) NSArray * declined; 
@property (nonatomic,retain) NSArray * noReply; 
@property (nonatomic,retain) NSArray * ungrouped; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * highlightedTextColor; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL groupsNames; 
@property (assign,nonatomic,__weak) UIViewController * viewController; 
@required
-(void)setTextColor:(id)arg1;
-(void)setHighlighted:(BOOL)arg1;
-(BOOL)isHighlighted;
-(UIColor *)textColor;
-(void)setViewController:(id)arg1;
-(UIViewController *)viewController;
-(UIColor *)highlightedTextColor;
-(void)setHighlightedTextColor:(id)arg1;
-(void)setDeclined:(id)arg1;
-(void)setAccepted:(id)arg1;
-(void)setMaybe:(id)arg1;
-(void)setNoReply:(id)arg1;
-(void)setGroupsNames:(BOOL)arg1;
-(void)setUngrouped:(id)arg1;
-(BOOL)groupsNames;
-(NSArray *)accepted;
-(NSArray *)maybe;
-(NSArray *)declined;
-(NSArray *)noReply;
-(NSArray *)ungrouped;
-(void)setup;

@end

