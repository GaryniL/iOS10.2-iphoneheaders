/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@class SBLockScreenMesaFailureSettings;

@interface SBLockScreenMesaSettings : SBUISettings {

	BOOL _passcodeRequiredEventsCountAsFailures;
	BOOL _flashRedOnPasscodeRequiredEvents;
	BOOL _successFeedbackWaitsUntilButtonUp;
	SBLockScreenMesaFailureSettings* _firstFailureSettings;
	SBLockScreenMesaFailureSettings* _secondFailureSettings;
	SBLockScreenMesaFailureSettings* _thirdFailureSettings;
	SBLockScreenMesaFailureSettings* _fourthFailureSettings;
	SBLockScreenMesaFailureSettings* _fifthFailureSettings;
	double _slowPressDuration;

}

@property (nonatomic,retain) SBLockScreenMesaFailureSettings * firstFailureSettings;               //@synthesize firstFailureSettings=_firstFailureSettings - In the implementation block
@property (nonatomic,retain) SBLockScreenMesaFailureSettings * secondFailureSettings;              //@synthesize secondFailureSettings=_secondFailureSettings - In the implementation block
@property (nonatomic,retain) SBLockScreenMesaFailureSettings * thirdFailureSettings;               //@synthesize thirdFailureSettings=_thirdFailureSettings - In the implementation block
@property (nonatomic,retain) SBLockScreenMesaFailureSettings * fourthFailureSettings;              //@synthesize fourthFailureSettings=_fourthFailureSettings - In the implementation block
@property (nonatomic,retain) SBLockScreenMesaFailureSettings * fifthFailureSettings;               //@synthesize fifthFailureSettings=_fifthFailureSettings - In the implementation block
@property (assign,nonatomic) BOOL passcodeRequiredEventsCountAsFailures;                           //@synthesize passcodeRequiredEventsCountAsFailures=_passcodeRequiredEventsCountAsFailures - In the implementation block
@property (assign,nonatomic) BOOL flashRedOnPasscodeRequiredEvents;                                //@synthesize flashRedOnPasscodeRequiredEvents=_flashRedOnPasscodeRequiredEvents - In the implementation block
@property (assign,nonatomic) BOOL successFeedbackWaitsUntilButtonUp;                               //@synthesize successFeedbackWaitsUntilButtonUp=_successFeedbackWaitsUntilButtonUp - In the implementation block
@property (assign,nonatomic) double slowPressDuration;                                             //@synthesize slowPressDuration=_slowPressDuration - In the implementation block
+(id)settingsControllerModule;
-(double)slowPressDuration;
-(void)setSlowPressDuration:(double)arg1 ;
-(BOOL)passcodeRequiredEventsCountAsFailures;
-(BOOL)flashRedOnPasscodeRequiredEvents;
-(BOOL)successFeedbackWaitsUntilButtonUp;
-(SBLockScreenMesaFailureSettings *)firstFailureSettings;
-(SBLockScreenMesaFailureSettings *)secondFailureSettings;
-(SBLockScreenMesaFailureSettings *)thirdFailureSettings;
-(SBLockScreenMesaFailureSettings *)fourthFailureSettings;
-(SBLockScreenMesaFailureSettings *)fifthFailureSettings;
-(void)setPasscodeRequiredEventsCountAsFailures:(BOOL)arg1 ;
-(void)setFlashRedOnPasscodeRequiredEvents:(BOOL)arg1 ;
-(void)setSuccessFeedbackWaitsUntilButtonUp:(BOOL)arg1 ;
-(void)setFirstFailureSettings:(SBLockScreenMesaFailureSettings *)arg1 ;
-(void)setSecondFailureSettings:(SBLockScreenMesaFailureSettings *)arg1 ;
-(void)setThirdFailureSettings:(SBLockScreenMesaFailureSettings *)arg1 ;
-(void)setFourthFailureSettings:(SBLockScreenMesaFailureSettings *)arg1 ;
-(void)setFifthFailureSettings:(SBLockScreenMesaFailureSettings *)arg1 ;
-(void)setDefaultValues;
@end

