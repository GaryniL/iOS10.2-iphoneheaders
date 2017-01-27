/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <libobjc.A.dylib/VKOverlayContainerDelegate.h>
#import <libobjc.A.dylib/VKLabelModelDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/VKPolylineOverlayRouteRibbonObserver.h>
#import <libobjc.A.dylib/GEOExperimentConfigurationObserver.h>
#import <libobjc.A.dylib/VKTileProviderClient.h>
#import <libobjc.A.dylib/VKPolylineGroupOverlayObserver.h>

@protocol VKMapModelDelegate, GEORoutePreloadSession, VKMapModeObserver;
@class GEOResourceManifestConfiguration, NSLocale, VKTileProvider, VKTrafficTileSource, VKRasterOverlayTileSource, VKGroundMapModel, VKGridModel, VKSkyModel, VKLabelModel, VKRasterMapModel, VKHybridRasterMapModel, VKRiverMapModel, VKPolygonMapModel, VKRoadMapModel, VKRoadTrafficMapModel, VKBuildingFootprintMapModel, VKAnnotationModel, VKOverlayContainerModel, VKRasterOverlayMapModel, VKDebugModel, VKCoastlineMapModel, NSMapTable, NSMutableArray, VKSceneConfiguration, VKMapRasterizer, NSMutableSet, VKTransitLineMapModel, VKSelectedTransitLineMapModel, VKTimedAnimation, VKPolylineOverlay, VKMercatorTerrainHeightCache, NSArray, NSSet, VKPolylineOverlayPainter, NSString;

@interface VKMapModel : VKModelObject <VKOverlayContainerDelegate, VKLabelModelDelegate, GEOResourceManifestTileGroupObserver, VKPolylineOverlayRouteRibbonObserver, GEOExperimentConfigurationObserver, VKTileProviderClient, VKPolylineGroupOverlayObserver> {

	unsigned long long _mapPurpose;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	long long _tileSize;
	VKTileProvider* _tileProvider;
	VKTileProvider* _buildingTileProvider;
	VKTileProvider* _additionalManifestTileProvider;
	VKTileProvider* _rasterOverlayProvider[2];
	BOOL _activeMapLayers[34];
	VKTrafficTileSource* _trafficSource;
	GEOResourceManifestConfiguration* _additionalManifestConfiguration;
	long long _mapMode;
	long long _desiredMapMode;
	BOOL _transitioningToNav;
	BOOL _isTransitioningToTransit;
	VKRasterOverlayTileSource* _rasterOverlayTileSource[2];
	VKGroundMapModel* _groundCoverModel;
	VKGridModel* _gridModel;
	VKSkyModel* _skyModel;
	VKLabelModel* _labelModel;
	VKRasterMapModel* _rasterModel;
	VKHybridRasterMapModel* _hybridRasterModel;
	VKRasterMapModel* _standardRasterModel;
	VKRiverMapModel* _riverLineModel;
	VKPolygonMapModel* _polygonModel;
	VKPolygonMapModel* _navPolygonModel;
	VKRoadMapModel* _roadModel;
	VKRoadMapModel* _hybridRoadModel;
	VKRoadTrafficMapModel* _roadTrafficModel;
	VKBuildingFootprintMapModel* _buildingFootprintModel;
	VKAnnotationModel* _annotationModel;
	VKOverlayContainerModel* _overlayContainerModel;
	VKRasterOverlayMapModel* _rasterOverlayModel[2];
	VKDebugModel* _debugModel;
	VKCoastlineMapModel* _coastlineModel;
	NSMapTable* _tileSources;
	NSMutableArray* _drawOrder;
	NSMutableArray* _mapLayerSubmodels;
	NSMutableArray* _mapTileSubmodels;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _activeStyleManager;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _defaultStyleManager;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _hybridStyleManager;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _satelliteStyleManager;
	shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >* _sceneManager;
	VKSceneConfiguration* _sceneConfiguration;
	double _zoomLevel;
	long long _mapType;
	id<VKMapModelDelegate> _delegate;
	id<GEORoutePreloadSession> _routePreloadSession;
	BOOL _buildingsAreVisible;
	BOOL _showsBuildings;
	BOOL _fullyDrawn;
	BOOL _shouldNotifyFullyDrawn;
	BOOL _hasFailedTile;
	BOOL _trafficEnabled;
	BOOL _trafficIncidentsEnabled;
	BOOL _shouldRasterize;
	long long _loadingCount;
	double _contentScale;
	unsigned char _targetDisplay;
	VehicleState _vehicleState;
	unsigned char _applicationUILayout;
	double _lodBias;
	BOOL _disableRoads;
	BOOL _disableLabels;
	BOOL _disablePolygons;
	BOOL _disableBuildingFootprints;
	BOOL _disableRasters;
	BOOL _disableGrid;
	Matrix<float, 4, 1> _clearColor;
	VKMapRasterizer* _rasterizer;
	VKRasterMapModel* _rasterViewer;
	int _annotationMarkerStyle;
	BOOL _limitingNavCameraHeight;
	NSMutableSet* _blockingStylesheetObservers;
	double _styleTransitionProgress;
	NSMutableArray* _externalAnchors;
	double _forcedMaxZoomLevel;
	VKTransitLineMapModel* _transitLineModel;
	VKSelectedTransitLineMapModel* _selectedTransitLineModel;
	BOOL _disableTransitLines;
	VKTimedAnimation* _modeTransitionAnimation;
	BOOL _disableRoadClass[9];
	id<VKMapModeObserver> _mapModeObserver;
	unique_ptr<md::TrafficSharedResources, std::__1::default_delete<md::TrafficSharedResources> >* _trafficSharedResources;
	shared_ptr<md::DataOverrideManager>* _dataOverrideManager;
	float _navigationPuckSize;
	ClearItem _clearItem;
	FeatureAttributeSet* _mapFeatureStyleAttributes;
	shared_ptr<gss::StylesheetQuery<gss::PropertyID> >* _styleQuery;
	int _metroArea;
	BOOL _forceMapDrawStyleUpdate;
	NSMutableSet* _polylineOverlays;
	VKPolylineOverlay* _selectedPolyline;
	VKTimedAnimation* _highZoomTransitionAnimation;
	float _navMapModeTransitionZ;

}

@property (nonatomic,retain) GEOResourceManifestConfiguration * additionalManifestConfiguration;                   //@synthesize additionalManifestConfiguration=_additionalManifestConfiguration - In the implementation block
@property (nonatomic,readonly) GEOResourceManifestConfiguration * manifestConfiguration;                           //@synthesize manifestConfiguration=_manifestConfiguration - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StylesheetManager<gss::PropertyID> >* styleManager;                   //@synthesize activeStyleManager=_activeStyleManager - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >* sceneManager;              //@synthesize sceneManager=_sceneManager - In the implementation block
@property (nonatomic,readonly) VKSceneConfiguration * sceneConfiguration; 
@property (assign,nonatomic) long long mapType;                                                                    //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadFallbackTiles; 
@property (assign,nonatomic) unsigned long long neighborMode; 
@property (assign,nonatomic) long long shieldSize; 
@property (assign,nonatomic) long long navigationShieldSize; 
@property (assign,nonatomic) long long shieldIdiom; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings;                                                                  //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) double lodBias; 
@property (nonatomic,readonly) const TrafficSharedResources* trafficResources; 
@property (assign,nonatomic) float navMapModeTransitionZ;                                                          //@synthesize navMapModeTransitionZ=_navMapModeTransitionZ - In the implementation block
@property (nonatomic,readonly) float currentRoadSignOffset; 
@property (nonatomic,readonly) BOOL showingTrafficCasing; 
@property (nonatomic,readonly) long long currentMapMode;                                                           //@synthesize mapMode=_mapMode - In the implementation block
@property (assign,nonatomic) BOOL limitingNavCameraHeight;                                                         //@synthesize limitingNavCameraHeight=_limitingNavCameraHeight - In the implementation block
@property (nonatomic,readonly) VKMercatorTerrainHeightCache * terrainHeightCache; 
@property (assign,getter=isTrafficEnabled,nonatomic) BOOL trafficEnabled;                                          //@synthesize trafficEnabled=_trafficEnabled - In the implementation block
@property (assign,getter=isTrafficIncidentsEnabled,nonatomic) BOOL trafficIncidentsEnabled;                        //@synthesize trafficIncidentsEnabled=_trafficIncidentsEnabled - In the implementation block
@property (assign,nonatomic) BOOL localizeLabels; 
@property (assign,nonatomic) unsigned char labelScaleFactor; 
@property (assign,nonatomic) double contentScale;                                                                  //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) unsigned char targetDisplay; 
@property (assign,nonatomic) VehicleState vehicleState; 
@property (assign,nonatomic) unsigned char applicationUILayout; 
@property (assign,nonatomic) id<VKMapModelDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) VKBuildingFootprintMapModel * buildingFootprintModel;                               //@synthesize buildingFootprintModel=_buildingFootprintModel - In the implementation block
@property (nonatomic,readonly) BOOL buildingsAreVisible;                                                           //@synthesize buildingsAreVisible=_buildingsAreVisible - In the implementation block
@property (nonatomic,readonly) BOOL isFullyDrawn; 
@property (nonatomic,readonly) VKTileProvider * tileProvider; 
@property (nonatomic,readonly) shared_ptr<md::LabelMarker>* selectedLabelMarker; 
@property (assign,nonatomic) BOOL labelMarkerSelectionEnabled; 
@property (assign,nonatomic) PolylineCoordinate routeUserOffset; 
@property (nonatomic,retain) NSArray * externalTrafficIncidents; 
@property (nonatomic,retain) NSArray * customFeatureDataSources; 
@property (nonatomic,readonly) NSArray * overlays; 
@property (nonatomic,readonly) NSSet * persistentOverlays; 
@property (nonatomic,readonly) NSArray * rasterOverlays; 
@property (nonatomic,retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter; 
@property (assign,nonatomic) BOOL disableRoads;                                                                    //@synthesize disableRoads=_disableRoads - In the implementation block
@property (assign,nonatomic) BOOL disableLabels;                                                                   //@synthesize disableLabels=_disableLabels - In the implementation block
@property (assign,nonatomic) BOOL disablePolygons;                                                                 //@synthesize disablePolygons=_disablePolygons - In the implementation block
@property (assign,nonatomic) BOOL disableBuildingFootprints;                                                       //@synthesize disableBuildingFootprints=_disableBuildingFootprints - In the implementation block
@property (assign,nonatomic) BOOL disableRasters;                                                                  //@synthesize disableRasters=_disableRasters - In the implementation block
@property (assign,nonatomic) BOOL disableGrid;                                                                     //@synthesize disableGrid=_disableGrid - In the implementation block
@property (assign,nonatomic) Matrix<float clearColor;                                                              //@synthesize clearColor=_clearColor - In the implementation block
@property (nonatomic,retain) id<GEORoutePreloadSession> routePreloadSession; 
@property (assign,nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (assign,nonatomic) float navigationPuckSize;                                                             //@synthesize navigationPuckSize=_navigationPuckSize - In the implementation block
@property (nonatomic,readonly) BOOL shouldRasterize;                                                               //@synthesize shouldRasterize=_shouldRasterize - In the implementation block
@property (assign,nonatomic) BOOL disableTransitLines;                                                             //@synthesize disableTransitLines=_disableTransitLines - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const char*)nameForRoadClass:(int)arg1 ;
+(unsigned long long)numberOfRoadClasses;
-(Matrix<float)clearColor;
-(void)setDelegate:(id<VKMapModelDelegate>)arg1 ;
-(void)dealloc;
-(id<VKMapModelDelegate>)delegate;
-(BOOL)shouldRasterize;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(long long)tileSize;
-(void)setContentScale:(double)arg1 ;
-(double)contentScale;
-(void)_forceLayout;
-(GEOResourceManifestConfiguration *)manifestConfiguration;
-(void)experimentConfigurationDidChange:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)_localeChanged:(id)arg1 ;
-(long long)mapType;
-(void)setMapType:(long long)arg1 ;
-(NSArray *)visibleTileSets;
-(id)detailedDescription;
-(id)detailedDescriptionDictionaryRepresentation;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(void)setSceneManager:(shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >*)arg1 ;
-(void)setStyleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg1 ;
-(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)styleManager;
-(void)reloadStylesheet;
-(VehicleState)vehicleState;
-(void)setApplicationUILayout:(unsigned char)arg1 ;
-(unsigned char)applicationUILayout;
-(unsigned char)labelScaleFactor;
-(void)clearScene;
-(shared_ptr<md::LabelFeatureMarker>*)closestRoadMarkerForSelectionAtPoint:(CGPoint)arg1 ;
-(BOOL)shouldLoadFallbackTiles;
-(long long)navigationShieldSize;
-(void)setNavigationShieldSize:(long long)arg1 ;
-(long long)shieldIdiom;
-(void)setShieldIdiom:(long long)arg1 ;
-(void)setDesiredMapMode:(long long)arg1 immediate:(BOOL)arg2 ;
-(double)_styleTransitionProgress;
-(void)setRoutePreloadSession:(id<GEORoutePreloadSession>)arg1 ;
-(id<GEORoutePreloadSession>)routePreloadSession;
-(NSArray *)externalTrafficIncidents;
-(void)setExternalTrafficIncidents:(NSArray *)arg1 ;
-(shared_ptr<md::LabelMarker>*)labelMarkerForCustomFeatureAnnotation:(id)arg1 dataSource:(id)arg2 ;
-(void)setDisableTransitLines:(BOOL)arg1 ;
-(id)annotationMarkers;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(void)setCurrentLocationText:(id)arg1 ;
-(VKPolylineOverlayPainter *)focusedLabelsPolylinePainter;
-(void)setFocusedLabelsPolylinePainter:(VKPolylineOverlayPainter *)arg1 ;
-(void)setDisableRoads:(BOOL)arg1 ;
-(void)setDisableLabels:(BOOL)arg1 ;
-(void)setDisablePolygons:(BOOL)arg1 ;
-(void)setDisableBuildingFootprints:(BOOL)arg1 ;
-(void)setDisableRasters:(BOOL)arg1 ;
-(void)setDisableGrid:(BOOL)arg1 ;
-(BOOL)isFullyDrawn;
-(BOOL)disableGrid;
-(BOOL)disableRasters;
-(BOOL)disableBuildingFootprints;
-(BOOL)disablePolygons;
-(BOOL)disableLabels;
-(BOOL)disableRoads;
-(BOOL)isRoadClassDisabled:(int)arg1 ;
-(void)forceMapType:(long long)arg1 animated:(BOOL)arg2 ;
-(void)disableRoadClass:(BOOL)arg1 withRoadClass:(int)arg2 ;
-(id)boundsForSelectedTransitLines;
-(BOOL)disableTransitLines;
-(id)externalAnchors;
-(void)endStyleAnimationGroup;
-(void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(DisplayStyle)arg2 setupHandler:(/*^block*/id)arg3 ;
-(void)stylesheetAnimationDidEnd:(BOOL)arg1 ;
-(void)finishStyleBlend;
-(void)stylesheetAnimationDidProgress:(float)arg1 ;
-(void)beginStyleAnimationGroup;
-(DisplayStyle)sourceMapDisplayStyle;
-(void)resetTileContainers;
-(void)performStylesheetDidChange;
-(id<VKRouteMatchedAnnotationPresentation>)routeLineSplitAnnotation;
-(NSArray *)rasterOverlays;
-(NSSet *)persistentOverlays;
-(void)setCustomFeatureDataSources:(NSArray *)arg1 ;
-(NSArray *)customFeatureDataSources;
-(PolylineCoordinate)routeUserOffset;
-(BOOL)labelMarkerSelectionEnabled;
-(void)didBeginTransitionToTransit;
-(void)debugHighlightObjectAtPoint:(CGPoint)arg1 highlightTarget:(unsigned char)arg2 ;
-(void)cancelTileRequests;
-(void)debugHighlightFeatureMarker:(const shared_ptr<md::FeatureMarker>*)arg1 ;
-(long long)currentMapMode;
-(vector<std::__1::shared_ptr<md::LabelFeatureMarker>, std::__1::allocator<std::__1::shared_ptr<md::LabelFeatureMarker> > >*)roadMarkersForSelectionAtPoint:(CGPoint)arg1 ;
-(void)stylesheetAnimationWillStartFromStyle:(DisplayStyle)arg1 toStyle:(DisplayStyle)arg2 ;
-(void)setStylesheetMapDisplayStyle:(DisplayStyle)arg1 ;
-(BOOL)supportsMapDisplayStyle:(DisplayStyle)arg1 ;
-(void)didBeginTransitionToNavigation;
-(shared_ptr<md::FeatureMarker>*)featureMarkerAtScreenPoint:(CGPoint)arg1 groundPoint:(Matrix<double, 3, 1>)arg2 ;
-(shared_ptr<md::FeatureMarker>*)buildingMarkerAtScreenPoint:(CGPoint)arg1 groundPoint:(Matrix<double, 3, 1>)arg2 ;
-(void)setLimitingNavCameraHeight:(BOOL)arg1 ;
-(void)sizeDidChange:(CGSize)arg1 ;
-(void)layoutScene:(id)arg1 withContext:(LayoutContext*)arg2 ;
-(double)northYawAtZoom:(int)arg1 ;
-(void)flushCaches:(BOOL)arg1 ;
-(VKMercatorTerrainHeightCache *)terrainHeightCache;
-(void)addSubmodel:(id)arg1 ;
-(id)initWithTarget:(id)arg1 purpose:(unsigned long long)arg2 manifestConfiguration:(id)arg3 locale:(id)arg4 ;
-(void)setNeighborMode:(unsigned long long)arg1 ;
-(unsigned long long)neighborMode;
-(BOOL)isTrafficIncidentsEnabled;
-(BOOL)isTrafficEnabled;
-(void)gglLayoutScene:(id)arg1 withContext:(LayoutContext*)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2 ;
-(void)tileProviderNeedsUpdate:(id)arg1 ;
-(void)willStartLoadingTiles;
-(void)didStopLoadingTilesWithError:(id)arg1 ;
-(void)polylineOverlay:(id)arg1 didUpdateRouteRibbon:(id)arg2 ;
-(id)labelModel:(id)arg1 mapTileForTile:(id)arg2 layer:(unsigned long long)arg3 ;
-(void)labelModel:(id)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr<md::LabelMarker>*)arg2 ;
-(void)labelModel:(id)arg1 selectedLabelMarkerDidChangeState:(const shared_ptr<md::LabelMarker>*)arg2 ;
-(void)labelModelDidLayoutLabels:(id)arg1 ;
-(id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2 ;
-(id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2 ;
-(BOOL)overlayContainerIsInNavigationMode:(id)arg1 ;
-(BOOL)overlayContainerIsInTransitMode:(id)arg1 ;
-(void)overlayContainer:(id)arg1 showingOuterHaloOnLabelsDidChange:(BOOL)arg2 ;
-(const TrafficSharedResources*)trafficResources;
-(void)foreachActiveLayer:(/*^block*/id)arg1 ;
-(VKTileProvider *)tileProvider;
-(float)ppi;
-(int)tileStyleForMapLayer:(unsigned long long)arg1 ;
-(BOOL)canPitch;
-(id)createSourceForLayer:(unsigned long long)arg1 tileSet:(id)arg2 useAdditionalManifest:(BOOL)arg3 ;
-(id)tileSetForMapLayer:(unsigned long long)arg1 tileGroup:(id)arg2 ;
-(BOOL)_modelIsActive:(id)arg1 ;
-(void)_activateModel:(id)arg1 ;
-(void)_deactivateModel:(id)arg1 ;
-(void)clearTileSources;
-(id)tileProviderForMapLayer:(unsigned long long)arg1 ;
-(void)configureTileSources;
-(id)createSourceForLayer:(unsigned long long)arg1 useAdditionalManifest:(BOOL)arg2 ;
-(BOOL)showingTrafficCasing;
-(void)_transitFadeOutCompletionCallback;
-(void)updateOverlayType;
-(void)startStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(DisplayStyle)arg2 ;
-(void)didEndNavigation;
-(void)didEndTransitionToTransit;
-(void)_updateRegularTileProviderMode;
-(void)_mapConfigurationDidChange;
-(float)_tileSelectionScaleForContext:(LayoutContext*)arg1 ;
-(void)_setStyleManagerFromMapType:(long long)arg1 ;
-(void)performStylesheetWillTransitionToDisplayStyle:(DisplayStyle)arg1 ;
-(void)performStylesheetTransitionDidProgress;
-(void)performStylesheetDoneChanging;
-(void)performStylesheetDidReload;
-(void)setStyleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg1 forRealistic:(BOOL)arg2 ;
-(double)lodBias;
-(void)setLodBias:(double)arg1 ;
-(void)createTrafficTileSourceIfNecessary:(id)arg1 ;
-(void)shouldFlushCaches:(id)arg1 ;
-(long long)minimumZoomLevelInView:(id)arg1 ;
-(long long)maximumZoomLevelInView:(id)arg1 ;
-(double)maxTileHeightAtPoint:(Mercator2<double>)arg1 ;
-(void)_updateZoomLevel:(LayoutContext*)arg1 ;
-(void)_beginNavMapModeTransitionToMode:(unsigned char)arg1 ;
-(void)_transitionFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)updateMapDrawStyleWithContext:(LayoutContext*)arg1 ;
-(void)updateRasterOverlayProviders:(id)arg1 withContext:(LayoutContext*)arg2 ;
-(void)setClearColor:(Matrix<float)arg1 ;
-(void)reserveStencilRangesForScene:(id)arg1 context:(LayoutContext*)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)buildingsDidBecome3D:(BOOL)arg1 ;
-(shared_ptr<md::LabelFeatureMarker>*)roadMarkerForSelectionAtPoint:(CGPoint)arg1 ;
-(id)_rasterOverlayTileSourceForLevel:(unsigned long long)arg1 ;
-(void)_updateTileExclusionAreas;
-(void)_updateRasterOverlayZoomOverride;
-(void)_updateOverlayTileSource;
-(void)setNavCameraIsDetached:(BOOL)arg1 ;
-(void)setNavigationPuckSize:(float)arg1 ;
-(id)labelDebugString;
-(float)currentRoadSignOffset;
-(VKBuildingFootprintMapModel *)buildingFootprintModel;
-(shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >*)sceneManager;
-(BOOL)buildingsAreVisible;
-(float)navigationPuckSize;
-(BOOL)limitingNavCameraHeight;
-(float)navMapModeTransitionZ;
-(void)setNavMapModeTransitionZ:(float)arg1 ;
-(id)labelModel;
-(id)gridModel;
-(id)skyModel;
-(id)rasterModel;
-(id)hybridRasterModel;
-(id)riverLineModel;
-(id)polygonModel;
-(id)roadModel;
-(id)hybridRoadModel;
-(id)roadTrafficModel;
-(id)annotationModel;
-(id)overlayContainerModel;
-(id)debugModel;
-(id)transitModel;
-(BOOL)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(BOOL)showsBuildings;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(BOOL)isShowingNoDataPlaceholders;
-(void)setVehicleState:(VehicleState)arg1 ;
-(VKSceneConfiguration *)sceneConfiguration;
-(void)deselectLabelMarker;
-(void)selectLabelMarker:(const shared_ptr<md::LabelMarker>*)arg1 ;
-(void)removeAnnotationMarker:(id)arg1 ;
-(void)removeExternalAnchor:(id)arg1 ;
-(void)addAnnotationMarker:(id)arg1 ;
-(void)addExternalAnchor:(id)arg1 ;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)addPersistentOverlay:(id)arg1 ;
-(void)setApplicationState:(unsigned char)arg1 ;
-(shared_ptr<md::LabelMarker>*)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2 ;
-(shared_ptr<md::LabelMarker>*)selectedLabelMarker;
-(void)setLabelMarkerSelectionEnabled:(BOOL)arg1 ;
-(vector<std::__1::shared_ptr<md::LabelMarker>, std::__1::allocator<std::__1::shared_ptr<md::LabelMarker> > >*)labelMarkers;
-(void)setShouldLoadFallbackTiles:(BOOL)arg1 ;
-(void)setRouteLineSplitAnnotation:(id<VKRouteMatchedAnnotationPresentation>)arg1 ;
-(void)_setStyleTransitionProgress:(double)arg1 targetStyle:(DisplayStyle)arg2 step:(long long)arg3 ;
-(void)setMapType:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setLocalizeLabels:(BOOL)arg1 ;
-(BOOL)localizeLabels;
-(void)setTrafficIncidentsEnabled:(BOOL)arg1 ;
-(void)removeCustomFeatureDataSource:(id)arg1 ;
-(void)addCustomFeatureDataSource:(id)arg1 ;
-(id)attributionsForCurrentRegion;
-(void)setAdditionalManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(GEOResourceManifestConfiguration *)additionalManifestConfiguration;
-(void)setShieldSize:(long long)arg1 ;
-(long long)shieldSize;
-(id)transitLineMarkersInCurrentViewport;
-(void)selectTransitLineMarker:(id)arg1 ;
-(void)deselectTransitLineMarker;
-(id)selectedTransitLineIDs;
-(void)addOverlay:(id)arg1 ;
-(void)removeOverlay:(id)arg1 ;
-(NSArray *)overlays;
-(void)addRasterOverlay:(id)arg1 ;
-(void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)removeRasterOverlay:(id)arg1 ;
-(unsigned char)targetDisplay;
-(void)setLabelScaleFactor:(unsigned char)arg1 ;
-(void)setTargetDisplay:(unsigned char)arg1 ;
-(id)transitLineMarkersForSelectionAtPoint:(CGPoint)arg1 ;
-(void)setRouteContext:(id)arg1 ;
@end
