//
//  MineSweeperAppDelegate.h
//  Minesweeper
//
//  Created by Suhail Rashid Bhat on 12/11/13.
//  Copyright (c) 2013 SuhailBhat. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MineSweeperAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
