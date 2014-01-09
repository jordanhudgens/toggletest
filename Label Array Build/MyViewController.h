//
//  MyViewController.h
//  Label Array Build
//
//  Created by Jordan Hudgens on 1/8/14.
//  Copyright (c) 2014 Jordan Hudgens. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyViewController : UIViewController

@property (retain, nonatomic) IBOutletCollection(UILabel) NSArray *arrayOfLabels;

@property (strong, nonatomic) IBOutlet UISwitch *switchValue;

@end
