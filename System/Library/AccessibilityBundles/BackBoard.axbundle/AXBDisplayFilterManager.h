/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIClientDelegate.h>

@class AXUIClient, NSString;

@interface AXBDisplayFilterManager : NSObject <AXUIClientDelegate> {

	BOOL _softwareFiltersEnabled;
	BOOL _didEnableHWFilters;
	BOOL _invertColorsWasEnabled;
	BOOL _grayscaleWasEnabled;
	BOOL _reduceWhitePointWasEnabled;
	BOOL _ignoringNotifications;
	AXUIClient* _displayFilterUIClient;

}

@property (nonatomic,retain) AXUIClient * displayFilterUIClient;              //@synthesize displayFilterUIClient=_displayFilterUIClient - In the implementation block
@property (assign,nonatomic) BOOL softwareFiltersEnabled;                     //@synthesize softwareFiltersEnabled=_softwareFiltersEnabled - In the implementation block
@property (assign,nonatomic) BOOL didEnableHWFilters;                         //@synthesize didEnableHWFilters=_didEnableHWFilters - In the implementation block
@property (assign,nonatomic) BOOL invertColorsWasEnabled;                     //@synthesize invertColorsWasEnabled=_invertColorsWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL grayscaleWasEnabled;                        //@synthesize grayscaleWasEnabled=_grayscaleWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL reduceWhitePointWasEnabled;                 //@synthesize reduceWhitePointWasEnabled=_reduceWhitePointWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL ignoringNotifications;                      //@synthesize ignoringNotifications=_ignoringNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)disableAllFilters;
+(void)initializeMonitor;
-(void)_repostNotificationIfNeeded;
-(void)_updateNotificationCache;
-(void)_updateMatrixSupport;
-(AXUIClient *)displayFilterUIClient;
-(void)setSoftwareFiltersEnabled:(BOOL)arg1 ;
-(BOOL)invertColorsWasEnabled;
-(BOOL)_allowSoftwareFilters;
-(void)setDisplayFilterUIClient:(AXUIClient *)arg1 ;
-(void)setGrayscaleWasEnabled:(BOOL)arg1 ;
-(void)setReduceWhitePointWasEnabled:(BOOL)arg1 ;
-(BOOL)grayscaleWasEnabled;
-(void)setInvertColorsWasEnabled:(BOOL)arg1 ;
-(BOOL)didEnableHWFilters;
-(void)_updateCoreSupport;
-(BOOL)reduceWhitePointWasEnabled;
-(void)setIgnoringNotifications:(BOOL)arg1 ;
-(void)_updateBrightnessFilters:(BOOL)arg1 ;
-(BOOL)ignoringNotifications;
-(BOOL)softwareFiltersEnabled;
-(void)_updateSettings:(id)arg1 ;
-(BOOL)_forceSoftwareFilters;
-(void)setDidEnableHWFilters:(BOOL)arg1 ;
-(void)updateSettings;
-(void)dealloc;
@end

