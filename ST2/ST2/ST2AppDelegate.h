//
//  ST2AppDelegate.h
//  ST2
//
//  Created by Piotr Zbyszyński on 11-05-17.
//  Copyright 2011 Binary Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ST2AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

//test fixed #2
//test gałęzi

@end
