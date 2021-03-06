/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface VKMapViewOutputManager : NSObject {

	NSMutableArray* _outputQueue;

}

@property (nonatomic,retain) NSMutableArray * outputQueue;              //@synthesize outputQueue=_outputQueue - In the implementation block
+(id)sharedOutputManager;
-(unsigned long long)outputQueueCount;
-(void)clearOutputQueue;
-(void)_handleAccessibilityAnnouncementDidFinish:(id)arg1 ;
-(NSMutableArray *)outputQueue;
-(void)queueOutput:(id)arg1 ;
-(void)setOutputQueue:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
@end

