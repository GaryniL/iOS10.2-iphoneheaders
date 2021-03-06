/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMPedometerEvent : NSObject <NSSecureCoding, NSCopying> {

	NSDate* fDate;
	long long fType;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)eventStringFromType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)type;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEventDate:(id)arg1 type:(long long)arg2 ;
@end

