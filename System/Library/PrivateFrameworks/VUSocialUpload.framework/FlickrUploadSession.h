/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FlickrRemoteSessionProtocol;
@interface FlickrUploadSession : NSObject {

	id<FlickrRemoteSessionProtocol> _remoteSession;

}
+(id)sharedSession;
-(id)init;
-(BOOL)uploadPosts:(id)arg1 error:(id*)arg2 ;
@end

