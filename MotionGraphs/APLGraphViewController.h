//
//  APLUserInfoViewController.m
//  MotionGraphs
//
//  Created by andguer on 5/2/14.
//
//
/*
     File: APLGraphViewController.h
 Abstract: Superclass for the view controllers responsible for all UI interactions with the user and the sensors.
  */

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>

@interface APLGraphViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *updateIntervalLabel;

- (void)setLabelValueX:(double)x y:(double)y z:(double)z;
- (void)setLabelValueRoll:(double)roll pitch:(double)pitch yaw:(double)yaw;
- (void)startUpdatesWithSliderValue:(int)sliderValue;

@end
