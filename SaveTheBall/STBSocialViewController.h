//
//  STBSocialViewController.h
//  SaveTheBall
//
//  Created by Kody Wu on 2014-03-23.
//  Copyright (c) 2014 Spiral Iris Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Social/Social.h>

@interface STBSocialViewController : UIViewController
{
    SLComposeViewController *myFacebook;
    SLComposeViewController *myTwitter;
}

- (IBAction)facebook:(id)sender;
- (IBAction)twitter:(id)sender;
@end
