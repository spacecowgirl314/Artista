//
//  ViewController.h
//  Music Info
//
//  Created by Chloe Stars on 8/14/12.
//  Copyright (c) 2012 Chloe Stars. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "AccountViewController.h"
#import "LFMRecentTracks.h"
#import "LFMTrackInfo.h"
#import "LastFMArtistInfo.h"
#import "ODRefreshControl.h"
#import "UITagView.h"
#import "SVSegmentedControl.h"

@interface ViewController : UIViewController <AccountViewControllerDelegate, LFMRecentTracksDelegate, LastFMArtistInfoDelegate, LFMTrackInfoDelegate, UITextViewDelegate> {
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
    LFMRecentTracks *recentTracks;
    LastFMArtistInfo *artistInfo;
	MPMusicPlayerController *iPodController;
	NSTimer *playbackTimer;
	ODRefreshControl *refreshControl;
	CALayer *bioMask;
	CALayer *tagMaskLeft;
	CALayer *tagMaskMiddle;
	CALayer *tagMaskRight;
	NSThread *iPodReloadingThread;
}

@end
