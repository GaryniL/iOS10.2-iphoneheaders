/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface TIAddKeyboardController : PSListController
+(BOOL)shouldAddInputMode:(id)arg1 toEnabledInputModes:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancelButtonTapped;
-(void)doneButtonTapped;
-(void)updateDoneButton;
-(id)newSpecifiers;
-(void)toggleInputMode:(id)arg1 ;
-(void)addCheckedInputModes;
-(id)specifiers;
@end

