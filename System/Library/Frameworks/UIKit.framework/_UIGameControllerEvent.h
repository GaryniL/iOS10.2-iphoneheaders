/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIEvent.h>

@interface _UIGameControllerEvent : UIEvent {

	SCD_Struct_UI103 _previousState;
	unsigned long long _activeComponent;

}
-(long long)type;
-(void)_reset;
-(void)_maybeConvertAndSendAsPressesEvent;
-(long long)subtype;
-(void)_sendEventToResponder:(id)arg1 ;
-(BOOL)_processStandardButtons:(SCD_Struct_UI103*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_determineInputTypeAndProcess:(SCD_Struct_UI103*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processDPad:(SCD_Struct_UI103*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processLeftStick:(SCD_Struct_UI103*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processRightStick:(SCD_Struct_UI103*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processShoulder:(SCD_Struct_UI103*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(CGPoint)_leftStickPosition;
@end

