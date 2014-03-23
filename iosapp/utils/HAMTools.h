//
//  HAMTools.h
//  iosapp
//
//  Created by daiyue on 13-7-30.
//  Copyright (c) 2013年 Droplings. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HAMTools : NSObject
{}

+(void)setObject:(id)object toMutableArray:(NSMutableArray*)array atIndex:(NSInteger)pos;

+(NSDictionary*)jsonFromData:(NSData*)data;

@end
