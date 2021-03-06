//
//  ViewController.m
//  WeAppExample
//
//  Created by lionvoom on 2020/11/16.
//  Copyright © 2020 wept. All rights reserved.
//

#import "ViewController.h"
#import "MMContext.h"
#import "WAFileMgr.h"
#import "WAAppPreloader.h"
#import "WAAppTaskMgr.h"

static NSString *kDemoAppId = @"miniprogram";

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString *path = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject;
    NSLog(@"NSDocumentDirectory:%@", path);
}

- (IBAction)openWeApp:(UIButton *)sender {
    //准备debug包
    [WAFileMgr WAAppPrepareDebugPackage:kDemoAppId];

    WAAppOpenParameter *parameter = [[WAAppOpenParameter alloc] init];
    parameter.m_nsAppId = kDemoAppId;
    parameter.m_nsUserName = @"wept-user";

    WAAppPreloader *preloader = [[MMContext currentContext] getService:WAAppPreloader.class];
    [preloader openApp:parameter taskExtInfo:nil handlerWrapper:nil];
}

- (IBAction)closeWeApp:(id)sender {
    WAAppTaskMgr *appTaskManager = [[MMContext currentContext] getService:WAAppTaskMgr.class];
    [appTaskManager closeTaskWithAppID:kDemoAppId reason:0];
}

@end
