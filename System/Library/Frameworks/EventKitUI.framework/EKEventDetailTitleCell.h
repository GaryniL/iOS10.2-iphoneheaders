/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>
#import <libobjc.A.dylib/EKEventDetailPredictedLocationCellDelegate.h>

@protocol EKEventDetailTitleCellDelegate;
@class UILabel, EKTextViewWithLabelTextMetrics, EKEventDetailPredictedLocationCell, UIImage, UIImageView, NSMutableArray, UIButton, NSObject;

@interface EKEventDetailTitleCell : EKEventDetailCell <EKEventDetailPredictedLocationCellDelegate> {

	UILabel* _titleView;
	EKTextViewWithLabelTextMetrics* _locationView;
	EKEventDetailPredictedLocationCell* _predictedLocationView;
	UIImage* _locationStatusImage;
	UIImageView* _locationStatusView;
	UILabel* _travelTimeView;
	NSMutableArray* _dateTimeViews;
	UILabel* _recurrenceView;
	UILabel* _statusView;
	UIButton* _editButton;
	unsigned _visibleItems;
	BOOL _observingLocaleChanges;
	BOOL _hasLocationStatus;
	long long _locationStatus;
	BOOL _rejectionReasonCell;
	BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
	NSObject*<EKEventDetailTitleCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<EKEventDetailTitleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;                 //@synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification - In the implementation block
+(id)_titleFont;
+(void)_invalidateCachedFonts;
+(void)_geocodeEventIfNeeded:(id)arg1 ;
+(id)_largeTitleFont;
+(id)_locationStringForStructuredLocation:(id)arg1 ;
+(id)_mapsURLForLocationOnEvent:(id)arg1 hasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg2 ;
+(id)_locationFont;
+(void)_registerForInvalidation;
-(void)setDelegate:(NSObject*<EKEventDetailTitleCellDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(NSObject*<EKEventDetailTitleCellDelegate>)delegate;
-(void)setColor:(id)arg1 ;
-(id)_titleView;
-(BOOL)update;
-(void)setLocation:(id)arg1 ;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3 ;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2 ;
-(void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1 ;
-(void)setRecurrenceString:(id)arg1 ;
-(BOOL)_useLargeFonts;
-(id)_locationView;
-(id)_locationStatusView;
-(id)_dateTimeViewForLine:(unsigned long long)arg1 ;
-(id)_travelTimeView;
-(id)_recurrenceView;
-(id)_predictedLocationView;
-(void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2 ;
-(void)setTravelTimeString:(id)arg1 ;
-(void)setStatusString:(id)arg1 ;
-(void)editButtonTapped;
-(id)_editButton;
-(void)_saveEventWithSpan:(long long)arg1 ;
-(void)_promptForSpanWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initAsRejectionReasonCellWithEvent:(id)arg1 ;
-(void)setPrimaryTextColor:(id)arg1 ;
-(id)_statusView;
@end

