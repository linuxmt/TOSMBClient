//
//  TOFilesViewControllerTableViewController.h
//  TOSMBClientExample
//
//  Created by Tim Oliver on 8/5/15.
//  Copyright (c) 2015 TimOliver. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TOSMBSession;

@interface TOFilesTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *files;

- (instancetype)initWithSession:(TOSMBSession *)session title:(NSString *)title;

@end
