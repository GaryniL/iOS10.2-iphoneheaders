/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABChangeStoreRowInfo : NSObject {

	int _consumedSequenceNumber;
	NSString* _clientIdentifier;

}

@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) int consumedSequenceNumber;               //@synthesize consumedSequenceNumber=_consumedSequenceNumber - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(int)consumedSequenceNumber;
-(void)setConsumedSequenceNumber:(int)arg1 ;
-(NSString *)clientIdentifier;
@end

