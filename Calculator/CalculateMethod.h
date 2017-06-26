//
//  CalculateMethod.h
//  Calculator
//
//  Created by Joey Li on 06/15/17.
//  Copyright (c) 2017 BrandonMatthew. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculateMethod : NSObject

@property(assign,nonatomic)long double operand1,operand2,result;

-(long double)performOperation:(int)input;
-(void)clear;

@end
