/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardViewControllerBase.h>

@protocol SBLockScreenTimerViewControllerDelegate;
@class NSTimer, NSDate;

@interface SBLockScreenTimerViewController : SBDashBoardViewControllerBase {

	BOOL _enabled;
	NSTimer* _updateTimer;
	NSDate* _endDate;
	id<SBLockScreenTimerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenTimerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                            //@synthesize enabled=_enabled - In the implementation block
-(void)_handleClockNotificationUpdate:(id)arg1 ;
-(void)_pendingNotificationRequestsDidChange:(id)arg1 ;
-(void)_stopTimerNotifyingDelegate:(BOOL)arg1 ;
-(BOOL)isEndDateValid;
-(void)_updateTimerLabelView;
-(void)_scheduledTimerDidChange:(id)arg1 ;
-(BOOL)isTimerActive;
-(void)setDelegate:(id<SBLockScreenTimerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBLockScreenTimerViewControllerDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)setEndDate:(id)arg1 ;
-(id)timerView;
-(void)_updateTimerFired;
@end

