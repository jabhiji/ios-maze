//
//  Model.h
//  Maze
//
//  Created by Abhijit Joshi on 5/21/14.
//  Copyright (c) 2014 Misha software solutions. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Model : NSObject

// LGEO array
@property int nx, ny;
@property NSMutableArray* LGEO;

// domain size
@property float width, height;

// ball
@property float x, y, R, ux, uy, ax, ay;
@property float lastx, lasty;
- (void) updateBallPosition;

// coefficient of restitution
@property float COR;

@end