//
//  FriendsViewController.h
//  Ribbit
//
//  Created by Oghosa Igbinakenzua on 2014-08-11.
//  Copyright (c) 2014 Oghosa Igbinakenzua. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FriendsViewController : UITableViewController

@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;
@end
