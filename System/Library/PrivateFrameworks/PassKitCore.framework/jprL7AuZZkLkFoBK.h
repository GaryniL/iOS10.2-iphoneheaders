/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSSet;

@interface jprL7AuZZkLkFoBK : NSObject {

	NSData* _nonce;
	NSData* _hostChallenge;
	NSData* _challengeResponse;
	NSString* _seid;
	NSSet* _identities;
	NSString* _phoneNumber;
	NSString* _FPANSuffix;

}

@property (nonatomic,retain) NSData * nonce;                          //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,retain) NSData * hostChallenge;                  //@synthesize hostChallenge=_hostChallenge - In the implementation block
@property (nonatomic,retain) NSData * challengeResponse;              //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,retain) NSString * seid;                         //@synthesize seid=_seid - In the implementation block
@property (nonatomic,retain) NSSet * identities;                      //@synthesize identities=_identities - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                  //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * FPANSuffix;                   //@synthesize FPANSuffix=_FPANSuffix - In the implementation block
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setChallengeResponse:(NSData *)arg1 ;
-(id)initWithNonce:(id)arg1 hostChallenge:(id)arg2 challengeResponse:(id)arg3 seid:(id)arg4 ;
-(void)setIdentities:(NSSet *)arg1 ;
-(NSData *)hostChallenge;
-(NSString *)seid;
-(id)initWithNonce:(id)arg1 ;
-(void)setHostChallenge:(NSData *)arg1 ;
-(void)setSeid:(NSString *)arg1 ;
-(NSSet *)identities;
-(NSString *)FPANSuffix;
-(void)setFPANSuffix:(NSString *)arg1 ;
-(NSData *)challengeResponse;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
@end
