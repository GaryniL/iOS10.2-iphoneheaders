/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTSectionInfoListProvider <NSObject>
@property (assign,nonatomic,__weak) id<BLTSectionInfoListProviderDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<BLTSectionInfoListProviderDelegate>)delegate;
-(void)reloadWithCompletion:(/*^block*/id)arg1;

@end

