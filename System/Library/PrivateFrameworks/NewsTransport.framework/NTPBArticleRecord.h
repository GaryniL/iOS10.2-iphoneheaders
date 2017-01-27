/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NTPBRecordBase, NTPBDate, NSArray;

@interface NTPBArticleRecord : PBCodable <NSCopying> {

	struct {
		unsigned long long list;
		unsigned long long count;
		unsigned long long size;
	} * _topicFlags;
	SCD_Struct_NT19* _topicScores;
	long long _backendArticleVersion;
	long long _behaviorFlags;
	long long _minimumNewsVersion;
	long long _publisherArticleVersion;
	long long _thumbnailFocalFrame;
	long long _thumbnailHQMetadata;
	long long _thumbnailLQMetadata;
	long long _thumbnailMediumMetadata;
	long long _thumbnailMetadata;
	long long _thumbnailUltraHQMetadata;
	long long _thumbnailWidgetHQMetadata;
	long long _thumbnailWidgetLQMetadata;
	long long _thumbnailWidgetMetadata;
	double _videoDuration;
	NSString* _accessoryText;
	NSMutableArray* _allowedStorefrontIDs;
	NTPBRecordBase* _base;
	NSMutableArray* _blockedStorefrontIDs;
	NSString* _clusterID;
	int _contentType;
	NSString* _contentURL;
	NSString* _coverArt;
	NSString* _displayTopicTagID;
	NSString* _excerptURL;
	NSString* _flintDocumentURL;
	NSMutableArray* _flintFontResourceIDs;
	NSMutableArray* _iAdCategories;
	NSMutableArray* _iAdKeywords;
	NSMutableArray* _iAdSectionIDs;
	NSMutableArray* _moreFromPublisherArticleIDs;
	NSString* _primaryAudience;
	NTPBDate* _publishDate;
	NSString* _referencedArticleID;
	NSMutableArray* _relatedArticleIDs;
	NSString* _shortExcerpt;
	NSString* _sourceChannelTagID;
	int _storyType;
	NSString* _subtitle;
	NSString* _thumbnailHQURL;
	NSString* _thumbnailLQURL;
	NSString* _thumbnailMediumURL;
	NSString* _thumbnailURL;
	NSString* _thumbnailUltraHQURL;
	NSString* _thumbnailWidgetHQTaggedURL;
	NSString* _thumbnailWidgetHQURL;
	NSString* _thumbnailWidgetLQTaggedURL;
	NSString* _thumbnailWidgetLQURL;
	NSString* _thumbnailWidgetTaggedURL;
	NSString* _thumbnailWidgetURL;
	NSString* _title;
	NSMutableArray* _topicIDs;
	NSString* _videoURL;
	BOOL _isDraft;
	BOOL _isFeatureCandidate;
	BOOL _isPaid;
	BOOL _isSponsored;
	SCD_Struct_NT17 _has;

}

@property (nonatomic,readonly) NSArray * endOfArticleTopicIDs; 
@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                                     //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleID; 
@property (nonatomic,retain) NSString * referencedArticleID;                            //@synthesize referencedArticleID=_referencedArticleID - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelTagID; 
@property (nonatomic,retain) NSString * sourceChannelTagID;                             //@synthesize sourceChannelTagID=_sourceChannelTagID - In the implementation block
@property (nonatomic,readonly) BOOL hasPublishDate; 
@property (nonatomic,retain) NTPBDate * publishDate;                                    //@synthesize publishDate=_publishDate - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) long long publisherArticleVersion;                         //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) long long backendArticleVersion;                           //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIDs;                                 //@synthesize topicIDs=_topicIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long topicFlagsCount; 
@property (nonatomic,readonly) unsigned long long* topicFlags; 
@property (nonatomic,readonly) BOOL hasThumbnailLQURL; 
@property (nonatomic,retain) NSString * thumbnailLQURL;                                 //@synthesize thumbnailLQURL=_thumbnailLQURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailLQMetadata; 
@property (assign,nonatomic) long long thumbnailLQMetadata;                             //@synthesize thumbnailLQMetadata=_thumbnailLQMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryAudience; 
@property (nonatomic,retain) NSString * primaryAudience;                                //@synthesize primaryAudience=_primaryAudience - In the implementation block
@property (nonatomic,readonly) BOOL hasExcerptURL; 
@property (nonatomic,retain) NSString * excerptURL;                                     //@synthesize excerptURL=_excerptURL - In the implementation block
@property (nonatomic,readonly) BOOL hasShortExcerpt; 
@property (nonatomic,retain) NSString * shortExcerpt;                                   //@synthesize shortExcerpt=_shortExcerpt - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryText; 
@property (nonatomic,retain) NSString * accessoryText;                                  //@synthesize accessoryText=_accessoryText - In the implementation block
@property (nonatomic,readonly) BOOL hasContentURL; 
@property (nonatomic,retain) NSString * contentURL;                                     //@synthesize contentURL=_contentURL - In the implementation block
@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) int contentType;                                           //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) BOOL hasClusterID; 
@property (nonatomic,retain) NSString * clusterID;                                      //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,readonly) BOOL hasFlintDocumentURL; 
@property (nonatomic,retain) NSString * flintDocumentURL;                               //@synthesize flintDocumentURL=_flintDocumentURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * flintFontResourceIDs;                     //@synthesize flintFontResourceIDs=_flintFontResourceIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoURL; 
@property (nonatomic,retain) NSString * videoURL;                                       //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic) BOOL hasVideoDuration; 
@property (assign,nonatomic) double videoDuration;                                      //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayTopicTagID; 
@property (nonatomic,retain) NSString * displayTopicTagID;                              //@synthesize displayTopicTagID=_displayTopicTagID - In the implementation block
@property (assign,nonatomic) BOOL hasIsFeatureCandidate; 
@property (assign,nonatomic) BOOL isFeatureCandidate;                                   //@synthesize isFeatureCandidate=_isFeatureCandidate - In the implementation block
@property (assign,nonatomic) BOOL hasIsSponsored; 
@property (assign,nonatomic) BOOL isSponsored;                                          //@synthesize isSponsored=_isSponsored - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdCategories;                            //@synthesize iAdCategories=_iAdCategories - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdKeywords;                              //@synthesize iAdKeywords=_iAdKeywords - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdSectionIDs;                            //@synthesize iAdSectionIDs=_iAdSectionIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * blockedStorefrontIDs;                     //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * allowedStorefrontIDs;                     //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
@property (assign,nonatomic) BOOL hasIsDraft; 
@property (assign,nonatomic) BOOL isDraft;                                              //@synthesize isDraft=_isDraft - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedArticleIDs;                        //@synthesize relatedArticleIDs=_relatedArticleIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreFromPublisherArticleIDs;              //@synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailURL; 
@property (nonatomic,retain) NSString * thumbnailURL;                                   //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailMetadata; 
@property (assign,nonatomic) long long thumbnailMetadata;                               //@synthesize thumbnailMetadata=_thumbnailMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailFocalFrame; 
@property (assign,nonatomic) long long thumbnailFocalFrame;                             //@synthesize thumbnailFocalFrame=_thumbnailFocalFrame - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailMediumURL; 
@property (nonatomic,retain) NSString * thumbnailMediumURL;                             //@synthesize thumbnailMediumURL=_thumbnailMediumURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailMediumMetadata; 
@property (assign,nonatomic) long long thumbnailMediumMetadata;                         //@synthesize thumbnailMediumMetadata=_thumbnailMediumMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailHQURL; 
@property (nonatomic,retain) NSString * thumbnailHQURL;                                 //@synthesize thumbnailHQURL=_thumbnailHQURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailHQMetadata; 
@property (assign,nonatomic) long long thumbnailHQMetadata;                             //@synthesize thumbnailHQMetadata=_thumbnailHQMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailUltraHQURL; 
@property (nonatomic,retain) NSString * thumbnailUltraHQURL;                            //@synthesize thumbnailUltraHQURL=_thumbnailUltraHQURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailUltraHQMetadata; 
@property (assign,nonatomic) long long thumbnailUltraHQMetadata;                        //@synthesize thumbnailUltraHQMetadata=_thumbnailUltraHQMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasStoryType; 
@property (assign,nonatomic) int storyType;                                             //@synthesize storyType=_storyType - In the implementation block
@property (assign,nonatomic) BOOL hasBehaviorFlags; 
@property (assign,nonatomic) long long behaviorFlags;                                   //@synthesize behaviorFlags=_behaviorFlags - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumNewsVersion; 
@property (assign,nonatomic) long long minimumNewsVersion;                              //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasCoverArt; 
@property (nonatomic,retain) NSString * coverArt;                                       //@synthesize coverArt=_coverArt - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaid; 
@property (assign,nonatomic) BOOL isPaid;                                               //@synthesize isPaid=_isPaid - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetLQURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetLQURL;                           //@synthesize thumbnailWidgetLQURL=_thumbnailWidgetLQURL - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetLQTaggedURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetLQTaggedURL;                     //@synthesize thumbnailWidgetLQTaggedURL=_thumbnailWidgetLQTaggedURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailWidgetLQMetadata; 
@property (assign,nonatomic) long long thumbnailWidgetLQMetadata;                       //@synthesize thumbnailWidgetLQMetadata=_thumbnailWidgetLQMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetURL;                             //@synthesize thumbnailWidgetURL=_thumbnailWidgetURL - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetTaggedURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetTaggedURL;                       //@synthesize thumbnailWidgetTaggedURL=_thumbnailWidgetTaggedURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailWidgetMetadata; 
@property (assign,nonatomic) long long thumbnailWidgetMetadata;                         //@synthesize thumbnailWidgetMetadata=_thumbnailWidgetMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetHQURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetHQURL;                           //@synthesize thumbnailWidgetHQURL=_thumbnailWidgetHQURL - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetHQTaggedURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetHQTaggedURL;                     //@synthesize thumbnailWidgetHQTaggedURL=_thumbnailWidgetHQTaggedURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailWidgetHQMetadata; 
@property (assign,nonatomic) long long thumbnailWidgetHQMetadata;                       //@synthesize thumbnailWidgetHQMetadata=_thumbnailWidgetHQMetadata - In the implementation block
@property (nonatomic,readonly) unsigned long long topicScoresCount; 
@property (nonatomic,readonly) double* topicScores; 
+(Class)topicIDsType;
+(Class)flintFontResourceIDsType;
+(Class)iAdCategoriesType;
+(Class)iAdKeywordsType;
+(Class)iAdSectionIDsType;
+(Class)blockedStorefrontIDsType;
+(Class)allowedStorefrontIDsType;
+(Class)relatedArticleIDsType;
+(Class)moreFromPublisherArticleIDsType;
-(NSArray *)endOfArticleTopicIDs;
-(id)generateThumbnailAssetHandleForURL:(id)arg1 withAssetManager:(id)arg2 ;
-(id)generateFlintDocumentAssetHandleWithAssetManager:(id)arg1 ;
-(id)generateWebExcerptAssetHandleWithAssetManager:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(NTPBRecordBase *)base;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setThumbnailURL:(NSString *)arg1 ;
-(NSString *)thumbnailURL;
-(NSString *)contentURL;
-(void)setContentURL:(NSString *)arg1 ;
-(NSString *)accessoryText;
-(double)videoDuration;
-(NSString *)videoURL;
-(void)setVideoURL:(NSString *)arg1 ;
-(void)setVideoDuration:(double)arg1 ;
-(int)contentType;
-(NSString *)primaryAudience;
-(NTPBDate *)publishDate;
-(NSString *)shortExcerpt;
-(NSMutableArray *)topicIDs;
-(BOOL)isFeatureCandidate;
-(BOOL)isSponsored;
-(NSMutableArray *)iAdCategories;
-(NSMutableArray *)iAdKeywords;
-(NSMutableArray *)iAdSectionIDs;
-(NSMutableArray *)blockedStorefrontIDs;
-(NSMutableArray *)allowedStorefrontIDs;
-(BOOL)isDraft;
-(NSString *)flintDocumentURL;
-(NSString *)excerptURL;
-(int)storyType;
-(NSMutableArray *)flintFontResourceIDs;
-(NSString *)referencedArticleID;
-(NSString *)clusterID;
-(void)setContentType:(int)arg1 ;
-(void)setPublishDate:(NTPBDate *)arg1 ;
-(long long)publisherArticleVersion;
-(long long)backendArticleVersion;
-(long long)thumbnailFocalFrame;
-(void)setThumbnailFocalFrame:(long long)arg1 ;
-(void)setShortExcerpt:(NSString *)arg1 ;
-(void)setTopicIDs:(NSMutableArray *)arg1 ;
-(unsigned long long*)topicFlags;
-(NSMutableArray *)relatedArticleIDs;
-(NSMutableArray *)moreFromPublisherArticleIDs;
-(void)setStoryType:(int)arg1 ;
-(long long)minimumNewsVersion;
-(BOOL)isPaid;
-(NSString *)coverArt;
-(void)setFlintFontResourceIDs:(NSMutableArray *)arg1 ;
-(void)setSourceChannelTagID:(NSString *)arg1 ;
-(void)setPublisherArticleVersion:(long long)arg1 ;
-(void)setBackendArticleVersion:(long long)arg1 ;
-(void)addTopicScores:(double)arg1 ;
-(void)addTopicFlags:(unsigned long long)arg1 ;
-(void)setThumbnailLQMetadata:(long long)arg1 ;
-(void)setThumbnailMetadata:(long long)arg1 ;
-(void)setThumbnailMediumMetadata:(long long)arg1 ;
-(void)setThumbnailHQMetadata:(long long)arg1 ;
-(void)setThumbnailUltraHQMetadata:(long long)arg1 ;
-(void)setThumbnailWidgetLQMetadata:(long long)arg1 ;
-(void)setThumbnailWidgetMetadata:(long long)arg1 ;
-(void)setThumbnailWidgetHQMetadata:(long long)arg1 ;
-(void)setThumbnailLQURL:(NSString *)arg1 ;
-(void)setThumbnailMediumURL:(NSString *)arg1 ;
-(void)setThumbnailHQURL:(NSString *)arg1 ;
-(void)setThumbnailUltraHQURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetLQURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetHQURL:(NSString *)arg1 ;
-(void)setExcerptURL:(NSString *)arg1 ;
-(void)setAccessoryText:(NSString *)arg1 ;
-(void)setClusterID:(NSString *)arg1 ;
-(void)setFlintDocumentURL:(NSString *)arg1 ;
-(void)setIsFeatureCandidate:(BOOL)arg1 ;
-(void)setIsSponsored:(BOOL)arg1 ;
-(void)setDisplayTopicTagID:(NSString *)arg1 ;
-(void)setIAdCategories:(NSMutableArray *)arg1 ;
-(void)setIAdKeywords:(NSMutableArray *)arg1 ;
-(void)setIAdSectionIDs:(NSMutableArray *)arg1 ;
-(void)setBlockedStorefrontIDs:(NSMutableArray *)arg1 ;
-(void)setAllowedStorefrontIDs:(NSMutableArray *)arg1 ;
-(void)setIsDraft:(BOOL)arg1 ;
-(void)setPrimaryAudience:(NSString *)arg1 ;
-(void)setReferencedArticleID:(NSString *)arg1 ;
-(void)setRelatedArticleIDs:(NSMutableArray *)arg1 ;
-(void)setMoreFromPublisherArticleIDs:(NSMutableArray *)arg1 ;
-(void)setBehaviorFlags:(long long)arg1 ;
-(void)setMinimumNewsVersion:(long long)arg1 ;
-(void)setCoverArt:(NSString *)arg1 ;
-(void)setIsPaid:(BOOL)arg1 ;
-(NSString *)displayTopicTagID;
-(NSString *)sourceChannelTagID;
-(double*)topicScores;
-(long long)thumbnailLQMetadata;
-(long long)thumbnailMetadata;
-(long long)thumbnailMediumMetadata;
-(long long)thumbnailHQMetadata;
-(long long)thumbnailUltraHQMetadata;
-(long long)thumbnailWidgetLQMetadata;
-(long long)thumbnailWidgetMetadata;
-(long long)thumbnailWidgetHQMetadata;
-(NSString *)thumbnailLQURL;
-(NSString *)thumbnailMediumURL;
-(NSString *)thumbnailHQURL;
-(NSString *)thumbnailUltraHQURL;
-(NSString *)thumbnailWidgetLQURL;
-(NSString *)thumbnailWidgetURL;
-(NSString *)thumbnailWidgetHQURL;
-(unsigned long long)topicScoresCount;
-(double)topicScoresAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)topicFlagsCount;
-(unsigned long long)topicFlagsAtIndex:(unsigned long long)arg1 ;
-(long long)behaviorFlags;
-(BOOL)hasCoverArt;
-(BOOL)hasBase;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersion;
-(BOOL)hasStoryType;
-(void)addTopicIDs:(id)arg1 ;
-(BOOL)hasClusterID;
-(void)setHasMinimumNewsVersion:(BOOL)arg1 ;
-(BOOL)hasMinimumNewsVersion;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(void)clearTopicIDs;
-(unsigned long long)topicIDsCount;
-(id)topicIDsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsPaid:(BOOL)arg1 ;
-(BOOL)hasIsPaid;
-(void)setThumbnailWidgetLQTaggedURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetTaggedURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetHQTaggedURL:(NSString *)arg1 ;
-(void)addFlintFontResourceIDs:(id)arg1 ;
-(void)addIAdCategories:(id)arg1 ;
-(void)addIAdKeywords:(id)arg1 ;
-(void)addIAdSectionIDs:(id)arg1 ;
-(void)addBlockedStorefrontIDs:(id)arg1 ;
-(void)addAllowedStorefrontIDs:(id)arg1 ;
-(void)addRelatedArticleIDs:(id)arg1 ;
-(void)addMoreFromPublisherArticleIDs:(id)arg1 ;
-(BOOL)hasReferencedArticleID;
-(BOOL)hasSubtitle;
-(BOOL)hasSourceChannelTagID;
-(BOOL)hasPublishDate;
-(void)clearTopicFlags;
-(void)setTopicFlags:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasThumbnailLQURL;
-(void)setHasThumbnailLQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailLQMetadata;
-(BOOL)hasPrimaryAudience;
-(BOOL)hasExcerptURL;
-(BOOL)hasShortExcerpt;
-(BOOL)hasAccessoryText;
-(BOOL)hasContentURL;
-(BOOL)hasFlintDocumentURL;
-(void)clearFlintFontResourceIDs;
-(unsigned long long)flintFontResourceIDsCount;
-(id)flintFontResourceIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasVideoURL;
-(void)setHasVideoDuration:(BOOL)arg1 ;
-(BOOL)hasVideoDuration;
-(BOOL)hasDisplayTopicTagID;
-(void)setHasIsFeatureCandidate:(BOOL)arg1 ;
-(BOOL)hasIsFeatureCandidate;
-(void)setHasIsSponsored:(BOOL)arg1 ;
-(BOOL)hasIsSponsored;
-(void)clearIAdCategories;
-(unsigned long long)iAdCategoriesCount;
-(id)iAdCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)clearIAdKeywords;
-(unsigned long long)iAdKeywordsCount;
-(id)iAdKeywordsAtIndex:(unsigned long long)arg1 ;
-(void)clearIAdSectionIDs;
-(unsigned long long)iAdSectionIDsCount;
-(id)iAdSectionIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearBlockedStorefrontIDs;
-(unsigned long long)blockedStorefrontIDsCount;
-(id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearAllowedStorefrontIDs;
-(unsigned long long)allowedStorefrontIDsCount;
-(id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsDraft:(BOOL)arg1 ;
-(BOOL)hasIsDraft;
-(void)clearRelatedArticleIDs;
-(unsigned long long)relatedArticleIDsCount;
-(id)relatedArticleIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearMoreFromPublisherArticleIDs;
-(unsigned long long)moreFromPublisherArticleIDsCount;
-(id)moreFromPublisherArticleIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasThumbnailURL;
-(void)setHasThumbnailMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailMetadata;
-(void)setHasThumbnailFocalFrame:(BOOL)arg1 ;
-(BOOL)hasThumbnailFocalFrame;
-(BOOL)hasThumbnailMediumURL;
-(void)setHasThumbnailMediumMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailMediumMetadata;
-(BOOL)hasThumbnailHQURL;
-(void)setHasThumbnailHQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailHQMetadata;
-(BOOL)hasThumbnailUltraHQURL;
-(void)setHasThumbnailUltraHQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailUltraHQMetadata;
-(void)setHasStoryType:(BOOL)arg1 ;
-(void)setHasBehaviorFlags:(BOOL)arg1 ;
-(BOOL)hasBehaviorFlags;
-(BOOL)hasThumbnailWidgetLQURL;
-(BOOL)hasThumbnailWidgetLQTaggedURL;
-(void)setHasThumbnailWidgetLQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailWidgetLQMetadata;
-(BOOL)hasThumbnailWidgetURL;
-(BOOL)hasThumbnailWidgetTaggedURL;
-(void)setHasThumbnailWidgetMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailWidgetMetadata;
-(BOOL)hasThumbnailWidgetHQURL;
-(BOOL)hasThumbnailWidgetHQTaggedURL;
-(void)setHasThumbnailWidgetHQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailWidgetHQMetadata;
-(void)clearTopicScores;
-(void)setTopicScores:(double*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)thumbnailWidgetLQTaggedURL;
-(NSString *)thumbnailWidgetTaggedURL;
-(NSString *)thumbnailWidgetHQTaggedURL;
@end
