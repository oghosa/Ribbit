//
//  InboxViewController.h
//  Ribbit
//
//  Created by Oghosa Igbinakenzua on 2014-08-07.
//  Copyright (c) 2014 Oghosa Igbinakenzua. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <MediaPlayer/MediaPlayer.h>

@interface InboxViewController : UITableViewController

@property (nonatomic, strong) NSArray *messages;
@property (nonatomic, strong) PFObject *selectedMessage;
@property (nonatomic, strong) MPMoviePlayerController *moviePlayer;

- (IBAction)logout:(id)sender;

@end
