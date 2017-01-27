/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock, NSMutableArray;

@interface MPEffectManager : NSObject {

	NSMutableDictionary* mEffects;
	NSMutableDictionary* mCategories;
	NSMutableDictionary* mCachedAspectRatios;
	NSMutableDictionary* mCachedBreakInfo;
	NSLock* mLock;
	NSMutableArray* mRegisteredFonts;

}
+(void)releaseSharedManager;
+(void)loadEffectManagerWithPaths:(id)arg1 ;
+(void)initialize;
+(id)sharedManager;
-(id)aspectRatioForEffectID:(id)arg1 ;
-(BOOL)effectNeedsPanoInformation:(id)arg1 ;
-(double)defaultFullDurationForEffectID:(id)arg1 ;
-(double)panoramaScaleOffsetForEffectID:(id)arg1 ;
-(double)durationPaddingForEffectID:(id)arg1 ;
-(id)orientationForEffectID:(id)arg1 ;
-(unsigned long long)numOfImagesForEffectPresetID:(id)arg1 ;
-(BOOL)skipPanoramaScaleForEffectID:(id)arg1 ;
-(id)versionOfEffectID:(id)arg1 ;
-(id)categoryIDsForEffectID:(id)arg1 ;
-(unsigned long long)numOfTextsForEffectID:(id)arg1 ;
-(unsigned long long)numOfImagesForEffectID:(id)arg1 ;
-(id)effectIDsForCategoryID:(id)arg1 ;
-(unsigned long long)minNumOfImagesPerEffectInList:(id)arg1 ;
-(unsigned long long)maxNumOfImagesPerEffectInList:(id)arg1 ;
-(long long)numberOfSlidesForEffectID:(id)arg1 ;
-(double)mediaAspectRatioForEffectID:(id)arg1 usingAttributes:(id)arg2 atIndex:(long long)arg3 defaultAspectRatio:(double)arg4 imageAspectRatio:(double)arg5 ;
-(id)settingsUIControlDescriptionsForEffect:(id)arg1 ;
-(id)defaultStringForTextInEffectID:(id)arg1 presetID:(id)arg2 atIndex:(long long)arg3 needsNSConversion:(BOOL)arg4 ;
-(double)mediaAspectRatioForEffectID:(id)arg1 usingAttributes:(id)arg2 atIndex:(long long)arg3 defaultAspectRatio:(double)arg4 ;
-(id)mediaAspectRatiosForEffectID:(id)arg1 usingPresetID:(id)arg2 ;
-(double)mediaAspectRatioHintForEffectID:(id)arg1 usingAttributes:(id)arg2 atIndex:(long long)arg3 defaultAspectRatio:(double)arg4 ;
-(void)_loadFontsFromPath:(id)arg1 requiredFonts:(id)arg2 ;
-(BOOL)effectNeedsRandomSeedInformation:(id)arg1 ;
-(long long)numberOfSecondarySlidesForEffectID:(id)arg1 ;
-(id)defaultStringForTextInEffectID:(id)arg1 presetID:(id)arg2 atIndex:(long long)arg3 ;
-(double)mediaAspectRatioForEffectID:(id)arg1 usingPresetID:(id)arg2 atIndex:(long long)arg3 defaultAspectRatio:(double)arg4 ;
-(void)defaultDurationsForEffectID:(id)arg1 phaseInDuration:(double*)arg2 mainDuration:(double*)arg3 phaseOutDuration:(double*)arg4 ;
-(id)showTimeScriptForEffectID:(id)arg1 atSlideIndex:(long long)arg2 ;
-(double)defaultPhaseOutDurationForEffectID:(id)arg1 ;
-(id)attributesForEffectID:(id)arg1 andPresetID:(id)arg2 ;
-(double)defaultPhaseInDurationForEffectID:(id)arg1 ;
-(double)defaultMainDurationForEffectID:(id)arg1 ;
-(id)mediaAspectRatioHintsForEffectID:(id)arg1 usingPresetID:(id)arg2 defaultAspectRatio:(double)arg3 ;
-(long long)panoTypeForSlideAtIndex:(long long)arg1 inEffect:(id)arg2 forPresetID:(id)arg3 ;
-(double)minimumEffectDurationForEffectID:(id)arg1 ;
-(BOOL)useUppercaseForEffectID:(id)arg1 presetID:(id)arg2 forTextAtIndex:(long long)arg3 ;
-(BOOL)allowTextCustomizationForEffectID:(id)arg1 presetID:(id)arg2 forTextAtIndex:(long long)arg3 ;
-(double)maxFontSizeInEffectID:(id)arg1 presetID:(id)arg2 atIndex:(long long)arg3 ;
-(BOOL)effectDoesAccumulate:(id)arg1 ;
-(double)defaultPosterFrameTimeForEffectID:(id)arg1 andPresetID:(id)arg2 ;
-(BOOL)posterTimeIsStaticForEffectID:(id)arg1 andPresetID:(id)arg2 ;
-(id)imageInputInfoForEffectID:(id)arg1 ;
-(id)effectsWithNumOfImages:(unsigned long long)arg1 ;
-(id)allEffectIDs;
-(id)localizedString:(id)arg1 forEffectID:(id)arg2 ;
-(id)localizedFontsForEffectID:(id)arg1 ;
-(id)sizeScriptForEffectID:(id)arg1 atIndex:(long long)arg2 ;
-(id)localizedCategoryNameFromCategoryID:(id)arg1 ;
-(id)localizedEffectNameForEffectID:(id)arg1 ;
-(id)allCategoryIDs;
-(double)defaultPosterFrameTimeForEffect:(id)arg1 ;
-(id)localizedSettingsUITitleForTitleKey:(id)arg1 inEffect:(id)arg2 ;
-(id)controlForAttribute:(id)arg1 forEffectID:(id)arg2 ;
-(double)mediaAspectRatioForEffectID:(id)arg1 usingPresetID:(id)arg2 atIndex:(long long)arg3 ;
-(id)mediaAspectRatiosForEffectID:(id)arg1 usingPresetID:(id)arg2 defaultAspectRatio:(double)arg3 ;
-(id)presetIDsForEffectID:(id)arg1 ;
-(void)dealloc;
-(id)descriptionForEffectID:(id)arg1 ;
-(id)initWithPaths:(id)arg1 ;
@end
