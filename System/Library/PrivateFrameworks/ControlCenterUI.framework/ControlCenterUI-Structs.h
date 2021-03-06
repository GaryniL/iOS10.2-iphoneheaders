/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct BKSDisplayBrightnessTransaction* BKSDisplayBrightnessTransactionRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	int hour;
	int minute;
} SCD_Struct_CC4;

typedef struct {
	SCD_Struct_CC4 fromTime;
	SCD_Struct_CC4 toTime;
} SCD_Struct_CC5;

typedef struct {
	BOOL active;
	BOOL enabled;
	BOOL sunSchedulePermitted;
	int mode;
	SCD_Struct_CC5 schedule;
	unsigned long long disableFlags;
} SCD_Struct_CC6;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	int field4;
	SCD_Struct_CC5 field5;
	unsigned long long field6;
} SCD_Struct_CC7;

