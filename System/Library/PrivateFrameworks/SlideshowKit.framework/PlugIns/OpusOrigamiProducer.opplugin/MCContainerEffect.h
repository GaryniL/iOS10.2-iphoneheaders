/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCContainer.h>
#import <OpusOrigamiProducer/MCActionSupport.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSSet, NSArray;

@interface MCContainerEffect : MCContainer <MCActionSupport> {

	NSMutableArray* mSlides;
	NSMutableArray* mTexts;
	NSMutableDictionary* mActions;
	NSMutableDictionary* mEffectAttributes;
	BOOL mIsLive;
	NSString* mEffectID;

}

@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned long long countOfActions; 
@property (readonly) NSSet * slides; 
@property (readonly) NSArray * orderedSlides; 
@property (nonatomic,readonly) unsigned long long countOfSlides; 
@property (nonatomic,readonly) unsigned long long nextAvailableSlideIndex; 
@property (readonly) NSSet * texts; 
@property (readonly) NSArray * orderedTexts; 
@property (nonatomic,readonly) unsigned long long countOfTexts; 
@property (nonatomic,readonly) unsigned long long nextAvailableTextIndex; 
@property (copy) NSString * effectID; 
@property (copy) NSDictionary * effectAttributes; 
@property (assign,nonatomic) BOOL isLive; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)effectAttributeForKey:(id)arg1 ;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(unsigned long long)nextAvailableSlideIndex;
-(void)moveTextsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setEffectAttributes:(NSDictionary *)arg1 ;
-(void)initActionsWithImprints:(id)arg1 ;
-(id)addTextForAttributedString:(id)arg1 ;
-(id)addSlidesForAssets:(id)arg1 ;
-(void)moveSlidesAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)insertSlideAtIndex:(long long)arg1 ;
-(id)insertSlideForAsset:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeTextsAtIndices:(id)arg1 ;
-(id)imprintsForActions;
-(void)setIsLive:(BOOL)arg1 ;
-(void)removeAllTexts;
-(void)setEffectID:(NSString *)arg1 ;
-(unsigned long long)countOfSlides;
-(NSArray *)orderedSlides;
-(NSSet *)slides;
-(void)removeAllSlides;
-(id)addSlide;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(NSDictionary *)effectAttributes;
-(id)insertSlideForContainer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertTextsForAttributedStrings:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertTextsForAssets:(id)arg1 andKey:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)demolishActions;
-(id)addSlides:(long long)arg1 ;
-(NSSet *)texts;
-(unsigned long long)countOfTexts;
-(unsigned long long)nextAvailableTextIndex;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)insertSlidesForAssets:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)addTextsForAttributedStrings:(id)arg1 ;
-(id)addTextsForAssets:(id)arg1 andKey:(id)arg2 ;
-(void)addEffectAttributes:(id)arg1 ;
-(id)addTextForAsset:(id)arg1 andKey:(id)arg2 ;
-(id)addSlideForContainer:(id)arg1 ;
-(id)addSlideForAsset:(id)arg1 ;
-(id)insertTextForAsset:(id)arg1 andKey:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)insertTextForAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSArray *)orderedTexts;
-(BOOL)isLive;
-(NSDictionary *)actions;
-(id)actionForKey:(id)arg1 ;
-(void)removeAllActions;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(void)removeActionForKey:(id)arg1 ;
-(NSString *)effectID;
-(unsigned long long)countOfActions;
-(id)imprint;
-(id)slideAtIndex:(unsigned long long)arg1 ;
@end

