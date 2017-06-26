//
//  ViewController.h
//  Calculator
//
//  Created by Joey Li on 06/15/17.
//  Copyright (c) 2017 BrandonMatthew. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *portraitDisplay;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *allButtons;
@property (strong, nonatomic) IBOutlet UIView *additionalOptions;

@end

