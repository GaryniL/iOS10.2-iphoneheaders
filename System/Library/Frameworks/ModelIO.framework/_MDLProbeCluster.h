/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _MDLProbeCluster : NSObject {

	NSMutableSet* _probes;
	 _centroid;

}

@property (assign)  centroid;                          //@synthesize centroid=_centroid - In the implementation block
@property (retain) NSMutableSet * probes;              //@synthesize probes=_probes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-()centroid;
-(void)setCentroid:;
-(BOOL)isEqualToCluster:(id)arg1 ;
-(void)calculateCentroidNotIncludingSamplesinArray:(id)arg1 ;
-(void)setProbes:(NSMutableSet *)arg1 ;
-(NSMutableSet *)probes;
@end
