//
//  LoginViewController.h
//  Ribbit
//
//  Created by Oghosa Igbinakenzua on 2014-08-07.
//  Copyright (c) 2014 Oghosa Igbinakenzua. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
- (IBAction)login:(id)sender;

@end
