//
//  AppDelegate.h
//  CoreData
//
//  Created by 敏捷软件 on 17/5/24.
//  Copyright © 2017年 xianminjie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

