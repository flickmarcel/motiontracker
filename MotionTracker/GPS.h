//
//  GPS.h
//  MotionTracker
//
//  Created by Marcel Flick on 29.12.13.
//  Copyright (c) 2013 Marcel Flick. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface GPS : NSManagedObject

@property (nonatomic, retain) NSNumber * altitude;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSNumber * speed;

@end
