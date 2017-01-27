/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class GCController, GCControllerDirectionPad, GCControllerButtonInput;

@interface GCMicroGamepad : NSObject {

	BOOL _allowsRotation;
	BOOL _reportsAbsoluteDpadValues;

}

@property (nonatomic,__weak,readonly) GCController * controller; 
@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,retain,readonly) GCControllerDirectionPad * dpad; 
@property (nonatomic,retain,readonly) GCControllerButtonInput * buttonA; 
@property (nonatomic,retain,readonly) GCControllerButtonInput * buttonX; 
@property (assign,nonatomic) BOOL reportsAbsoluteDpadValues;                          //@synthesize reportsAbsoluteDpadValues=_reportsAbsoluteDpadValues - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation;                                     //@synthesize allowsRotation=_allowsRotation - In the implementation block
+(BOOL)supportsUSBInterfaceProtocol:(unsigned char)arg1 ;
-(id)saveSnapshot;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(BOOL)allowsRotation;
-(GCController *)controller;
-(GCControllerButtonInput *)buttonA;
-(GCControllerButtonInput *)buttonX;
-(id)buttonB;
-(id)initWithController:(id)arg1 ;
-(GCControllerDirectionPad *)dpad;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(void)setButton:(id)arg1 value:(double)arg2 ;
-(id)button0;
-(id)button1;
-(id)inputForElement:(IOHIDElementRef)arg1 ;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)setButton:(id)arg1 pressed:(BOOL)arg2 ;
-(BOOL)reportsAbsoluteDpadValues;
-(void)setReportsAbsoluteDpadValues:(BOOL)arg1 ;
@end
