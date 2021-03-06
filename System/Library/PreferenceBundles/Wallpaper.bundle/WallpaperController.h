/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UIImage, PLWallpaperImageViewController;

@interface WallpaperController : PSListController {

	BOOL __wallpaperThumbnailsAreValid;
	UIImage* __homeScreenImage;
	UIImage* __lockScreenImage;
	PLWallpaperImageViewController* _wallpaperImageViewController;

}

@property (setter=_setHomeScreenImage:,nonatomic,retain) UIImage * _homeScreenImage;                                 //@synthesize _homeScreenImage=__homeScreenImage - In the implementation block
@property (setter=_setLockScreenImage:,nonatomic,retain) UIImage * _lockScreenImage;                                 //@synthesize _lockScreenImage=__lockScreenImage - In the implementation block
@property (assign,setter=_setWallpaperThumbnailsAreValid:,nonatomic) BOOL _wallpaperThumbnailsAreValid;              //@synthesize _wallpaperThumbnailsAreValid=__wallpaperThumbnailsAreValid - In the implementation block
@property (nonatomic,retain) PLWallpaperImageViewController * wallpaperImageViewController;                          //@synthesize wallpaperImageViewController=_wallpaperImageViewController - In the implementation block
-(id)init;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)editImageViewController:(id)arg1 didEditImageWithOptions:(id)arg2 ;
-(void)editImageViewControllerDidCancel:(id)arg1 ;
-(void)_wallpaperDidChange:(id)arg1 ;
-(void)_setWallpaperThumbnailsAreValid:(BOOL)arg1 ;
-(void)_updateImagesSynchronously:(BOOL)arg1 ;
-(void)_updatePreviewCellWithImages;
-(BOOL)_wallpaperThumbnailsAreValid;
-(void)_setHomeScreenImage:(id)arg1 ;
-(void)_setLockScreenImage:(id)arg1 ;
-(UIImage *)_homeScreenImage;
-(UIImage *)_lockScreenImage;
-(void)_thumbnailTapped:(id)arg1 ;
-(void)setWallpaperImageViewController:(PLWallpaperImageViewController *)arg1 ;
-(void)_updateButtonTargets;
-(void)_pushAppropriateController;
-(void)_pushFactoryStillsController;
-(void)_pushAlbumListTableViewController;
-(double)_requiredHeight;
-(PLWallpaperImageViewController *)wallpaperImageViewController;
-(id)specifiers;
@end

