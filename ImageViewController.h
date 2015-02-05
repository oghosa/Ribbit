//
//  ImageViewController.h
//  Ribbit
//
//  Created by Oghosa Igbinakenzua on 2014-08-14.
//  Copyright (c) 2014 Oghosa Igbinakenzua. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ImageViewController : UIViewController

@property (nonatomic, strong) PFObject *message;

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
