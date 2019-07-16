//
//  JAFQuake.h
//  Quakie
//
//  Created by Julian A. Fordyce on 7/16/19.
//  Copyright © 2019 Glas Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JAFQuake : NSObject

@property NSString *identifier; // id is a keyword in OBJC

@property double magnitude;

@property NSString *place;

@property NSDate *time;

@property CLLocationCoordinate2D location;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;


@end

NS_ASSUME_NONNULL_END
