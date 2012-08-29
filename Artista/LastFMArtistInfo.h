//
//  LastFMArtistInfo.h
//  Musica
//
//  Created by Chloe Stars on 2/27/11.
//  Copyright 2011 Ozipto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LFMArtist.h"
#import "NSString+URLEncoding.h"

@protocol LastFMArtistInfoDelegate <NSObject>
@required
- (void) didReceiveArtistInfo: (LFMArtist *)artist;
- (void) didFailToReceiveArtistDetails: (NSError *)error;
@end

@interface LastFMArtistInfo : NSObject <NSXMLParserDelegate> {
    id <LastFMArtistInfoDelegate> delegate;
    
    @private
    NSString *currentElement;
    NSString *currentAttribute;
    UIImage *artistImage;
    NSString *artistDetails;
	BOOL isInsideTagsTag;
	NSMutableArray *tagsArray;
}

@property (strong) id delegate;

- (void)requestInfoWithArtist:(NSString*)artist;
- (void)requestInfoWithMusicBrainzID:(NSString*)mbid;
-(NSError *)parseData:(NSData *)info;

@end