//
//  FriendsViewController.m
//  Ribbit
//
//  Created by Oghosa Igbinakenzua on 2014-08-11.
//  Copyright (c) 2014 Oghosa Igbinakenzua. All rights reserved.
//

#import "FriendsViewController.h"
#import "EditFirendsViewController.h"

@interface FriendsViewController ()

@end

@implementation FriendsViewController


- (void)viewDidLoad
{
    [super viewDidLoad];
    
    
}

-(void)viewWillAppear:(BOOL)animated {
    
    [super viewWillAppear:animated];
    
    self.friendsRelation = [[PFUser currentUser] objectForKey:@"friendsRelation"];
    
    PFQuery *query = [self.friendsRelation query];
    [query orderByAscending:@"username"];
    [query findObjectsInBackgroundWithBlock:^(NSArray *objects, NSError *error) {
        if (error) {
            NSLog(@"Error %@ %@", error, error.userInfo);
        }
        else {
            self.friends = objects;
            [self.tableView reloadData];
        }
    }];
}

-(void) prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    if ([segue.identifier isEqualToString:@"showEditFriends"]) {
        EditFirendsViewController *viewController = (EditFirendsViewController *)segue.destinationViewController;
        viewController.friends = [NSMutableArray arrayWithArray:self.friends];
    }
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    // Return the number of sections.
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    // Return the number of rows in the section.
    return [self.friends count];
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIdentifier = @"Cell";
    UITableViewCell *Cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier forIndexPath:indexPath];
    
    PFUser *user = [self.friends objectAtIndex:indexPath.row];
    Cell.textLabel.text = user.username;
    
    return Cell;
}



@end
