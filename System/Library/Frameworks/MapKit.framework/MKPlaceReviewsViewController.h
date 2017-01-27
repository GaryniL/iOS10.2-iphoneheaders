/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKPlaceAttributionProvider.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol MKPlaceCardReviewsControllerDelegate;
@class NSMutableDictionary, MKMapItem, NSArray, _MKPlaceViewController, ABMonogrammer, NSMutableArray, NSString;

@interface MKPlaceReviewsViewController : MKPlaceSectionViewController <MKPlaceAttributionProvider, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	NSMutableDictionary* _cachedMaskedImages;
	BOOL _hasAttribution;
	BOOL _showCheckInAndWriteReviewButtons;
	BOOL _showMoreReviewsButton;
	MKMapItem* _mapItem;
	NSArray* _userSnippets;
	id<MKPlaceCardReviewsControllerDelegate> _reviewsControllerDelegate;
	_MKPlaceViewController* _owner;
	ABMonogrammer* _monogrammer;
	NSMutableArray* _viewDidAppearBlocks;
	NSMutableArray* _cells;

}

@property (nonatomic,retain) NSArray * userSnippets;                                                                 //@synthesize userSnippets=_userSnippets - In the implementation block
@property (assign,nonatomic) BOOL hasAttribution;                                                                    //@synthesize hasAttribution=_hasAttribution - In the implementation block
@property (assign,nonatomic) BOOL showCheckInAndWriteReviewButtons;                                                  //@synthesize showCheckInAndWriteReviewButtons=_showCheckInAndWriteReviewButtons - In the implementation block
@property (assign,nonatomic) BOOL showMoreReviewsButton;                                                             //@synthesize showMoreReviewsButton=_showMoreReviewsButton - In the implementation block
@property (nonatomic,readonly) ABMonogrammer * monogrammer;                                                          //@synthesize monogrammer=_monogrammer - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewDidAppearBlocks;                                                   //@synthesize viewDidAppearBlocks=_viewDidAppearBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * cells;                                                                 //@synthesize cells=_cells - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) unsigned long long reviewsCount; 
@property (assign,nonatomic,__weak) id<MKPlaceCardReviewsControllerDelegate> reviewsControllerDelegate;              //@synthesize reviewsControllerDelegate=_reviewsControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                                  //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(_MKPlaceViewController *)owner;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(unsigned long long)reviewsCount;
-(id)reviewAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAttribution;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)infoCardChildPossibleActions;
-(void)_updateAttribution;
-(void)_performWhenViewHasAppeared:(/*^block*/id)arg1 ;
-(NSMutableArray *)viewDidAppearBlocks;
-(void)setViewDidAppearBlocks:(NSMutableArray *)arg1 ;
-(id)getAttributionDisplayString;
-(void)attributionLinkWasClicked:(id)arg1 ;
-(ABMonogrammer *)monogrammer;
-(void)_viewAllReviews;
-(void)_showReview:(id)arg1 index:(unsigned long long)arg2 ;
-(id)_sectionViewForRow:(unsigned long long)arg1 ;
-(NSArray *)userSnippets;
-(void)setUserSnippets:(NSArray *)arg1 ;
-(id<MKPlaceCardReviewsControllerDelegate>)reviewsControllerDelegate;
-(void)setReviewsControllerDelegate:(id<MKPlaceCardReviewsControllerDelegate>)arg1 ;
-(void)setHasAttribution:(BOOL)arg1 ;
-(BOOL)showCheckInAndWriteReviewButtons;
-(void)setShowCheckInAndWriteReviewButtons:(BOOL)arg1 ;
-(BOOL)showMoreReviewsButton;
-(void)setShowMoreReviewsButton:(BOOL)arg1 ;
-(NSMutableArray *)cells;
-(void)setCells:(NSMutableArray *)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)loadCells;
@end
