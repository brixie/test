//
//  DetailViewController.h
//  test
//
//  Created by Serena Soldo on 03/11/14.
//  Copyright (c) 2014 Serena Soldo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

