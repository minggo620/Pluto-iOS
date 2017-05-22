//
//  AppDelegate.h
//  Pluto-iOS
//
//  Created by minggo on 2017/5/22.
//  Copyright © 2017年 minggo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end
