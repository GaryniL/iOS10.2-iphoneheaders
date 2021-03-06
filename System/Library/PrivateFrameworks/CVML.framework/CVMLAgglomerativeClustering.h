/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVMLClustering.h>

@class NSMutableArray, NSMutableDictionary;

@interface CVMLAgglomerativeClustering : NSObject <CVMLClustering> {

	NSMutableArray* distances_map;
	BOOL _debugMode;
	NSMutableDictionary* _faceIdsMapping;

}

@property (retain) NSMutableDictionary * faceIdsMapping;              //@synthesize faceIdsMapping=_faceIdsMapping - In the implementation block
@property (assign) BOOL debugMode;                                    //@synthesize debugMode=_debugMode - In the implementation block
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id*)arg3 ;
-(id)getClustersWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3 ;
-(id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3 ;
-(BOOL)cancelClustering:(id*)arg1 ;
-(void)setDebugMode:(BOOL)arg1 ;
-(BOOL)debugMode;
-(BOOL)addFaceIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id*)arg3 ;
-(void)_addFaceId:(id)arg1 withSimilarityMatrix:(id)arg2 ;
-(NSMutableDictionary *)faceIdsMapping;
-(void)setFaceIdsMapping:(NSMutableDictionary *)arg1 ;
@end

