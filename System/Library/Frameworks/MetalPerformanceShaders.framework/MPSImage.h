/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
@class NSString;

@interface MPSImage : NSObject {

	MPSDevice* _device;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _featureChannels;
	unsigned long long _featureChannelsLayout;
	unsigned long long _numberOfImages;
	unsigned long long _textureType;
	NSString* _label;
	MPSPixelInfo _pixelInfo;
	MPSAutoTexture _texture;

}

@property (nonatomic,readonly) unsigned long long featureChannelsLayout;              //@synthesize featureChannelsLayout=_featureChannelsLayout - In the implementation block
@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long width;                              //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                             //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long featureChannels;                    //@synthesize featureChannels=_featureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfImages;                     //@synthesize numberOfImages=_numberOfImages - In the implementation block
@property (nonatomic,readonly) unsigned long long textureType; 
@property (nonatomic,readonly) unsigned long long pixelFormat; 
@property (nonatomic,readonly) unsigned long long precision; 
@property (nonatomic,readonly) unsigned long long usage; 
@property (nonatomic,readonly) unsigned long long pixelSize; 
@property (nonatomic,readonly) id<MTLTexture> texture; 
@property (copy) NSString * label;                                                    //@synthesize label=_label - In the implementation block
-(unsigned long long)featureChannelsLayout;
-(unsigned long long)featureChannels;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 ;
-(id)initWithDescriptor:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 onDevice:(id)arg4 ;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)width;
-(unsigned long long)height;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)usage;
-(unsigned long long)pixelFormat;
-(unsigned long long)textureType;
-(id<MTLTexture>)texture;
-(unsigned long long)numberOfImages;
-(id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id<MTLDevice>)device;
-(unsigned long long)precision;
-(unsigned long long)pixelSize;
@end

