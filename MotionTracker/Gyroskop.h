//
//  Gyroskop.h
//  MotionTracker
//
//  Created by Marcel Flick on 11.01.14.
//  Copyright (c) 2014 Marcel Flick. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Activity;

@interface Gyroskop : NSManagedObject

@property (nonatomic, retain) NSNumber * rotationRateX;
@property (nonatomic, retain) NSNumber * rotationRateY;
@property (nonatomic, retain) NSNumber * rotationRateZ;
@property (nonatomic, retain) Activity *activity;

@end
