//
//  MAUIUtil.h
//  MiniApp
//
//  Created by lionvoom on 2020/10/19.
//  Copyright © 2020 wept. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WAUIKitUtil : NSObject

+ (NSString *)UserAgent;

/// 字符串是否为空
+ (BOOL)isEmptyStirng:(NSString *)str;

/**
 *  url query
 */
+ (NSDictionary *)getUrlQuery:(NSString *)url;

/**
 *  格式化html url
 *
 * 例1："/index/index" => "/index/index.html"
 * 例2："/index/index.html?id=1" => "/index/index.html?id=1"
 */
+ (NSString *)formatHtmlUrl:(NSString *)url;

/**
 *  格式化并去掉 url query
 *
 * 例1："/index/index.html?id=1" => "/index/index.html"
 * 例2："/index/index" => "/index/index.html"
 */
+ (NSString *)formatHtmlUrlAndRemoveQuery:(NSString *)url;

/// 获取本地文件的MIMEType
+ (NSString *)MIMETypeForLocalFilePath:(NSString *)path;

#pragma mark - UIKit

+ (UIWindow *)keyWindow;

/// 获取当前控制器
+ (UIViewController *)getCurrentVC;

/// 获取某根控制器的顶层控制器
+ (UIViewController*)topViewController:(UIViewController*)rootViewController;

#pragma mark - UIColor
/**
 Creates and returns a color object from hex string.
 
 refer to UIColor+YYAdd.h
 
 fix: #fff
 */
+ (UIColor *)colorWithHexString:(NSString *)hexStr;

@end

NS_ASSUME_NONNULL_END
