//
//  ListViewController.h
//  Nerdfeed
//
//  Created by THOMAS PENG on 6/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RSSChannel;
@class WebViewController;

typedef enum {
    ListViewControllerRSSTypeBNR,
    ListVieWControllerRSSTypeApple
} ListViewControllerRSSType;

@interface ListViewController : UITableViewController
{
    RSSChannel *channel;
    ListViewControllerRSSType rssType;
}
@property (nonatomic, strong) WebViewController *webViewController;

- (void)fetchEntries;

@end

// A new protocol named ListViewControllerDelegate
@protocol ListViewControllerDelegate

// Classes that conform to this protocol must implement this method:
- (void)listViewController:(ListViewController *)lvc handleObject:(id)object;

@end