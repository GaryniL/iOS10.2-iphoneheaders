/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _IDSDataChannelLinkContext : NSObject {

	char _linkID;
	unsigned char _flags;
	unsigned char _networkType;
	long long _connectionType;
	unsigned long long _RATType;
	unsigned short _maxMTU;
	unsigned char _remoteNetworkType;
	long long _remoteConnectionType;
	unsigned long long _remoteRATType;
	unsigned _maxBitrate;

}
-(id)description;
@end

