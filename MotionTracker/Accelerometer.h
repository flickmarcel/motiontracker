//
//  Accelerometer.h
//  MotionTracker
//
//  Created by Marcel Flick on 11.01.14.
//  Copyright (c) 2014 Marcel Flick. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Activity;

@interface Accelerometer : NSManagedObject

@property (nonatomic, retain) NSNumber * accelerationX;
@property (nonatomic, retain) NSNumber * accelerationY;
@property (nonatomic, retain) NSNumber * accelerationZ;
@property (nonatomic, retain) Activity *activity;

@end
