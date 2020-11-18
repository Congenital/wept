//
//  WAJSCoreService.h
//  WeAppExample
//
//  Created by wulinfeng on 2020/11/18.
//  Copyright © 2020 wept. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WAAppTask;

NS_ASSUME_NONNULL_BEGIN

@interface WAJSCoreService : NSObject
@property (nonatomic, weak) WAAppTask *appTask;

- (instancetype)initWithAppTask:(WAAppTask *)appTask port:(NSInteger)port;

- (void)startService;

@end

NS_ASSUME_NONNULL_END
