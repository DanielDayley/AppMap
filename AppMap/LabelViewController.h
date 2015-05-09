//
//  LabelViewController.h
//  AppMap
//
//  Created by Daniel Dayley on 5/5/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LabelViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (strong, nonatomic) NSString *identifier;

@end
