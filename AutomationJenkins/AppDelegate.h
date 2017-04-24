//
//  AppDelegate.h
//  AutomationJenkins
//
//  Created by CH1104 on 24/04/17.
//  Copyright © 2017 CH1104. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

