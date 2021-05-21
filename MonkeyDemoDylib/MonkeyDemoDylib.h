//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  MonkeyDemoDylib.h
//  MonkeyDemoDylib
//
//  Created by ZP on 2021/5/10.
//  Copyright (c) 2021 ___ORGANIZATIONNAME___. All rights reserved.
//

#import <Foundation/Foundation.h>

#define INSERT_SUCCESS_WELCOME "               🎉!!！congratulations!!！🎉\n👍----------------insert dylib success----------------👍\n"

@interface CustomViewController

@property (nonatomic, copy) NSString *newProperty;

+ (void)classMethod;

- (NSString *)getMyName;

- (void)newMethod:(NSString *)output;

@end
