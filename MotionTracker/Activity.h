//
//  Activity.h
//  MotionTracker
//
//  Created by Marcel Flick on 08.01.14.
//  Copyright (c) 2014 Marcel Flick. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Accelerometer, GPS, Gyroskop;

@interface Activity : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSSet *gyroskopData;
@property (nonatomic, retain) NSSet *accelerometerData;
@property (nonatomic, retain) NSSet *gpsData;
@end

@interface Activity (CoreDataGeneratedAccessors)

- (void)addGyroskopDataObject:(Gyroskop *)value;
- (void)removeGyroskopDataObject:(Gyroskop *)value;
- (void)addGyroskopData:(NSSet *)values;
- (void)removeGyroskopData:(NSSet *)values;

- (void)addAccelerometerDataObject:(Accelerometer *)value;
- (void)removeAccelerometerDataObject:(Accelerometer *)value;
- (void)addAccelerometerData:(NSSet *)values;
- (void)removeAccelerometerData:(NSSet *)values;

- (void)addGpsDataObject:(GPS *)value;
- (void)removeGpsDataObject:(GPS *)value;
- (void)addGpsData:(NSSet *)values;
- (void)removeGpsData:(NSSet *)values;

@end
