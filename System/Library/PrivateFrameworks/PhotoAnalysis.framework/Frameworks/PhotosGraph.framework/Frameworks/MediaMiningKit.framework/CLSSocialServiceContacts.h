/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSSocialService.h>

@class CNContactStore, CNContact, NSMutableArray, NSMutableDictionary;

@interface CLSSocialServiceContacts : CLSSocialService {

	CNContactStore* _contactStore;
	CNContact* _meContact;
	NSMutableArray* _allContacts;
	NSMutableArray* _allPersons;
	NSMutableDictionary* _personsForCNIdentifiers;
	NSMutableDictionary* _personsForPHIdentifiers;

}
+(id)defaultKeysToFetch;
-(id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2 ;
-(id)_fullNameWithContact:(id)arg1 ;
-(id)mePerson;
-(id)personsOperationForLocations:(id)arg1 inInvestigation:(id)arg2 ;
-(id)personsOperationForName:(id)arg1 inInvestigation:(id)arg2 inPhotoLibrary:(id)arg3 ;
-(id)_meRecords;
-(id)_allPersons;
-(void)enumeratePersonsForIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_mePersons;
-(id)_personWithContact:(id)arg1 createPersonIfNeeded:(BOOL)arg2 ;
-(id)_personResultsForPHPersonIdentifier:(id)arg1 isLackingFaces:(out BOOL*)arg2 inPhotoLibrary:(id)arg3 ;
-(id)_personResultsForFullName:(id)arg1 ;
-(id)_personWithContactIdentifier:(id)arg1 ;
-(id)__newPersonWithPHPerson:(id)arg1 ;
-(id)__newPersonWithContact:(id)arg1 ;
-(unsigned long long)_relationshipForContact:(id)arg1 ;
-(id)_allPersonRecords;
-(id)_fullNameForPersonRecord:(id)arg1 ;
-(id)_firstNameForPersonRecord:(id)arg1 ;
-(id)_lastNameForPersonRecord:(id)arg1 ;
-(id)_nicknameForPersonRecord:(id)arg1 ;
-(id)_maidenNameForPersonRecord:(id)arg1 ;
-(void)enumerateBirthdaysBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

