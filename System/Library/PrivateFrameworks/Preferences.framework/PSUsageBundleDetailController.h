/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>

@interface PSUsageBundleDetailController : PSEditableListController
+(void)setupSpecifier:(id)arg1 forMediaGroups:(id)arg2 ;
+(id)mediaGroups;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(BOOL)needsToShowToolbarInPrefsAppRoot;
-(void)updateSizesAfterDeletingSize:(float)arg1 shouldPop:(BOOL)arg2 ;
-(id)sizeForSpecifier:(id)arg1 ;
-(id)size:(id)arg1 ;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
@end
