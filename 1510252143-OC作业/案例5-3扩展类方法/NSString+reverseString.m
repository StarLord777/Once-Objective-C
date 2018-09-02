//
//  NSString+reverseString.m
//  OC
//
//  Created by 30 on 17/12/22.
//  Copyright (c) 2017年 data. All rights reserved.
//

#import "NSString+reverseString.h"

@implementation NSString (reverseString)


+(id)reverseString:(NSString *)str{
  
    NSMutableString *result=[NSMutableString stringWithCapacity:[str length]];
    NSUInteger len=[str length];
    while (len>0) {
        char a=[str characterAtIndex:--len];
        NSString *b=[NSString stringWithFormat:@"%c",a];
        
        [result appendString:b];
    }
    return result;
}






@end
