//
//  ViewController.h
//  Music Info
//
//  Created by Chloe Stars on 8/14/12.
//  Copyright (c) 2012 Chloe Stars. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <KKGridView/KKGridView.h>
#import "AccountViewController.h"
#import "LFMRecentTracks.h"
#import "LFMTrackInfo.h"
#import "LFMArtistInfo.h"
#import "LFMArtistTopTracks.h"
#import "LFMArtistTopAlbums.h"
#import "ODRefreshControl.h"
#import "UITagView.h"
#import "SVSegmentedControl.h"
#import "Reachability.h"

@interface ViewController : UIViewController <AccountViewControllerDelegate, LFMRecentTracksDelegate, LFMArtistInfoDelegate, LFMTrackInfoDelegate, LFMArtistTopAlbumsDelegate, LFMArtistTopTracksDelegate, KKGridViewDataSource, KKGridViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    IBOutlet UILabel *artist;
    IBOutlet UITextView *bioTextView;
    IBOutlet UIImageView *artistImageView;
	IBOutlet UIProgressView *playTimeProgressView;
	IBOutlet UILabel *album;
	IBOutlet UILabel *track;
	IBOutlet UIImageView *albumArtView;
	IBOutlet UIView *bottomBarView;
	IBOutlet UITagView *tagView;
	IBOutlet UIView *biographyView;
	IBOutlet UIView *topAlbumsView;
	IBOutlet UIView *topTracksView;
	IBOutlet KKGridView *albumGridView;
	IBOutlet UITableView *topTracksTableView;
	BOOL isFinishedLoadingArtistInfo, isFinishedLoadingTrackInfo, isFinishedLoadingTopAlbums, isFinishedLoadingTopTracks;
	BOOL isUsingiPod;
    LFMRecentTracks *recentTracks;
    LFMArtistInfo *artistInfo;
	LFMTrackInfo *trackInfo;
	LFMArtistTopAlbums *topAlbums;
	LFMArtistTopTracks *topTracks;
	MPMusicPlayerController *iPodController;
	NSTimer *playbackTimer;
	ODRefreshControl *refreshControl;
	SVSegmentedControl *navigation;
	CALayer *bioMask;
	CALayer *tagMaskLeft;
	CALayer *tagMaskMiddle;
	CALayer *tagMaskRight;
	NSThread *iPodReloadingThread;
	NSArray *topAlbumsArray;
	NSArray *topTracksArray;
	UILabel *versionLabel;
	UILabel *copyrightLabel;
	Reachability* reach;
}

@end
