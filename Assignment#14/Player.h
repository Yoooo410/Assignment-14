//
//  Player.h
//  Assignment#14
//
//  Created by yoshitokomiya on 2017-05-05.
//  Copyright © 2017 yoshitokomiya. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property NSInteger currentSqure;
@property NSDictionary *gameLogic;
@property NSString *output;
@property BOOL gameOver;

-(void) roll;

@end
