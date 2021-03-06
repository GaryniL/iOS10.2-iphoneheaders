/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface KNRecordingEvent : NSObject <NSCopying> {

	double mStartTime;

}

@property (nonatomic,readonly) double startTime; 
@property (getter=isIgnoredWhenSeeking,nonatomic,readonly) BOOL ignoredWhenSeeking; 
@property (nonatomic,readonly) BOOL canPrecedeDiscontinuity; 
-(void)saveToArchive:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithStartTime:(double)arg1 ;
-(BOOL)isIgnoredWhenSeeking;
-(BOOL)canPrecedeDiscontinuity;
-(id)recordingEventByAddingTimeOffset:(double)arg1 ;
-(id)initWithParentEventTrack:(id)arg1 archive:(const RecordingEventArchive*)arg2 unarchiver:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
@end

