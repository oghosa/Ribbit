//
//  EditFirendsViewController.h
//  Ribbit
//
//  Created by Oghosa Igbinakenzua on 2014-08-11.
//  Copyright (c) 2014 Oghosa Igbinakenzua. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface EditFirendsViewController : UITableViewController

@property (nonatomic, strong) NSArray *allUSers;
@property (nonatomic, strong) PFUser *currentUser;
@property (nonatomic, strong) NSMutableArray *friends;

-(BOOL)isFriend:(PFUser *)user;

@end
