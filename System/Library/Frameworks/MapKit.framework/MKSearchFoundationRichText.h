/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFRichText.h>

@interface MKSearchFoundationRichText : SFRichText {

	/*^block*/id _requestUIUpdateBlock;

}

@property (nonatomic,copy) id requestUIUpdateBlock;              //@synthesize requestUIUpdateBlock=_requestUIUpdateBlock - In the implementation block
-(id)initWithString:(id)arg1 ;
-(id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2 ;
-(void)loadRichTextWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)requestUIUpdateBlock;
-(void)setRequestUIUpdateBlock:(id)arg1 ;
@end
