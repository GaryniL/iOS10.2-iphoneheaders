/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBPressSequenceSettings;

@interface SBPressSequenceValidator : NSObject {

	SBPressSequenceSettings* _settings;

}

@property (nonatomic,readonly) SBPressSequenceSettings * settings;              //@synthesize settings=_settings - In the implementation block
-(BOOL)pressEventIsValidInSequence:(id)arg1 endingDownEvent:(BOOL)arg2 duration:(double)arg3 ;
-(double)timeUntilNextPressEventIsInValidInSequence:(id)arg1 lastPressEventInSequenceIsDown:(BOOL)arg2 ;
-(SBPressSequenceValidatorBounds)_pressDownBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2 ;
-(SBPressSequenceValidatorBounds)_pressUpBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2 ;
-(long long)_modeForDesiredIndex:(unsigned long long)arg1 isDownEvent:(BOOL)arg2 ;
-(id)init;
-(SBPressSequenceSettings *)settings;
-(id)initWithSettings:(id)arg1 ;
@end
