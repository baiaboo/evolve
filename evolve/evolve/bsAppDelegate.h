//
//  bsAppDelegate.h
//  evolve
//
//  Created by Rai, Baiaboo on 2/20/14.
//  Copyright (c) 2014 Rai, Baiaboo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface bsAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
